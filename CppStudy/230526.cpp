#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string name;
	float weight;
	int calorie;
};

int main()
{
	CandyBar** SnackSet = new CandyBar*[3];

	for (int i = 0; i < 3; i++)
	{
		SnackSet[i] = new CandyBar;
	}
	SnackSet[0]->name = "Mocha Munch";
	SnackSet[0]->weight = 2.3f;
	SnackSet[0]->calorie = 350;
	SnackSet[1]->name = "Mild Seven";
	SnackSet[1]->weight = 2.5f;
	SnackSet[1]->calorie = 200;
	SnackSet[2]->name = "Moevius";
	SnackSet[2]->weight = 3.0f;
	SnackSet[2]->calorie = 250;


	for (int i = 0; i < 3; i++)
	{
		cout << "상표명 : " << SnackSet[i]->name << endl;
		cout << "중량 : " << SnackSet[i]->weight << endl;
		cout << "칼로리 : " << SnackSet[i]->calorie << endl << endl;
	}

	for (int i = 0; i < 3; i++)
		delete[] SnackSet[i];

	delete[] SnackSet;
}
