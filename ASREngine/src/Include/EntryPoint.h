#pragma once

#include "Application.h"

extern ASREngine::Application* ASREngine::InitalizeNewApplication();

int main(int argc, char** argv)
{
	ASREngine::Application* application = ASREngine::InitalizeNewApplication();
	application->Execute();

	delete application;
}