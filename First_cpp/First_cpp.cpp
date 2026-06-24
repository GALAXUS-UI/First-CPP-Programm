#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int tries = 20;

int main() 
{
	srand(time(0));	// seed the random (do this once in main)
	int num = rand() % 100 + 1; // random number between 1 - 100
	while (tries != 0)
	{
		int guess;
		cout << "enter a number:" << "\n";
		cin >> guess;
		if (guess == num)
		{
			cout << "You guessed it correctly!" << "\n";
			break;
		}
		else
		{
			cout << "guess again." << "\n";
			cout << "you have " << --tries << " left" << "\n";
		}
	}
	if (tries == 0)
	{
		cout << "No Tries left! The number was: " << num << "\n";
	}
}