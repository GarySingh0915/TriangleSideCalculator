#include <iostream>
using namespace std;


double sideMin = 0.1;
double sideMax = 100.0;
const int countTwo = 2;
const int countThree = 3;
double count_Two = 2.0;
double maxDifference = 0.001;
char c = 'Y';


void reset() {	//This function stops the program process and resets it.
	cout << "Would you like to reset the program to enter new numbers? (Y or N) ";

	cin >> c;

	cout << endl;
	if (c == 'n' || c == 'N') {
		exit(0);
	}
}


int main() {

	do {

		double firstSide, secondSide, thirdSide; //length of all sides
		double sideOne = 0; //length of shorter side
		double sideTwo = 0; //length of shorter side

		double apparentHypotenuse = 0;

		do //prompts user to enter side length values within limits stated.
		{
			cin.clear();

			cout << "Enter a number only between 0.1 and 100.0: " << endl;

			cout << "What is the length of the first side: ";

			cin >> firstSide;

		} while (cin.bad() || firstSide < sideMin || firstSide > sideMax);


		do

		{

			cin.clear();

			cout << "Enter a number only between 0.1 and 100.0: " << endl;

			cout << "What is the length of the second side: ";

			cin >> secondSide;

		} while (cin.bad() || secondSide < sideMin || secondSide > sideMax);


		do

		{

			cin.clear();

			cout << "Enter a number only between 0.1 and 100.0: " << endl;

			cout << "What is the length of the third side: ";

			cin >> thirdSide;

		} while (cin.bad() || thirdSide < sideMin || thirdSide > sideMax);


		double twoShortSides[countTwo] = { sideOne, sideTwo };
		double sidesSum = 0;

		double sides[countThree] = { firstSide, secondSide, thirdSide };



		for (int i = 0; i < countThree; i++) //finds hypotenuse and the two shorter sides.

		{
			if (sides[i] > apparentHypotenuse)
				apparentHypotenuse = sides[i];
		}

		for (int x = 0; x < countTwo; x++) {

			if (sides[x] < apparentHypotenuse) {
				twoShortSides[x] = { sides[x] };
				sidesSum += sides[x];

			}
		} //else statement is not necessary because we are only identifying and assigning variables correct values.

		if (sidesSum < apparentHypotenuse && !(firstSide == secondSide && secondSide == thirdSide)) {

			cout << "Not a Triangle. Please re-enter all three side lengths." << endl;
			reset();
		}
		else {
			cout << "The apparent hypotenuse is: " << apparentHypotenuse << endl;

			double expectedHypotenuse = sqrt(pow(twoShortSides[0], count_Two) + pow(twoShortSides[1], count_Two)); //calculates the expected hypotenuse using pythagorean theorm.
			if (abs(apparentHypotenuse - expectedHypotenuse) <= maxDifference) {
				cout << "The expected hypotenuse is: " << expectedHypotenuse << endl;
				cout << "Right" << endl;
				reset();
			}
			else {
				cout << "The expected hypotenuse is: " << expectedHypotenuse << endl;    //finds the type of triangle based on lengths.
				cout << "Not Right" << endl;
				if (firstSide == secondSide && secondSide == thirdSide) {
					cout << "Is an equilateral triangle." << endl;
				}
				else if (firstSide == secondSide || secondSide == thirdSide || firstSide == thirdSide) {
					cout << "Is an isosceles triangle." << endl;
				}
				else if (firstSide != secondSide && secondSide != thirdSide && firstSide != thirdSide) {
					cout << "Is a scalene triangle." << endl;
				}
				reset();
			}

		}

	} while ((c == 'Y') || (c == 'y'));

	return 0;

}
