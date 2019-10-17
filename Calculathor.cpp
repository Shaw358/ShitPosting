// Calculathor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Calculator.h"
#include "ConsoleIO.h"

int main()
{
	ConsoleIO console;

	std::cout << console.Ask("What is your name CMDR?");
	int age = console.AskInt("What is your age CMDR?");

	std::string response = "A new young CMDR huh? Good luck out there...";

	std::cout << age + "? " + response << std::endl;

	//

	Calculator calc;
	Calculator* calcP = new Calculator();
	std::string input;
	std::string input2;
	std::string input3;
	float choice1, choice2, choice3;

	int choice;	


	while (true) {
		std::cout << "Kies een operator" << std::endl;
		std::cout << "1: x (keer)" << std::endl;
		std::cout << "2: + (plus)" << std::endl;
		std::cout << "3: - (min)" << std::endl;
		std::cout << "4: ++ (Plus Plus)" << std::endl;
		std::cin >> input;



		//vraag 2 cijfers
		//doe de berekening
		//geef de output weer op het scherm

		choice = std::stoi(input);
		{
			switch (choice)
			{
			case 1:

				std::cout << "Input nummer 1" << std::endl;
				std::cin >> input;
				choice1 = std::stof(input);
				std::cout << "Input nummer 2" << std::endl;
				std::cin >> input2;
				choice2 = std::stof(input2);
				
				std::cout << calc.Multiply(choice1, choice2) << std::endl;
				
				break;
			case 2:
				std::cout << "Input nummer 1" << std::endl;
				std::cin >> input;
				choice1 = std::stof(input);
				std::cout << "Input nummer 2" << std::endl;
				std::cin >> input2;
				choice2 = std::stof(input2);
				
				std::cout << calc.Add(choice1, choice2) << std::endl;


				break;
			case 3:
				std::cout << "Input nummer 1" << std::endl;
				std::cin >> input;
				choice1 = std::stof(input);
				std::cout << "Input nummer 2" << std::endl;
				std::cin >> input2;
				choice2 = std::stof(input2);
				std::cout << calc.Subtract(choice1, choice2) << std::endl;
				

				break;
			case 4:
				std::cout << "Input nummer 1" << std::endl;
				std::cin >> input;
				choice1 = std::stof(input);
				std::cout << "Input nummer 2" << std::endl;
				std::cin >> input2;
				choice2 = std::stof(input2);
				std::cout << "Input nummer 3" << std::endl;
				std::cin >> input3;
				choice3 = std::stof(input3);

				std::cout << calc.Add(choice1, choice2, choice3) << std::endl;

				break;

			default:
				break;
			}
		}
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
