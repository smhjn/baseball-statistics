/*   Authors: Michael Golebiewski           Victor Jaquez          Kevin Hrebenko
     Desc: Main file for the baseball stats program*   Date: 12/23/14          */
#include <iostream>
#include <Windows.h>
#include <string>
#include "hitting.cpp"
#include "fielding.cpp"
#include "pitching.cpp"
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
			pitching(); 
			return menu();
		break;
        	case 2: 
        		hitting(); 
        		return menu();
        	break;
		case 3: 
			fielding(); 
			return menu();
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
