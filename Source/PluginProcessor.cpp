/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.hpp"
#include "PluginEditor.hpp"
#include "SympleSynthSound.hpp"
#include "SympleSynthVoice.hpp"
#include "Oscillator.hpp"

//==============================================================================
SympleAudioProcessor::SympleAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  AudioChannelSet::stereo(), true)
                      #endif
                       .withOutput ("Output", AudioChannelSet::stereo(), true)
                     #endif
                       )
#endif
{
    numSynths = 2;
    numVoices = 7;
    for (int i = 0; i < numSynths; ++i)
    {
        SympleSynth* synth = new SympleSynth();
        synth->clearVoices();
        for(int j = 0; j < numVoices; ++j)
        {
            synth->addVoice(new SympleSynthVoice());
        }
        synth->clearSounds();
        synth->addSound(new SympleSynthSound());
        synths.add(synth);
    }
}

SympleAudioProcessor::~SympleAudioProcessor()
{
}

//==============================================================================
const String SympleAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool SympleAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool SympleAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool SympleAudioProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double SympleAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int SympleAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int SympleAudioProcessor::getCurrentProgram()
{
    return 0;
}

void SympleAudioProcessor::setCurrentProgram (int index)
{
}

const String SympleAudioProcessor::getProgramName (int index)
{
    return {};
}

void SympleAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void SympleAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
    lastSampleRate = sampleRate;
    for (auto& synth : synths)
    {
        synth->setCurrentPlaybackSampleRate(lastSampleRate);
    }
}

void SympleAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool SympleAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void SympleAudioProcessor::processBlock (AudioBuffer<float>& buffer, MidiBuffer& midiMessages)
{
    AudioBuffer<float> tempBuffer(buffer.getNumChannels(), buffer.getNumSamples());
    buffer.clear();
    for (int i = 0; i < numSynths; ++i)
    {
        tempBuffer.clear();
        synths[i]->renderNextBlock(tempBuffer, midiMessages, 0, buffer.getNumSamples());
        for(int channel = 0; channel < buffer.getNumChannels(); ++channel)
        {
            buffer.addFrom(channel, 0, tempBuffer.getReadPointer(channel, 0), tempBuffer.getNumSamples());
        }

    }
}

//==============================================================================
bool SympleAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* SympleAudioProcessor::createEditor()
{
    return new SympleAudioProcessorEditor (*this);
}

//==============================================================================
void SympleAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
}

void SympleAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
}

//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new SympleAudioProcessor();
}
