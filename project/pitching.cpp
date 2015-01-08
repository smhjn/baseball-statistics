#include <iostream>

pitching() {
    double games_started, wins, losses;
	
	double decisions = wins + losses;
	double winningpercentage = wins / decisions;
	double no_decisions = games_started - decisions;
	
	cout << "Please enter the number of Games Started: ";
	cin >> games_started;
	cout << endl << "Please enter the number of Wins: ";
	cin >> wins;
	cout << endl << "Please enter the number of losses: ";
	cin >> losses;
	
	cout << "STATS: " << std::endl << "Games started: " << games_started;
	cout << endl << "Wins: " << wins;
	cout << endl << "Losses: " << losses;
	cout << endl << "Decisions" << decisions;
	cout << endl << "Winning Percentage" << winningpercentage;
	cout << endl << "No Decisions" << no_decisions << endl;
}
