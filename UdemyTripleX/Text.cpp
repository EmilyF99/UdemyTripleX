#include "Text.h"
#include <iostream>

void Text::Intro()
{
	std::cout << "You have found yourself outside a dirty motel. There are cobwebs in the window and the building fills you with dread.\n"
		<< "However, the rain is hitting you hard, you\'re out of gas and you can\'t stay out here in the dark much longer.\n"
		<< "Below you is a padlock, you need to enter a code to continue..."
		<< "\nThere are three numbers in the code.You see a hint scratched on a piece of paper to the left of the door." << std::endl;
}

void Text::CodeOneCorrect()
{
	std::cout << "\nYou enter the code and give the door a shove, with a bit of force the door opens, letting out a loud creek as it does so."
		<< "\nYou quickly hurry inside hoping no one heard that over the rain.";
}

void Text::CodeOneIncorrect()
{
	std::cout << "\nYou enter the code and give the door a shove, The door rattles but doesn\'t budge, you rebound off the door and land on the wet ground."
		<< "\nOuch, your shoulder now aches and the door remains looming over you." << "\nYou decide to give the door another go. Enter your three numbers...";
}

void Text::Entrance()
{
	std::cout << "\n\nYou hear a clack as the door locks behind you. You feel around in the dark for a light switch."
		<< "\nYou\'re dazzled as the room shines into view. Once you can see again you notice a wall panel with a handprint on it." 
		<< "\nOn approach you notice a tiny 3 number combination lock...";
}

void Text::CodeTwoCorrect()
{
	std::cout << "\nThe lock on the grate slips off easily, you fumble with it in your hands for a moment before dropping it...oops!";
}

void Text::CodeTwoIncorrect()
{
	std::cout << "\nThe lock doesn't budge this time, as you go to reset it you think you notice something moving behind the vent...hopefully just a trick of the lights."
		<< "\nGet ready to enter your three numbers...";
}