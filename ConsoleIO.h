#pragma once
#include <string>
#include <iostream>
class ConsoleIO
{
	public:
		ConsoleIO();
		~ConsoleIO();
		std::string Ask(std::string aQuestion);
		int AskInt(std::string aQuestion);

	private:



};

