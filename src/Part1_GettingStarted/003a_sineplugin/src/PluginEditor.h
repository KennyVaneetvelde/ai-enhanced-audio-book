/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class TestPluginAudioProcessorEditor  : 
public juce::AudioProcessorEditor, 
  public Slider::Listener
{
public:
    TestPluginAudioProcessorEditor (TestPluginAudioProcessor&);
    ~TestPluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    void sliderValueChanged (Slider *slider);


private:
    juce::Slider freqControl;

    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    TestPluginAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TestPluginAudioProcessorEditor)
};
