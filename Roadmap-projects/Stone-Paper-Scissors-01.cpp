//stone-paper-scissors game

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

enum enChoice{Stone=1, Paper=2, Scissors=3};

enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stGameResults
{
	short GameRounds = 0;        
	short Player1WinTimes = 0;   
	short ComputerWinTimes = 0;  
	short DrawTimes = 0;         
	enWinner GameWinner;         
	string WinnerName = "";      
};

struct stGameResults
{
	short GameRounds = 0;        
	short Player1WinTimes = 0;  
	short ComputerWinTimes = 0;  
	short DrawTimes = 0;         
	enWinner GameWinner;         
	string WinnerName = "";     
};

int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

int GetRandomChoice()
{
	return RandomNumber(1, 3); // Random number between 1 and 3
}

int getPlayerChoice()
{
	int choice;
	do
	{
		cout << "Enter your choice (1 for Stone, 2 for Paper, 3 for Scissors): ";
		cin >> choice;
	} while (choice < 1 || choice > 3);
	return choice;
}

enWinner DetermineWinner(int playerChoice, int computerChoice)
{
	if (playerChoice == computerChoice)
		return Draw;
	else if ((playerChoice == Stone && computerChoice == Scissors) ||
		(playerChoice == Paper && computerChoice == Stone) ||
		(playerChoice == Scissors && computerChoice == Paper))
		return Player1;
	else
		return Computer;
}

void ShowRoundResults(int playerChoice, int computerChoice, enWinner winner)
{
	cout << "Player choice: " << playerChoice << endl;
	cout << "Computer choice: " << computerChoice << endl;
	switch (winner)
	{
	case Player1:
		cout << "Player wins this round!" << endl;
		break;
	case Computer:
		cout << "Computer wins this round!" << endl;
		break;
	case Draw:
		cout << "This round is a draw!" << endl;
		break;
	}
}


int main()
{
	srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

}