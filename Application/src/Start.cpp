#include "ASREngine.h"


class Game : public ASREngine::Application
{
public:
	Game() = default;
	~Game() = default;

	void Start() override
	{

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