/*
  ==============================================================================

    SympleSynth.h
    Created: 3 Aug 2018 2:11:20pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include "Oscillator.hpp"

struct SympleSynthParams
{
    float amplitude = 0.5;
};

class SympleSynth : public Synthesiser
{
  public:
    void renderNextBlock (AudioBuffer<float>& outputAudio, const MidiBuffer& inputMidi, int startSample, int numSamples);

    void setWaveForm (Oscillator::waveForms wave);

    void setAmplitude (float amplitude);

    void setEnvelopeParams(double attack, double decay, double sustain, double release);
  
    void setPitchParams(int octave, int semitone);

  private:
    SympleSynthParams params;
};
