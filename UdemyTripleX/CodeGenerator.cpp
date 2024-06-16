#include "CodeGenerator.h"
#include <iostream>

void CodeGenerator::CodeSetUp()
{
	const int a = 2;
	const int b = 4;
	const int c = 5;

	const int sum = SumOfCode(a, b, c);
	const int product = ProductOfCode(a, b, c);

	std::cout << "\nThere are three numbers in the code.You see a hint scratched on a piece of paper to the left of the door."
		<< "\nThe Sum of the code is " << sum << ". \nThe Product of the code is " << product << ".\n";
}

int CodeGenerator::SumOfCode(int a, int b, int c)
{
	return a + b + c;
}

int CodeGenerator::ProductOfCode(int a, int b, int c)
{
	return a * b * c;
}