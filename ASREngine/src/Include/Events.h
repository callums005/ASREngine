#pragma once

#include <functional>

#include "Events/Event.h"
#include "Events/KeyboardEvents.h"

namespace ASREngine
{
	struct EventDispatcher
	{
	public:
		EventDispatcher(Event& event)
			:m_Event(event)
		{}

		template<typename T>
		void Dispatch(std::function<void(T&)> callback)
		{
			callback(*(T*)&m_Event);
		}

	private:
		Event& m_Event;
	};
}