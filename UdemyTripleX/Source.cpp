#include "Result.h"
#include "Text.h"
#include "CodeGenerator.h"
#include "PlayerInput.h"
#include "Comparison.h"
#include <iostream>

bool IsLevel1Complete = false;
bool IsLevel2Complete = false;
int GameDifficulty = 1;

void LevelOne()
{
    Text::Intro();
    Result CodeResult = CodeGenerator::CodeSetUp(GameDifficulty);
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
    IsLevel1Complete = true;
}

void LevelTwo()
{
    Text::Entrance();
    Result CodeResult = CodeGenerator::CodeSetUp(GameDifficulty);
    Result PlayerGuess;
    bool IsCodeCorrect = false;

    do
    {
        PlayerGuess = PlayerInput::InputCode();
        IsCodeCorrect = Comparison::CompareResults(CodeResult, PlayerGuess);

        if (!IsCodeCorrect)
        {
            Text::CodeTwoIncorrect();
        }
    } while (!IsCodeCorrect);

    Text::CodeTwoCorrect();
    IsLevel2Complete = true;
}
int main()
{
    srand(time(NULL));
    LevelOne();
    if (IsLevel1Complete)
    {
        std::cin.clear();
        std::cin.ignore();
        GameDifficulty++;
        LevelTwo();
    }
   
	return 0;
}