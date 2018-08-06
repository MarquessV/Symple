/*
  ==============================================================================

    SympleSynth.cpp
    Created: 3 Aug 2018 2:11:20pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#include "SympleSynth.h"
#include "SympleSynthVoice.h"

void SympleSynth::setWaveForm(Oscillator::waveForms wave)
{
  for (int i = 0; i < getNumVoices(); ++i)
  {
    SympleSynthVoice* voice = dynamic_cast<SympleSynthVoice*> (getVoice(i));
    voice->setWaveForm(wave);
  }
}