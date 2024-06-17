#pragma once
#include "Result.h"

class Comparison {
public:
	static bool CompareResults(const Result& generatedCode, const Result& playerGuess);
};
