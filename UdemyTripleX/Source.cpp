#include "Result.h"
#include "Text.h"
#include "CodeGenerator.h"
#include "PlayerInput.h"
#include "Comparison.h"

int main()
{
	Text::Intro();

    Result codeResult = CodeGenerator::CodeSetUp();
    Result playerGuess = PlayerInput::InputCode();

    if (Comparison::CompareResults(codeResult, playerGuess)) 
    {
        Text::CodeOneCorrect();
    }
    else 
    {
        Text::CodeOneIncorrect();
    }
	return 0;
}