/*
  ==============================================================================

    Envelope.cpp
    Created: 17 Aug 2018 9:56:12am
    Author:  Marquess Valdez

  ==============================================================================
*/

#include <string>
#include <vector>
#include "Envelope.h"

Envelope::Envelope (double newSampleRate) : minLevel (0.0001),
                                            currentState (off),
                                            currentLevel (minLevel),
                                            multiplier (1.0),
                                            sampleRate (newSampleRate),
                                            currentSampleIndex (0),
                                            nextStateSampleIndex (0)
{
  stateValue[off] = 0.0;
  stateValue[attack] = 0.5;
  stateValue[decay] = 0.5;
  stateValue[sustain] = 0.1;
  stateValue[release] = 1.0;
}

double Envelope::getNextSample()
{
  if (currentState != EnvelopeState::off && currentState != EnvelopeState::sustain)
  {
    if (currentSampleIndex == nextStateSampleIndex)
    {
      EnvelopeState newState = static_cast<EnvelopeState> ((currentState + 1) % EnvelopeState::numStates);
      enterState (newState);
    }
    currentLevel *= multiplier;
    ++currentSampleIndex;
  }
  return currentLevel;
}

Envelope::EnvelopeState Envelope::getState() const
{
  return currentState;
}

void Envelope::enterState (EnvelopeState newState)
{
  currentState = newState;
  currentSampleIndex = 0;
  if (currentState == EnvelopeState::off || currentState == EnvelopeState::sustain)
    nextStateSampleIndex = 0;
  else
    nextStateSampleIndex = stateValue[currentState] * sampleRate;
  switch (newState)
  {
    case EnvelopeState::off:
      currentLevel = 0.0;
      multiplier = 1.0;
      break;
    case EnvelopeState::attack:
      currentLevel = minLevel;
      calculateMultiplier (currentLevel, 1.0, nextStateSampleIndex);
      break;
    case EnvelopeState::decay:
      currentLevel = 1.0;
      calculateMultiplier (currentLevel, fmax (stateValue[EnvelopeState::sustain], minLevel), nextStateSampleIndex);
      break;
    case EnvelopeState::sustain:
      currentLevel = stateValue[EnvelopeState::sustain];
      multiplier = 1.0;
      break;
    case EnvelopeState::release:
      calculateMultiplier (currentLevel, minLevel, nextStateSampleIndex);
      break;
    default:
      break;
  }
}

void Envelope::setSampleRate (double newSampleRate)
{
  sampleRate = newSampleRate;
}

void Envelope::calculateMultiplier (double startLevel, double endLevel, unsigned long long lengthInSamples)
{
  multiplier = 1.0 + (log (endLevel) - log (startLevel)) / (lengthInSamples);
}
