#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	char player1[10];
	char player2[10];
	int player1hp = 100;   
	int player2hp = 100;
	int player1roll = 0;   //I tried to use char to minimize memory usage but it doesnt force as int.
	int player2roll = 0;

	srand(time(NULL));

	cout << "***Welcome to el bruto sample***\n\n";
	
	cout << "Player 1 name (10 max): ";
	cin >> player1;
	cout << "Player 2 name (10 max): ";
	cin >> player2;
	cout << "\nPress enter to fight!";
	getchar();
	getchar();

	system("CLS");
	cout << "\t" << player1 << "\t\t" << player2 << "\n\nlife:\t" << player1hp << "\t\t" << player2hp << "\n";
	Sleep(5000);

	while (player1hp > 0 && player2hp > 0)
	{
		system("CLS");
		player1roll = rand() % 25 + 1;
		player2roll = rand() % 25 + 1;

		player1hp -= player2roll;
		player2hp -= player1roll;

		cout << "\t" << player1 << "\t\t" << player2<< "\n\nlife:\t" << player1hp << "\t\t" << player2hp << "\n\n" << player1 << " inflicts " << player1roll << " damage and " << player2 << " inflicts " << player2roll << " damage.";
		Sleep(5000);	
	}

	if (player1hp > 0)
	{
		cout << "\n\n" << player1<< " wins.";
	}

	else if (player2hp > 0)
	{
		cout << "\n\n" << player2 << " wins.";
	}

	else
	{
		cout << "\n\nBoth players died (Draw).";
	}

	getchar();
	getchar();

	return 0;

}