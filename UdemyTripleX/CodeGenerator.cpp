#include "CodeGenerator.h"
#include <iostream>

Result CodeGenerator::CodeSetUp(int GameDifficulty)
{
	const int CodeA = rand() % (4 * GameDifficulty) + 1;
	const int CodeB = rand() % (4 * GameDifficulty) + 1;
	const int CodeC = rand() % (4 * GameDifficulty) + 1;

	int CodeSum = SumOfCode(CodeA, CodeB, CodeC);
	int CodeProduct = ProductOfCode(CodeA, CodeB, CodeC);

	//Testing line 
	std::cout << CodeA << CodeB << CodeC
		<< "\nThe Sum of the code is " << CodeSum << ". \nThe Product of the code is " << CodeProduct << ".\n";

	return{ CodeSum, CodeProduct };
}

int CodeGenerator::SumOfCode(int a, int b, int c)
{
	return a + b + c;
}

int CodeGenerator::ProductOfCode(int a, int b, int c)
{
	return a * b * c;
}