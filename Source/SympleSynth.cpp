/*
  ==============================================================================

    SympleSynth.cpp
    Created: 3 Aug 2018 2:11:20pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#include "SympleSynth.h"
#include "SympleSynthVoice.h"

void SympleSynth::renderNextBlock (AudioBuffer<float>& outputAudio, const MidiBuffer& inputMidi, int startSample, int numSamples)
{
  Synthesiser::renderNextBlock(outputAudio, inputMidi, startSample, numSamples);
  outputAudio.applyGain(params.amplitude);
}

void SympleSynth::setWaveForm (Oscillator::waveForms wave)
{
  for (int i = 0; i < getNumVoices(); ++i)
  {
    SympleSynthVoice* voice = dynamic_cast<SympleSynthVoice*> (getVoice(i));
    voice->setWaveForm(wave);
  }
}

void SympleSynth::setParams (float amplitude)
{
  params.amplitude = amplitude;
}