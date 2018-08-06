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

class SympleSynth : public Synthesiser
{
  public:
    void setWaveForm(Oscillator::waveForms wave);
};