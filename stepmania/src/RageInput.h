#ifndef RAGEINPUT_H
#define RAGEINPUT_H
/*
-----------------------------------------------------------------------------
 File: RageInput.h

 Desc: Wrapper for SDL's input routines.  Generates InputEvents.
-----------------------------------------------------------------------------
*/

#include "RageInputDevice.h"
#include "SDL_utils.h"

#include "arch/InputHandler/InputHandler_Win32_Pump.h"

class RageInput
{
	/* Structure for reading Pump pads: */
	PumpPadDevice *m_Pump;

public:
	RageInput();
	~RageInput();

	void Update( float fDeltaTime );
	bool FeedSDLEvent(const SDL_Event &event);
};

extern RageInput*			INPUTMAN;	// global and accessable from anywhere in our program


#endif
/*
 * Copyright (c) 2001-2003 by the person(s) listed below.  All rights reserved.
 *	Chris Danford
 *  Glenn Maynard
 */
