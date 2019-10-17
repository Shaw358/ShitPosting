#include "ConsoleIO.h"

ConsoleIO::ConsoleIO()
{
}

ConsoleIO::~ConsoleIO()
{
}

std::string ConsoleIO::Ask(std::string aQuestion)
{
	std::cout << aQuestion << std::endl;
	//de vraag (aQuestion ) laten zien op t scherms
	// en user input terug geven aand e gerbuiker
	std::string input;
	std::cin >> input;
	return input;
	return std::string();
}

int ConsoleIO::AskInt(std::string aQuestion)
{
	std::cout << ", greetings, " + aQuestion << std::endl;
	std::string input;
	std::cin >> input;
	int answer = std::stoi(input);
	return answer;
}
