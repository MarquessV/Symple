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

Envelope::Envelope (double newSampleRate) : minLevel (0.0001),    // multiplier would not work with a 0 level.
                                            currentState (off),
                                            currentLevel (minLevel),
                                            multiplier (1.0),
                                            sampleRate (newSampleRate),
                                            currentSampleIndex (0),
                                            nextStateSampleIndex (0)
{
  stateValue[EnvelopeState::off] = 0.0;      // For off the value is irrelevant (a level of 0.0 is hardcoded in enterState())
  stateValue[EnvelopeState::attack] = 0.5;   // For attack, decay, release, this is the length of the state in seconds.
  stateValue[EnvelopeState::decay] = 0.5;  
  stateValue[EnvelopeState::sustain] = 0.1;  // For sustain this is the level to maintain.
  stateValue[EnvelopeState::release] = 1.0;
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

void Envelope::setParams (double attack, double decay, double sustain, double release)
{
  stateValue[EnvelopeState::attack] = attack;
  stateValue[EnvelopeState::decay] = decay;
  stateValue[EnvelopeState::sustain] = sustain;
  stateValue[EnvelopeState::release] = release;
}

void Envelope::setSampleRate (double newSampleRate)
{
  sampleRate = newSampleRate; // TODO - recalculation or a reset is probably needed here.
}

/*
 * If x is the current level, and y is the target level and s is the number of samples we want to transition from x to y then:
 *    y - x = the total distance to travel and (y - x) / s = the distance needed to travel each sample.
 * Notice that, if x > y then we would get a negative value n. We don't want a negative multiplier, rather, if we want to decrease the level,
 * we need 1.0 - n. Finally, our ears perceive volume changes logarithmically so it is necessary to take the natural log of both levels
 * before performing the calculation.
 */
void Envelope::calculateMultiplier (double startLevel, double endLevel, unsigned long long lengthInSamples)
{
  multiplier = 1.0 + (log (endLevel) - log (startLevel)) / (lengthInSamples);
}
