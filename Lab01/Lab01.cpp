// Lab01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	bool correctAnswer = false;
	int numberGuessed;

	srand(time(NULL));

	int randomNumber = rand() % 101;
	int guesses = 0;

	cout << randomNumber << endl;

	while (guesses < 5)
	{
		guesses++;
		cout << "Guess the random number" << endl;
		cin >> numberGuessed;
		if (numberGuessed == randomNumber)
		{
			correctAnswer = true;
			guesses = 5;
		}
	}
	
	if (correctAnswer = true)
	{
		cout << "Correct Answer!" << endl;
	}
	else if(correctAnswer = false)
	{
		cout << "You have failed! :(" << endl;
	}

	system("pause");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
