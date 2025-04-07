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
		Deck[Index] = Index + 1;
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

void Print()
{
	//Computer
	cout << Deck[0] % 14 << ", ";
	cout << Deck[1] % 14 << endl;

	cout << "================" << endl;
	//Player
	cout << Deck[2] % 14 << ", ";
	cout << Deck[3] % 14 << endl;

}


int main()
{
	Initialize();
	Shuffle();
	Print();

	return 0;
}


