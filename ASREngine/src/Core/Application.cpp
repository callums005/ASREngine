#include "../Include/Application.h"

namespace ASREngine
{
	
	Application::Application() = default;

	Application::~Application() = default;

	void Application::Execute()
	{
		printf("ASREngine Starting...\n");

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