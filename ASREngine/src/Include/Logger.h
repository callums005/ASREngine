#pragma once

#include <stdio.h>
#include <stdarg.h>
#include <string>

namespace ASREngine
{
	enum class EnLogLevel
	{
		Information, Debug, Warning, Error, Critical
	};

	class Logger
	{
	public:
		static void Log(EnLogLevel logLevel, const char* format, ...);
	private:
		static const char* m_Labels[5];
		static const char* m_Foregrounds[5];
	};
}