/*
  ==============================================================================

    OscPanel.h
    Created: 13 Sep 2018 2:31:04pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include "SympleSynth.hpp"

//==============================================================================
/*
*/
class OscPanel    : public Component,
                    public ComboBox::Listener,
                    public Slider::Listener
{
public:
    OscPanel();
    ~OscPanel();

    void paint (Graphics&) override;
    void resized() override;

    void comboBoxChanged(ComboBox* combobox) override;
    void sliderValueChanged(Slider* slider) override;

    void connectSynth(SympleSynth* synth);

    void initRotarySlider(Slider& slider, double minRange, double maxRange, double interval, double defaultValue, String suffix);

private:
    SympleSynth* osc;

    ComboBox waveForm;

    Slider gain;

    Slider attack;
    Slider decay;
    Slider sustain;
    Slider release;
    Label attackLabel;
    Label decayLabel;
    Label sustainLabel;
    Label releaseLabel;
  
    Slider octave;
    Slider semitone;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (OscPanel)
};
