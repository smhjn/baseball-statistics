/*
*   Authors: Michael Golebiewski
*            Victor Jaquez
*            Kevin Hrebenko
*   Desc: Main file for the baseball stats program
*   Date: 12/23/14
*/
#include <iostream>
#include <Windows.h>
#include <string>
#include "pitching.h"
#include "hitting.h"
#include "fielding.h"

void FN_pitching() {
	pitching runPitching;
	runPitching.calculate();
}

void FN_hitting() { 
	hitting runHitting;
	runHitting.calculate();
}

void FN_fielding() { 
	fielding runFielding;
	runFielding.calculate();
}

int menu() {
	int choice;
	std::cout << "Welcome to the baseball statistics calculator!" << std::endl;
	std::cout << "1: Pitching" << std::endl; 
	std::cout << "2: Hitting" << std::endl;
	std::cout << "3: Fielding" << std::endl;
	std::cout << "4: Exit Program" << std::endl;
	std::cin >> choice;
	switch(choice) { 
		case 1: 
			FN_pitching();
			break;
		case 2:
			FN_hitting();
			break;
		case 3:
			FN_fielding();
			break;
		case 4:
			std::cout << "Thank you for using baseball stats" << std::endl;
			return 0;
			break;
	}
}

int main() {
	bool Program = true;

	if(Program) {
		menu();
	}
	return 0;
}
