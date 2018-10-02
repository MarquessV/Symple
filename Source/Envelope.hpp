/*
  ==============================================================================

    Envelope.h
    Created: 17 Aug 2018 9:56:12am
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class Envelope
{
  public:
    enum EnvelopeState
    {
      off = 0,
      attack,
      decay,
      sustain,
      release,
      numStates
    };

    Envelope (double newSampleRate);
    float getNextSample();
    EnvelopeState getState() const;
    void enterState (EnvelopeState newState);
    void setSampleRate (double newSampleRate);
    void setParams(double attack, double decay, double sustain, double release);
    const double minLevel;

  private:
    EnvelopeState currentState;
    double stateValue[numStates];

    double currentLevel;
    double multiplier;
    double sampleRate;

    void calculateMultiplier (double startLevel, double endLevel, unsigned long long lengthInSamples);
    unsigned currentSampleIndex;
    unsigned nextStateSampleIndex;
};
