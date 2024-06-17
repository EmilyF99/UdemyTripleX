#include "Text.h"
#include <iostream>

void Text::Intro()
{
	std::cout << "You have found yourself outside a dirty motel. There are cobwebs in the window and the building fills you with dread.\n"
		<< "However, the rain is hitting you hard, you\'re out of gas and you can\'t stay out here in the dark much longer.\n"
		<< "Below you is a padlock, you need to enter a code to continue..." << std::endl;
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
