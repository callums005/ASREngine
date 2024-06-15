#include "ASREngine.h"


class Game : public ASREngine::Application
{
public:
	Game() = default;
	~Game() = default;

	void Start() override
	{
		ASREngine::Event ev;

		ASREngine::EventDispatcher dispatcher(ev);
		dispatcher.Dispatch<ASREngine::Event>([this](ASREngine::Event& e) { Test(e); });
	}

	void NextFrame() override
	{

	}

	void End() override
	{

	}

private:
	void Test(ASREngine::Event& event)
	{
		event.Handled = true;
		ASREngine::Logger::Log(ASREngine::EnLogLevel::Information, "Called event");
	}
};

ASREngine::Application* ASREngine::InitalizeNewApplication()
{
	return new Game();
}