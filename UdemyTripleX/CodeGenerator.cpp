#include "CodeGenerator.h"
#include <iostream>

Result CodeGenerator::CodeSetUp()
{
	const int CodeA = 2;
	const int CodeB = 4;
	const int CodeC = 5;

	int CodeSum = SumOfCode(CodeA, CodeB, CodeC);
	int CodeProduct = ProductOfCode(CodeA, CodeB, CodeC);

	std::cout << "\nThere are three numbers in the code.You see a hint scratched on a piece of paper to the left of the door."
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