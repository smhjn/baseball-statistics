#include <iostream>
#include "fielding.h"

void fielding() {
    double chances, put_outs, assists;
    
     double attempts = put_outs + assists;
	double fieldingpercent = attempts / chances;
	double errors = chances - attempts;
	
	
	cout << "Please enter the number of Total chances: ";
	cin >> chances;
	cout << endl << "Please enter the number of Put-outs: ";
	cin >> put_outs;
	cout << endl << "Please enter the number of assists: ";
	cin >> assists;

	cout << "STATS: " << endl << "Chances: " << chances;
	cout << endl << "Put-outs: " << put_outs;
	cout << endl << "Assists: " << assists;
	cout << endl << "Successful attempts: " << attempts;
	cout << endl << "Fielding Percent: " << fieldingpercent;
	cout << endl << "Errors: " << errors << endl;
}
