#pragma once

#include "Event.h"

namespace ASREngine
{
	struct MouseDownEvent : public Event
	{
		MouseDownEvent() = default;
		MouseDownEvent(int buttoncode)
			: ButtonCode(buttoncode)
		{}

		int ButtonCode = 0;
	};

	struct MouseUpEvent : public Event
	{
		MouseUpEvent() = default;
		MouseUpEvent(int buttoncode)
			: ButtonCode(buttoncode)
		{}

		int ButtonCode = 0;
	};

	struct MouseScrollEvent : public Event
	{
		MouseScrollEvent() = default;
		MouseScrollEvent(int x, int y)
			: xOffset(x), yOffset(y)
		{}

		int xOffset = 0, yOffset = 0;
	};

	struct MouseMoveEvent : public Event
	{
		MouseMoveEvent() = default;
		MouseMoveEvent(int x, int y)
			: xPosition(x), yPosition(y)
		{}

		int xPosition = 0, yPosition = 0;
	};
}