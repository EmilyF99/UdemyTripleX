#include "PlayerInput.h"
#include "CodeGenerator.h"
#include <iostream>

Result PlayerInput::InputCode()
{
	int GuessA, GuessB, GuessC;
	std::cout << "\nInput your code (Seperated by a space): ";
	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;

	const int GuessSum = CodeGenerator::SumOfCode(GuessA, GuessB, GuessC);
	const int GuessProduct = CodeGenerator::ProductOfCode(GuessA, GuessB, GuessC);

	return{ GuessSum, GuessProduct };
}