// 9-17-25 cs1436.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double gallons;
	double miles;
	cout << "please enter the number of gallons the car can hold: " << endl;
	cin >> gallons;
	cout << "please eneter the number of miles the car can run on a full tank: " << endl;
	cin >> miles;
	double milepergas = (miles / gallons);
	cout << "Number of miles per gallon of gas is: " << milepergas << endl;

	return 0;

}
