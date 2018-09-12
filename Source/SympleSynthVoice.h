/*
  ==============================================================================

    SympleSynthVoice.h
    Created: 3 Aug 2018 2:11:47pm
    Author:  Marquess Valdez

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include "Envelope.h"
#include "Oscillator.h"
#include "SympleSynthSound.h"

class SympleSynthVoice : public SynthesiserVoice
{
  public:
    SympleSynthVoice();
    bool canPlaySound (SynthesiserSound* sound) override;
    void startNote (int midiNoteNumber, float velocity, SynthesiserSound *sound, int currentPitchWheelPosition) override;
    void stopNote (float velocity, bool allowTailOff) override;
    void pitchWheelMoved (int newPitchWheelValue) override;
    void controllerMoved (int controllerNumber, int newControllerValue) override;
    void renderNextBlock (AudioBuffer<float> &outputBuffer, int startSample, int numSamples) override;
    void setWaveForm (Oscillator::waveForms wave);
    void setEnvelopeParams (double attack, double decay, double sustain, double release);

  private:
    Envelope ampEnv;
    Oscillator osc;
    float frequency;
    float amp;
};
