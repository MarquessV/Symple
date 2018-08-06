/*
  ==============================================================================

    WaveTables.h
    Created: 1 Aug 2018 8:50:55pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class WaveTables
{
  public:
    WaveTables();

    AudioSampleBuffer sine;
    AudioSampleBuffer saw;
    AudioSampleBuffer square;
    AudioSampleBuffer triangle;

    int getTableSize();
    
  private:
    unsigned tableSize;
    void createSine();
    void createSaw();
    void createSquare();
    void createTriangle();
};