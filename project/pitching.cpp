#include <iostream>
#include "pitching.h"

pitching::pitching() {
    double games_started, wins, losses;
	
	double decisions = wins + losses;
	double winningpercentage = wins / decisions;
	double no_decisions = games_started - decisions;
	
	cout << "Please enter the number of Games Started: ";
	cin >> games_started;
	cout << std::endl << "Please enter the number of Wins: ";
	cin >> wins;
	cout << std::endl << "Please enter the number of losses: ";
	cin >> losses;
	
	cout << "STATS: " << std::endl << "Games started: " << games_started;
	cout << std::endl << "Wins: " << wins;
	cout << std::endl << "Losses: " << losses;
	cout << std::endl << "Decisions" << decisions;
	cout << std::endl << "Winning Percentage" << winningpercentage;
	cout << std::endl << "No Decisions" << no_decisions << std::endl;
}
