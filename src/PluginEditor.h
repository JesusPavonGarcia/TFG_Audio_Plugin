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
class TFG_Audio_PluginAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    TFG_Audio_PluginAudioProcessorEditor (TFG_Audio_PluginAudioProcessor&);
    ~TFG_Audio_PluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    TFG_Audio_PluginAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TFG_Audio_PluginAudioProcessorEditor)
};
