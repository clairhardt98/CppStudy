#include <iostream>
#include <string>


using namespace std;
struct TCL
{
	string name;
	double radius;
	double weight;
};

int main()
{
	TCL* Pizza = new TCL;

	cout << "피자의 지름 입력 : ";
	cin >> Pizza->radius;

	cin.ignore();

	cout << "피자의 이름 입력 : ";
	getline(cin, Pizza->name);
	
	cout << "피자의 무게 입력 : ";
	cin >> Pizza->weight;

	cout << "피자 " << Pizza->name << "의 지름 : " << Pizza->radius << ", 무게 : " << Pizza->weight << endl;

	delete Pizza;

}