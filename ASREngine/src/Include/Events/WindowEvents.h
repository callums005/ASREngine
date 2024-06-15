#pragma once

#include "Event.h"

namespace ASREngine
{
	struct WindowCloseEvent : public Event
	{
		WindowCloseEvent() = default;
	};

	struct WindowResizeEvent : public Event
	{
		WindowResizeEvent(int width, int height)
			: Width(width), Height(height)
		{}

		int Width, Height;
	};

	struct WindowFocusEvent : public Event
	{
		WindowFocusEvent() = default;
		WindowFocusEvent(bool isFocused)
			: Focused(isFocused)
		{}

		bool Focused = true;
	};
}