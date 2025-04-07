#include <iostream>
#include <algorithm>
#define POCKET_SIZE		52

using namespace std;
//[][][][][]
int main()
{

	//Init()
	srand((unsigned int)time(NULL));

	int Pocket[POCKET_SIZE] = { 0, };

	for (int Index = 0; Index < POCKET_SIZE; Index++)
	{
		Pocket[Index] = Index + 1;
	}

	//Shuffle
	int Temp = 0;
	for (int Count = 0; Count < POCKET_SIZE * 1000; Count++)
	{
		int First = rand() % POCKET_SIZE;
		int Second = rand() % POCKET_SIZE;
		Temp = Pocket[First];
		Pocket[First] = Pocket[Second];
		Pocket[Second] = Temp;
	}


	//Print()
	for (int Index = 0; Index < POCKET_SIZE; Index++)
	{
		cout << Pocket[Index] << ", ";
	}


	return 0;
}