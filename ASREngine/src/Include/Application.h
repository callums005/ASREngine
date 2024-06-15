#pragma once

#include "Logger.h"

namespace ASREngine
{
	class Application
	{
	public:
		Application();
		virtual ~Application();

		// Implemented engine side
		void Execute();
		void EndApplication();

		// Implemented application side

		virtual void Start() = 0;
		virtual void NextFrame() = 0;
		virtual void End() = 0;
	private:
		bool m_IsRunning = true;
	};

	Application* InitalizeNewApplication();
}