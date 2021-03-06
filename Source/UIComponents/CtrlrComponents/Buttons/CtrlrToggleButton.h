/*
  ==============================================================================

  This is an automatically generated file created by the Jucer!

  Creation date:  8 Apr 2011 11:10:07pm

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Jucer version: 1.12

  ------------------------------------------------------------------------------

  The Jucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-6 by Raw Material Software ltd.

  ==============================================================================
*/

#ifndef __JUCER_HEADER_CTRLRTOGGLEBUTTON_CTRLRTOGGLEBUTTON_74F5E916__
#define __JUCER_HEADER_CTRLRTOGGLEBUTTON_CTRLRTOGGLEBUTTON_74F5E916__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "../CtrlrComponent.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Jucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class CtrlrToggleButton  : public CtrlrComponent, public Button::Listener
{
public:
    //==============================================================================
    CtrlrToggleButton (CtrlrModulator &owner);
    ~CtrlrToggleButton();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
	void setComponentValue (const double newValue, const bool sendChangeMessage=false);
	void setComponentMidiValue (const int newValue, const bool sendChangeMessage=false);
	double getComponentValue();
	int getComponentMidiValue();
	double getComponentMaxValue();
	bool getToggleState();
	void valueTreePropertyChanged (ValueTree &treeWhosePropertyHasChanged, const Identifier &property);
	void valueTreeChildrenChanged (ValueTree &treeWhoseChildHasChanged){}
	void valueTreeParentChanged (ValueTree &treeWhoseParentHasChanged){}
	void valueTreeChildAdded (ValueTree& parentTree, ValueTree& childWhichHasBeenAdded){}
    void valueTreeChildRemoved (ValueTree& parentTree, ValueTree& childWhichHasBeenRemoved, int){}
	void valueTreeChildOrderChanged (ValueTree& parentTreeWhoseChildrenHaveMoved, int, int){}
	void click();
	bool isToggleButton();
	void setToggleState(const bool toggleState, const bool sendChangeMessage=false);
	CtrlrValueMap &getValueMap() { return (valueMap); }
	void customLookAndFeelChanged(LookAndFeelBase *customLookAndFeel = nullptr) {}

	static void wrapForLua(lua_State *L);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void mouseDown (const MouseEvent& e);


    //==============================================================================
    juce_UseDebuggingNewOperator

private:
    //[UserVariables]   -- You can add your own custom variables in this section.
	CtrlrValueMap valueMap;
    //[/UserVariables]

    //==============================================================================
    ToggleButton* ctrlrButton;

    //==============================================================================
    // (prevent copy constructor and operator= being generated..)
    CtrlrToggleButton (const CtrlrToggleButton&);
    const CtrlrToggleButton& operator= (const CtrlrToggleButton&);
};


#endif   // __JUCER_HEADER_CTRLRTOGGLEBUTTON_CTRLRTOGGLEBUTTON_74F5E916__
