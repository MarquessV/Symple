/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.hpp"
#include "PluginEditor.hpp"

#include "SympleColors.hpp"

//==============================================================================
SympleAudioProcessorEditor::SympleAudioProcessorEditor (SympleAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (700, 394);
    osc1Panel.connectSynth(processor.synths[0]);
    osc2Panel.connectSynth(processor.synths[1]);
    
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

    osc1AttackSlider.setSliderStyle (Slider::SliderStyle::LinearBarVertical);
    osc1AttackSlider.setRange (0.0, 10.0);
    osc1AttackSlider.setValue (0.5);
    osc1AttackSlider.addListener (this);
    addAndMakeVisible (osc1AttackSlider);

    osc1DecaySlider.setSliderStyle (Slider::SliderStyle::LinearBarVertical);
    osc1DecaySlider.setRange (0.0001, 10.0);
    osc1DecaySlider.setValue (0.5);
    osc1DecaySlider.addListener (this);
    addAndMakeVisible (osc1DecaySlider);

    osc1SustainSlider.setSliderStyle (Slider::SliderStyle::LinearBarVertical);
    osc1SustainSlider.setRange (0.0001, 1.0);
    osc1SustainSlider.setValue (0.5);
    osc1SustainSlider.addListener (this);
    addAndMakeVisible (osc1SustainSlider);

    osc1ReleaseSlider.setSliderStyle (Slider::SliderStyle::LinearBarVertical);
    osc1ReleaseSlider.setRange (0.0001, 10.0);
    osc1ReleaseSlider.setValue (0.5);
    osc1ReleaseSlider.addListener (this);
    addAndMakeVisible (osc1ReleaseSlider);

    osc2AttackSlider.setSliderStyle (Slider::SliderStyle::LinearBarVertical);
    osc2AttackSlider.setRange (0.0, 10.0);
    osc2AttackSlider.setValue (0.5);
    osc2AttackSlider.addListener (this);
    addAndMakeVisible (osc2AttackSlider);

    osc2DecaySlider.setSliderStyle (Slider::SliderStyle::LinearBarVertical);
    osc2DecaySlider.setRange (0.0001, 10.0);
    osc2DecaySlider.setValue (0.5);
    osc2DecaySlider.addListener (this);
    addAndMakeVisible (osc2DecaySlider);

    osc2SustainSlider.setSliderStyle (Slider::SliderStyle::LinearBarVertical);
    osc2SustainSlider.setRange (0.0001, 1.0);
    osc2SustainSlider.setValue (0.5);
    osc2SustainSlider.addListener (this);
    addAndMakeVisible (osc2SustainSlider);

    osc2ReleaseSlider.setSliderStyle (Slider::SliderStyle::LinearBarVertical);
    osc2ReleaseSlider.setRange (0.0001, 10.0);
    osc2ReleaseSlider.setValue (0.5);
    osc2ReleaseSlider.addListener (this);
    addAndMakeVisible (osc2ReleaseSlider);

    addAndMakeVisible(osc1Panel);
    addAndMakeVisible(osc2Panel);
}

SympleAudioProcessorEditor::~SympleAudioProcessorEditor()
{
}

//==============================================================================
void SympleAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (SympleColors::background);

    g.setColour (Colours::white);
    g.setFont (12.0f);
}

void SympleAudioProcessorEditor::resized()
{
    auto area = getLocalBounds();

    int oscPanelWidth = area.getWidth() / 2;
    int oscPanelHeight = area.getHeight() / 2;

    osc1Panel.setBounds(0, 0, oscPanelWidth, oscPanelHeight);
    osc2Panel.setBounds(oscPanelWidth, 0, oscPanelWidth, oscPanelHeight);

    /*
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    osc1GainSlider.setBounds(0, 0, 80, 80);
    osc2GainSlider.setBounds(0, 120, 80, 80);

    osc1WaveForm.setBounds(120, 0, 100, 80);
    osc2WaveForm.setBounds(120, 120, 100, 80);

    osc1AttackSlider.setBounds(260, 0, 10, 80);
    osc1DecaySlider.setBounds(280, 0, 10, 80);
    osc1SustainSlider.setBounds(300, 0, 10, 80);
    osc1ReleaseSlider.setBounds(320, 0, 10, 80);

    osc2AttackSlider.setBounds(260, 120, 10, 80);
    osc2DecaySlider.setBounds(280, 120, 10, 80);
    osc2SustainSlider.setBounds(300, 120, 10, 80);
    osc2ReleaseSlider.setBounds(320, 120, 10, 80);
    */
}

void SympleAudioProcessorEditor::sliderValueChanged(Slider *slider)
{
    if (slider == &osc1GainSlider)
        processor.synths[0]->setAmplitude(slider->getValue());
    if (slider == &osc2GainSlider)
        processor.synths[1]->setAmplitude(slider->getValue());
    if (slider == &osc1AttackSlider || slider == &osc1DecaySlider || slider == &osc1SustainSlider || slider == &osc1ReleaseSlider)
        processor.synths[0]->setEnvelopeParams(osc1AttackSlider.getValue(), osc1DecaySlider.getValue(), osc1SustainSlider.getValue(), osc1ReleaseSlider.getValue());
    if (slider == &osc2AttackSlider || slider == &osc2DecaySlider || slider == &osc2SustainSlider || slider == &osc2ReleaseSlider)
        processor.synths[1]->setEnvelopeParams(osc2AttackSlider.getValue(), osc2DecaySlider.getValue(), osc2SustainSlider.getValue(), osc2ReleaseSlider.getValue());
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
