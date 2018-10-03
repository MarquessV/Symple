/*
  ==============================================================================

    SympleSynthVoice.cpp
    Created: 3 Aug 2018 2:11:47pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#include <iostream>
#include "SympleSynthVoice.hpp"

SympleSynthVoice::SympleSynthVoice() : ampEnv (getSampleRate()), pitchMod(1.0f)
{
}

void SympleSynthVoice::renderNextBlock (AudioBuffer<float> &outputBuffer, int startSample, int numSamples)
{
    for (int sample = 0; sample < numSamples; ++sample)
    {
        float sampleToAdd = osc.getNextSample() * amp * ampEnv.getNextSample();
        for (int channel = 0; channel < outputBuffer.getNumChannels(); ++channel)
        {
            outputBuffer.addSample (channel, startSample, sampleToAdd);
        }
        ++startSample;
    }
    if (ampEnv.getState() == Envelope::EnvelopeState::off)
    {
      clearCurrentNote();
    }
}


void SympleSynthVoice::controllerMoved (int controllerNumber, int newControllerValue)
{ 
}


void SympleSynthVoice::pitchWheelMoved (int newPitchWheelValue)
{
}


void SympleSynthVoice::stopNote (float velocity, bool allowTailOff)
{
  if (allowTailOff)
  {
    ampEnv.enterState (Envelope::EnvelopeState::release);
  }
  else
  {
    ampEnv.enterState (Envelope::EnvelopeState::off);
    clearCurrentNote();
  }
}


void SympleSynthVoice::startNote (int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition)
{
  ampEnv.enterState (Envelope::EnvelopeState::attack);
  amp = velocity * 0.15f;
  frequency = MidiMessage::getMidiNoteInHertz (midiNoteNumber);
  osc.setFrequency(static_cast<double>(frequency * pitchMod), getSampleRate());
}

void SympleSynthVoice::setWaveForm (Oscillator::waveForms wave)
{
  osc.setWaveForm(wave);
}

void SympleSynthVoice::setEnvelopeParams (double attack, double decay, double sustain, double release)
{
  ampEnv.setParams(attack, decay, sustain, release);
}

bool SympleSynthVoice::canPlaySound (SynthesiserSound *sound)
{ 
  return dynamic_cast<SympleSynthSound*> (sound) != nullptr;
}

void SympleSynthVoice::setPitchParams(int octave, int semitone)
{
  if(octave != octaveParam || semitone != semitoneParam)
  {
    octaveParam = octave;
    semitoneParam = semitone;
    pitchMod = (octave == 0 ? 1 : 2 << (octave - 1)) * pow(2.0f, semitone / 12.0f);
    osc.setFrequency(frequency * pitchMod, getSampleRate());
  }
}

