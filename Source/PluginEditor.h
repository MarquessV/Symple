/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class SympleAudioProcessorEditor  : public AudioProcessorEditor,
                                    public Slider::Listener,
                                    public ComboBox::Listener
{
public:
    SympleAudioProcessorEditor (SympleAudioProcessor&);
    ~SympleAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    void sliderValueChanged(Slider *slider) override;

    void comboBoxChanged(ComboBox *combobox) override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    SympleAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SympleAudioProcessorEditor)
    
    Slider osc1GainSlider;
    Slider osc2GainSlider;

    ComboBox osc1WaveForm;
    ComboBox osc2WaveForm;
};
