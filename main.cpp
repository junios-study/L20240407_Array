#include <iostream>
#include <algorithm>

#define POCKET_SIZE		52

using namespace std;


//global variable
int Pocket[POCKET_SIZE] = { 0, };


void Initialize()
{
	srand((unsigned int)time(NULL));

	for (int Index = 0; Index < POCKET_SIZE; Index++)
	{
		Pocket[Index] = Index + 1;
	}
}

void Shuffle()
{
	int Temp = 0;
	for (int Count = 0; Count < POCKET_SIZE * 1000; Count++)
	{
		int First = rand() % POCKET_SIZE;
		int Second = rand() % POCKET_SIZE;
		Temp = Pocket[First];
		Pocket[First] = Pocket[Second];
		Pocket[Second] = Temp;
	}
}

void Print()
{
	for (int Index = 0; Index < POCKET_SIZE; Index++)
	{
		cout << Pocket[Index] << ", ";
	}
}



int Add(int A, int B)
{
	return A + B; 
}

int Sub(int A, int B)
{
	return A - B;
}


int main()
{
	int A = 20;
	int B = 30;


	cout << Sub(A, B) << endl;

	return 0;
}


