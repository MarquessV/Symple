/*
  ==============================================================================

    SympleSynth.h
    Created: 3 Aug 2018 2:11:20pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include "Oscillator.h"

class SympleSynthParams
{
  public:
    float amplitude = 0.5;
};

class SympleSynth : public Synthesiser
{
  public:
    void renderNextBlock (AudioBuffer<float>& outputAudio, const MidiBuffer& inputMidi, int startSample, int numSamples);

    void setWaveForm (Oscillator::waveForms wave);

    void setParams (float amplitude);

  private:
    SympleSynthParams params;
};