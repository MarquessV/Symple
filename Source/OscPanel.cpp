/*
  ==============================================================================

    OscPanel.cpp
    Created: 13 Sep 2018 2:31:04pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "OscPanel.h"
#include "SympleColors.h"

//==============================================================================
OscPanel::OscPanel()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    waveForm.addItem("Sin", 1);
    waveForm.addItem("Tri", 2);
    waveForm.addItem("Saw", 3);
    waveForm.addItem("Squ", 4);
    waveForm.addItem("Noi", 5);
    waveForm.setSelectedId(1);
    waveForm.addListener(this);
    addAndMakeVisible(waveForm);

    initRotarySlider(attack, 0.001, 10.0, 0.001, "s");
    initRotarySlider(decay, 0.001, 10.0, 0.001, "s");
    initRotarySlider(sustain, 0.001, 1.0, 0.001, "x");
    initRotarySlider(release, 0.001, 10.0, 0.001, "s");
    initRotarySlider(gain, 0.0, 1.0, 0.01, "");
}

OscPanel::~OscPanel()
{
}

void OscPanel::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (SympleColors::background);   // clear the background

    g.setColour (SympleColors::tint);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (SympleColors::foreground);
    g.setFont (12.0f);
}

void OscPanel::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    int padding = 10;
    auto area = getLocalBounds();
    area.removeFromTop(padding);
    area.removeFromBottom(padding);
    area.removeFromLeft(padding);
    area.removeFromRight(padding);

    auto quarter = area / 4;

    int comboBoxWidth = area.getWidth() / 4;
    int comboBoxHeight = area.getHeight() / 4;
    int rotaryWidth = area.getWidth() / 4;
    waveForm.setBounds(quarter);
    waveForm.setTopLeftPosition(padding, padding);

    attack.setBounds(quarter);
    attack.setTopLeftPosition(padding, 2*padding + quarter.getHeight());

    decay.setBounds(quarter);
    decay.setTopLeftPosition(padding + quarter.getWidth(), 2*padding + quarter.getHeight());

    sustain.setBounds(quarter);
    sustain.setTopLeftPosition(padding + 2*quarter.getWidth(), 2*padding + quarter.getHeight());

    release.setBounds(quarter);
    release.setTopLeftPosition(padding + 3*quarter.getWidth(), 2*padding + quarter.getHeight());

    gain.setBounds(quarter);
    gain.setTopLeftPosition(padding + 3*quarter.getWidth(), 3*padding + 2*quarter.getHeight());
}

void OscPanel::connectSynth(SympleSynth* synth)
{
    osc = synth;
}

void OscPanel::comboBoxChanged(ComboBox* combobox)
{
    if (combobox == & waveForm)
    {
        switch(combobox->getSelectedId())
        {
            case 1: 
                osc->setWaveForm(Oscillator::waveForms::sine);
                break;
            case 2:
                osc->setWaveForm(Oscillator::waveForms::triangle);
                break;
            case 3:
                osc->setWaveForm(Oscillator::waveForms::saw);
                break;
            case 4:
                osc->setWaveForm(Oscillator::waveForms::square);
                break;
            case 5:
                osc->setWaveForm(Oscillator::waveForms::noise);
                break;
            default:
                osc->setWaveForm(Oscillator::waveForms::sine);
        }
    }
}

void OscPanel::sliderValueChanged(Slider* slider)
{
    if(slider == &attack || slider == &decay || slider == &sustain || slider == &release)
        osc->setEnvelopeParams(attack.getValue(), decay.getValue(), sustain.getValue(), release.getValue());
}

void OscPanel::initRotarySlider(Slider& slider, double minRange, double maxRange, double interval, String suffix)
{
    slider.setSliderStyle(Slider::SliderStyle::RotaryHorizontalVerticalDrag);
    slider.setTextBoxStyle(Slider::TextEntryBoxPosition::TextBoxLeft, false, 42, 14);
    slider.setTextValueSuffix(suffix);
    slider.setColour(Slider::ColourIds::rotarySliderFillColourId, SympleColors::blue);
    slider.setColour(Slider::ColourIds::rotarySliderOutlineColourId, SympleColors::tint);
    slider.setColour(Slider::ColourIds::thumbColourId, SympleColors::dark_blue);
    slider.setRange (minRange, maxRange, interval);
    slider.setValue (0.5);
    slider.addListener (this);
    addAndMakeVisible (slider);
}