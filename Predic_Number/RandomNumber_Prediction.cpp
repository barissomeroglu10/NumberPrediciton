/*
In this code, we play a mini predict game. Code makes a random number and then user predicts the number.
The number is between 0 and 9.

Developer = Barış Someroğu
Date = 29.04.2024 - 04:10 pm
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int RandomNumber, PredictNumber;

	// Random number generator
	srand(time(NULL));

	RandomNumber = rand() % 10; // Modify range for random number

	cout << "Please predict the number = ";
	cin >> PredictNumber;

	if (PredictNumber == RandomNumber)
		cout << "\nYou found the number!" << endl;

	else
		cout << "\nYou didn't find the number!" << endl;

	cout << "\nRandom Number was = " << RandomNumber << endl;

	return 0;
}