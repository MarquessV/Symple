/*
  ==============================================================================

    SympleSynthSound.h
    Created: 3 Aug 2018 2:12:01pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include "Oscillator.h"

class SympleSynthSound : public SynthesiserSound
{
  public:
    bool appliesToNote(int note) override;
    bool appliesToChannel(int channel) override;
};