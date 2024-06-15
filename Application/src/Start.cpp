#include "ASREngine.h"


class Game : public ASREngine::Application
{
public:
	Game() = default;
	~Game() = default;

	void Start() override
	{
		ASREngine::Logger::Log(ASREngine::EnLogLevel::Information, "Hello World");
		ASREngine::Logger::Log(ASREngine::EnLogLevel::Debug, "Hello World");
		ASREngine::Logger::Log(ASREngine::EnLogLevel::Warning, "Hello World");
		ASREngine::Logger::Log(ASREngine::EnLogLevel::Error, "Hello World");
		ASREngine::Logger::Log(ASREngine::EnLogLevel::Critical, "Hello World");
	}

	void NextFrame() override
	{

	}

	void End() override
	{

	}
};

ASREngine::Application* ASREngine::InitalizeNewApplication()
{
	return new Game();
}