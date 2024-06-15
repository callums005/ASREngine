#pragma once

#include "Event.h"

namespace ASREngine
{
	struct KeyDownEvent : public Event
	{
		KeyDownEvent() = default;
		KeyDownEvent(int keycode, int modifiers)
			: KeyCode(keycode), Modifiers(modifiers)
		{}

		int KeyCode = 0;
		/// <summary>
		/// [0] Control [1] Shift [2] Alt
		/// </summary>
		int Modifiers = 0x000;
	};

	struct KeyUpEvent : public Event
	{
		KeyUpEvent() = default;
		KeyUpEvent(int keycode, int modifiers)
			: KeyCode(keycode), Modifiers(modifiers)
		{}

		int KeyCode = 0;
		/// <summary>
		/// [0] Control [1] Shift [2] Alt
		/// </summary>
		int Modifiers = 0x000;
	};
}