#include "../Include/Application.h"

namespace ASREngine
{
	
	Application::Application() = default;

	Application::~Application() = default;

	void Application::Execute()
	{
		Logger::Log(EnLogLevel::Debug, "ASREngine Starting...");

		Start();

		while (m_IsRunning)
		{
			NextFrame();
		}

		End();
	}

	void Application::EndApplication()
	{
		m_IsRunning = false;
	}
}