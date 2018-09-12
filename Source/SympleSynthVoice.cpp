/*
  ==============================================================================

    SympleSynthVoice.cpp
    Created: 3 Aug 2018 2:11:47pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#include <iostream>
#include "SympleSynthVoice.h"

SympleSynthVoice::SympleSynthVoice() : SynthesiserVoice(), ampEnv (getSampleRate())
{
}

void SympleSynthVoice::renderNextBlock (AudioBuffer<float> &outputBuffer, int startSample, int numSamples)
{
    for (int sample = 0; sample < numSamples; ++sample)
    {
        double sampleToAdd = osc.getNextSample() * amp * ampEnv.getNextSample();
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
  amp = velocity * 0.15;
  frequency = MidiMessage::getMidiNoteInHertz (midiNoteNumber);
  osc.setFrequency(frequency, getSampleRate());
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