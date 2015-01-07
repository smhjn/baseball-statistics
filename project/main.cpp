// names
#include <iostream>
#include <Windows.h>
#include <string>
#include "hitting.cpp"
#include "fielding.cpp"
#include "pitching.cpp"

using namespace std;

int main() {
	int choice;
	cout << "Welcome to the baseball statistics calculator!" << std::endl;
	cout << "1: Pitching" << std::endl;
	cout << "2: Hitting" << std::endl;
	cout << "3: Fielding" << std::endl;
	cout << "4: Exit Program" << std::endl;
	cin >> choice;
	switch(choice) {
		case 1: 
			pitching(); 
			return main();
		break;
        	case 2: 
        		hitting(); 
        		return main();
        	break;
		case 3: 
			fielding(); 
			return main();
		break;
		case 4:
			cout << "Thank you for using baseball stats" << std::endl;
			return 0;
		break;
	}
}
