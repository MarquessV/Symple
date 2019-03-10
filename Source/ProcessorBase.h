/*
  ==============================================================================

    ProcessorBase.h
    Created: 10 Mar 2019 11:51:18am
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//! A default implementation of the AudioProcessor base class.
/*!
 *  A base class that provides default implementations for pure virtual methods
 *  of the AudioProcessor class. Provides minimal defaults so that derived
 *  classes don't have to repeat the same boilerplate code for unneeded methods.
 */

class ProcessorBase : public AudioProcessor {
public:
  ProcessorBase() {}
  ~ProcessorBase() {}

  void prepareToPlay(double, int) override {}
  void releaseResources() override {}
  void processBlock(AudioSampleBuffer &, MidiBuffer &) override {}

  AudioProcessorEditor *createEditor() override { return nullptr; }
  bool hasEditor() const override { return false; }

  const String getName() const override { return {}; }
  bool acceptsMidi() const override { return false; }
  bool producesMidi() const override { return false; }
  double getTailLengthSeconds() const override { return 0; }

  int getNumPrograms() override { return 0; }
  int getCurrentProgram() override { return 0; }
  void setCurrentProgram(int) override {}
  const String getProgramName(int) override { return {}; }
  void changeProgramName(int, const String &) override {}

  void getStateInformation(MemoryBlock &destData) override {}
  void setStateInformation(const void *data, int sizeInBytes) override {}

private:
  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(ProcessorBase)
};
