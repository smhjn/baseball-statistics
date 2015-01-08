#include <iostream>

hitting() {
    double plateappearance, hits, battedout;
	
	double at_bats = hits + battedout;
	double battingavg = hits / at_bats;
	double walk = plateappearance - at_bats;
	
	cout << "Please enter the number of plate appearances: ";
	cin >> plateappearance;
	cout << endl << "Please enter the number of hits: ";
	cin >> hits;
	cout << endl << "Please enter the number of batted outs: ";
	cin >> battedout;
	    cout << "STATS: " << endl << "Plate Appearances: " << plateappearance;
	cout << endl << "Hits: " << hits;
	cout << endl << "Batted Out: " << battedout;
	cout << endl << "At Bats: " << at_bats;
	cout << endl << "Batting Average: " << battingavg;
	cout << endl << "Walk: " << walk << endl;
}
