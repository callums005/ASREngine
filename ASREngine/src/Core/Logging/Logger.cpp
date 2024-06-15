#include "../../Include/Logger.h"

namespace ASREngine
{
	const char* Logger::m_Labels[5] = { "INF", "DEBUG", "WARN", "ERR", "CRIT"};
	const char* Logger::m_Foregrounds[5] = { "90", "32", "93", "91", "34" };

	void Logger::Log(EnLogLevel logLevel, const char* format, ...)
	{
		va_list vargs;

		va_start(vargs, format);
		printf("\033[%s;m[%s]\t", m_Foregrounds[(int)logLevel], m_Labels[(int)logLevel]);
		vprintf(format, vargs);
		printf("\033[0;m\n");
		va_end(vargs);
	}
}