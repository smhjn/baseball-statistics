#include <iostream>
#include "fielding.h"

fielding::fielding() {
	std::cout << "Please enter the number of games started: ";
	std::cin >> gamesStarted;
	std::cout << std::endl << "Please enter the number of games won: ";
	std::cin >> gamesWon;
	std::cout << std::endl << "Please enter the number of games lost: ";
	std::cin >> gamesLost;
}
void fielding::calculate() {
	gamesStarted = gamesWon + gamesLost;
	statsWon = gamesWon % gamesStarted;

	std::cout << std::endl << "STATS: " << std::endl << "Total Games: " << gamesStarted << std::endl << "Total Games Won: " << gamesWon << std::endl << "Total Games Lost: " << gamesLost << std::endl << "Percent Won: " << std::endl << "Percent Lost?: " << std::endl;
}
