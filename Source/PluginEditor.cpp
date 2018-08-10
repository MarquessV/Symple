/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SympleAudioProcessorEditor::SympleAudioProcessorEditor (SympleAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
    
    osc1GainSlider.setSliderStyle (Slider::SliderStyle::RotaryVerticalDrag);
    osc1GainSlider.setRange(0.0f, 1.0f);
    osc1GainSlider.setValue(0.5f);
    osc1GainSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 60, 15);
    osc1GainSlider.addListener(this);
    addAndMakeVisible(osc1GainSlider);

    osc2GainSlider.setSliderStyle (Slider::SliderStyle::RotaryVerticalDrag);
    osc2GainSlider.setRange(0.0f, 1.0f);
    osc2GainSlider.setValue(0.5f);
    osc2GainSlider.setTextBoxStyle(Slider::TextBoxBelow, true, 60, 15);
    osc2GainSlider.addListener(this);
    addAndMakeVisible(osc2GainSlider);

    osc1WaveForm.addItem("Sin", 1);
    osc1WaveForm.addItem("Tri", 2);
    osc1WaveForm.addItem("Saw", 3);
    osc1WaveForm.addItem("Squ", 4);
    osc1WaveForm.addItem("Noi", 5);
    osc1WaveForm.setSelectedId(1);
    osc1WaveForm.addListener(this);
    addAndMakeVisible(osc1WaveForm);

    osc2WaveForm.addItem("Sin", 1);
    osc2WaveForm.addItem("Tri", 2);
    osc2WaveForm.addItem("Saw", 3);
    osc2WaveForm.addItem("Squ", 4);
    osc2WaveForm.addItem("Noi", 5);
    osc2WaveForm.setSelectedId(1);
    osc2WaveForm.addListener(this);
    addAndMakeVisible(osc2WaveForm);
}

SympleAudioProcessorEditor::~SympleAudioProcessorEditor()
{
}

//==============================================================================
void SympleAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void SympleAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    osc1GainSlider.setBounds(0, 0, 80, 80);
    osc2GainSlider.setBounds(0, 120, 80, 80);

    osc1WaveForm.setBounds(120, 0, 200, 80);
    osc2WaveForm.setBounds(120, 120, 200, 80);
}

void SympleAudioProcessorEditor::sliderValueChanged(Slider *slider)
{
    if (slider == &osc1GainSlider)
        processor.synths[0]->setParams(slider->getValue());
    if (slider == &osc2GainSlider)
        processor.synths[1]->setParams(slider->getValue());
}

void SympleAudioProcessorEditor::comboBoxChanged(ComboBox *combobox)
{
    SympleSynth* selectedSynth = nullptr;
    if (combobox == &osc1WaveForm)
        selectedSynth = processor.synths[0];
    else if (combobox == &osc2WaveForm)
        selectedSynth = processor.synths[1];
    
    if (selectedSynth != nullptr)
    {
        switch(combobox->getSelectedId())
        {
            case 1: 
                selectedSynth->setWaveForm(Oscillator::waveForms::sine);
                break;
            case 2:
                selectedSynth->setWaveForm(Oscillator::waveForms::triangle);
                break;
            case 3:
                selectedSynth->setWaveForm(Oscillator::waveForms::saw);
                break;
            case 4:
                selectedSynth->setWaveForm(Oscillator::waveForms::square);
                break;
            case 5:
                selectedSynth->setWaveForm(Oscillator::waveForms::noise);
                break;
            default:
                selectedSynth->setWaveForm(Oscillator::waveForms::sine);
        }
    }
}