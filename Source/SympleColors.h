/*
  ==============================================================================

    SympleColors.h
    Created: 6 Aug 2018 12:07:24pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class SympleColors
{
  public:
    static JUCE_API const Colour background, foreground, tint, blue, dark_blue, orange;

  private:
    SympleColors();  
    JUCE_DECLARE_NON_COPYABLE (SympleColors);
};