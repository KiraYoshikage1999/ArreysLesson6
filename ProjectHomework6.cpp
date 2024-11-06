// ProjectHomework6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int myArrey2[10][13];
	int sum = 0;
	int sum2 = 0;
	int sum3 = 7;
 


	for (int i = 0; i < 10; i++) {
		int Ia = i + 1;
		cout << Ia << " Student";
		for (int j = 0; j < 13; j++) {
			int randNum2 = rand() % 12;
			myArrey2[i][j] = randNum2;
			sum += myArrey2[i][j];

		}
		sum2 = sum / 10;
		if (sum2 < 6) {
			cout << "  " << sum2 << "  Don't atested" << endl;
		}
		else if (sum2 > 8) {
			cout << "  " << sum2 << "  Great" << endl;
		}
		else if (sum2 > 9) {
			sum = sum++;
		}
		else {
			cout << "  " << sum2 << endl;
		}
		sum2 = 0;
		sum = 0;
		
	}




	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 13; j++) {
			cout << myArrey2[i][j] << " ";
		}
		cout << endl;

	}
	if (sum3 > 6) {
		cout << "Greate" << endl;
		for (int i = 0; i < 10; i++) {

			for (int j = 0; j < 13; j++) {
				if (myArrey2[i][j] > 9) {
					cout << myArrey2[i][j] << " ";
				}
			}
		}
	}
	else {
		for (int i = 0; i < 4; i++) {

		}
	}
}