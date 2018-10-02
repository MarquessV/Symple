/*
  ==============================================================================

    Oscillator.h
    Created: 1 Aug 2018 8:29:49pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "WaveTables.hpp"

class Oscillator
{
  public:
    Oscillator();
    void setFrequency (double frequency, double sampleRate);
    enum waveForms {sine, saw, triangle, square, noise};
    void setWaveForm (waveForms wave);
    float getNextSample();

  private:
    double currFrequency;
    double index;
    double delta;
    unsigned tableSize;
    AudioSampleBuffer* currentTable;
    static WaveTables waveTables;
    Random random;
};
