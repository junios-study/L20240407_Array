#include <iostream>
#include <algorithm>

#define CARD_COUNT		52

using namespace std;

//global variable
int Deck[CARD_COUNT] = { 0, };

void Initialize()
{
	srand((unsigned int)time(NULL));

	for (int Index = 0; Index < CARD_COUNT; Index++)
	{
		Deck[Index] = Index;
	}
}

void Shuffle()
{
	int Temp = 0;
	for (int Count = 0; Count < CARD_COUNT * 1000; Count++)
	{
		int First = rand() % CARD_COUNT;
		int Second = rand() % CARD_COUNT;
		Temp = Deck[First];
		Deck[First] = Deck[Second];
		Deck[Second] = Temp;
	}
}

int PrintCard(int CardRealNumber)
{
	//Type
// Heart, Clover, Space, Diamond
	int CardType = CardRealNumber / 13;
	int CardNumber = CardRealNumber % 13 + 1;
	int Score = CardNumber;

	if (CardType == 0)
	{
		cout << "Heart";
	}
	else if (CardType == 1)
	{
		cout << "Clover";
	}
	else if (CardType == 2)
	{
		cout << "Space";
	}
	else // (CardType == 3)
	{
		cout << "Diamond";
	}

	if (CardNumber == 1)
	{
		cout << " A" << endl;
	}
	else if (CardNumber == 11)
	{
		cout << " J" << endl;
		Score = 10;
	}
	else if (CardNumber == 12)
	{
		cout << " Q" << endl;
		Score = 10;
	}
	else if (CardNumber == 13)
	{
		cout << " K" << endl;
		Score = 10;
	}
	else
	{
		cout << " " << CardNumber << endl;
	}
	
	return Score;
}

void Print()
{
	int ComputerScore = 0;
	int PlayerScore = 0;

	cout << "Computer" << endl;
	ComputerScore = ComputerScore + PrintCard(Deck[0]);
	ComputerScore += PrintCard(Deck[1]);
	cout << "================\n\n" << endl;
	cout << "Player" << endl;
	PlayerScore += PrintCard(Deck[2]);
	PlayerScore += PrintCard(Deck[3]);

	if (ComputerScore > 21)
	{
		cout << "you win" << endl;
	}
	else if (PlayerScore > 21)
	{
		cout << "you lose" << endl;

	}
	else if (PlayerScore >= ComputerScore)
	{
		cout << "you win" << endl;
	}
	else
	{
		cout << "you lose" << endl;
	}

}


int main()
{
	Initialize();
	Shuffle();
	Print();

	return 0;
}


