#include "stdafx.h"
#include "InputSystem.h"

static bool s_currentKeyStates[256] = { false };
static bool s_prevKeyStates[256] = { false };

bool isKeyDown(int keyCode)
{
	if (0x8000 & GetAsyncKeyState(keyCode))
	{
		return true;
	}
	return false;
}

void UpdateInput()
{
	memcpy(s_prevKeyStates, s_currentKeyStates, sizeof(s_prevKeyStates));

	for (int keyCode = 0; keyCode < 255; ++keyCode)
	{
		if (isKeyDown(keyCode))
		{
			s_currentKeyStates[keyCode] = true;
		}
		else
		{
			s_currentKeyStates[keyCode] = false;
		}
		GetAsyncKeyState(keyCode);
	}
}

bool GetButtonDown(EKeyCode keyCode)
{
	if (false == s_prevKeyStates[static_cast<int>(keyCode)] && s_currentKeyStates[static_cast<int>(keyCode)])
		return true;
	return false;
}

bool GetButtonUp(EKeyCode keyCode)
{
	if (s_prevKeyStates[static_cast<int>(keyCode)] && false == s_currentKeyStates[static_cast<int>(keyCode)])
		return true;
	return false;
}

bool GetButton(EKeyCode keyCode)
{
	if (s_prevKeyStates[static_cast<int>(keyCode)] && s_currentKeyStates[static_cast<int>(keyCode)])
		return true;
	return false;
}
