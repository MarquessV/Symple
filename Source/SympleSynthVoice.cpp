/*
  ==============================================================================

    SympleSynthVoice.cpp
    Created: 3 Aug 2018 2:11:47pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#include "SympleSynthVoice.h"


void SympleSynthVoice::renderNextBlock(AudioBuffer<float> &outputBuffer, int startSample, int numSamples)
{
    for (int sample = 0; sample < numSamples; ++sample)
    {
        double sampleToAdd = osc.getNextSample() * amp;
        for (int channel = 0; channel < outputBuffer.getNumChannels(); ++channel)
        {
            outputBuffer.addSample(channel, startSample, sampleToAdd);
        }
        ++startSample;
    }
}


void SympleSynthVoice::controllerMoved(int controllerNumber, int newControllerValue)
{ 
}


void SympleSynthVoice::pitchWheelMoved(int newPitchWheelValue)
{ 
}


void SympleSynthVoice::stopNote(float velocity, bool allowTailOff)
{ 
  clearCurrentNote();
  amp = 0.0;
}


void SympleSynthVoice::startNote(int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition)
{ 
  amp = velocity * 0.15;
  frequency = MidiMessage::getMidiNoteInHertz(midiNoteNumber);
  osc.setFrequency(frequency, getSampleRate());
}

void SympleSynthVoice::setWaveForm(Oscillator::waveForms wave)
{
  osc.setWaveForm(wave);
}


bool SympleSynthVoice::canPlaySound(SynthesiserSound *sound)
{ 
  return dynamic_cast<SympleSynthSound*> (sound) != nullptr;
}
