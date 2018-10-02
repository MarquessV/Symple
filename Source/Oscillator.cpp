/*
  ==============================================================================

    Oscillator.cpp
    Created: 1 Aug 2018 8:30:09pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#include "Oscillator.hpp"

WaveTables Oscillator::waveTables;

Oscillator::Oscillator()
{
  index = 0.0;
  currFrequency = 0.0;
  delta = 0.0;
  tableSize = waveTables.getTableSize();
  currentTable = &waveTables.sine;
};

void Oscillator::setFrequency (double frequency, double sampleRate)
{
  if(currFrequency != frequency) {
    delta = frequency * tableSize / sampleRate;
    currFrequency = frequency;
  }
}

void Oscillator::setWaveForm(waveForms wave)
{
  switch(wave)
  {
    case(waveForms::sine):
      currentTable = &waveTables.sine;
      break;
    case(waveForms::saw):
      currentTable = &waveTables.saw;
      break;
    case(waveForms::square):
      currentTable = &waveTables.square;
      break;
    case(waveForms::triangle):
      currentTable = &waveTables.triangle;
      break;
    default:
      currentTable = nullptr;
  }
}

float Oscillator::getNextSample()
{
  // currentTable == nullptr -> noise osc
  if(!currentTable)
  {
    return 2.0 * random.nextDouble() - 1.0;
  }

  unsigned index0 = static_cast<unsigned> (index);
  unsigned index1 = (index0 == tableSize - 1 ? 0 : index0 + 1);

  double diff = index - static_cast<double> (index0);

  auto* table = currentTable->getReadPointer (0);

  auto value0 = table[index0];
  auto value1 = table[index1];

  if ((index += delta) > tableSize)
    index -= tableSize;

  return value0 + diff * (value1 - value0); 
}
