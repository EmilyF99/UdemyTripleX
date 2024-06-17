#include "Result.h"
#include "Text.h"
#include "CodeGenerator.h"
#include "PlayerInput.h"
#include "Comparison.h"
#include <iostream>

bool IsLevelComplete = false;

void LevelOne()
{
    Text::Intro();
    Result CodeResult = CodeGenerator::CodeSetUp();
    Result PlayerGuess;
    bool IsCodeCorrect = false;

    do
    {
        PlayerGuess = PlayerInput::InputCode();
        IsCodeCorrect = Comparison::CompareResults(CodeResult, PlayerGuess);
        
        if (!IsCodeCorrect)
        {
            Text::CodeOneIncorrect();
        }
    } while (!IsCodeCorrect);
    
    Text::CodeOneCorrect();
    IsLevelComplete = true;
}

void LevelTwo()
{

}
int main()
{
    LevelOne();
    if (IsLevelComplete)
    {
        std::cin.clear();
        std::cin.ignore();
        LevelTwo();
    }
   
	return 0;
}