/*
  ==============================================================================

    WaveTables.cpp
    Created: 1 Aug 2018 8:50:55pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#include "WaveTables.h"

WaveTables::WaveTables()
{
  tableSize = (1 << 15);
  createSine();
  createSaw();
  createSquare();
  createTriangle();
}

void WaveTables::createSine()
{
  sine.setSize (1, tableSize + 1);
  auto* samples = sine.getWritePointer (0);

  double delta = MathConstants<double>::twoPi / static_cast<double> (tableSize - 1);
  double angle = 0.0;

  for (unsigned i = 0; i < tableSize; ++i)
  {
    double sample = std::sin(angle);
    samples[i] = static_cast<double> (sample);
    angle += delta;
  }

  samples[tableSize] = samples[0];
}

void WaveTables::createSaw()
{
  saw.setSize (1, tableSize + 1);
  auto* samples = saw.getWritePointer (0);
  int half = tableSize / 2;
  for (int i = 0; i < half; ++i)
  {
    samples[i] = static_cast<double> (i) / half - 1.0;
  }
}

void WaveTables::createSquare()
{
  square.setSize (1, tableSize + 1);
  auto* samples = square.getWritePointer (0);
  int half = tableSize / 2;
  for (int i = 0; i < half; ++i)
  {
    samples[i] = -1.0;
    samples[half + i] = 1.0;
  }
}

void WaveTables::createTriangle()
{
  triangle.setSize (1, tableSize + 1);
  auto* samples = triangle.getWritePointer (0);
  int half = tableSize / 2;
  double delta = 2.0 / tableSize;
  for (int i = 0; i < half; ++i)
  {
    double diff = i * delta;
    samples[i] = -1.0 + diff;
    samples[tableSize - i] = samples[i];
  }
}

int WaveTables::getTableSize()
{
  return tableSize;
}
