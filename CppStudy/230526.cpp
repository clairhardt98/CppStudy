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

	cout << "������ ���� �Է� : ";
	cin >> Pizza->radius;

	cin.ignore();

	cout << "������ �̸� �Է� : ";
	getline(cin, Pizza->name);
	
	cout << "������ ���� �Է� : ";
	cin >> Pizza->weight;

	cout << "���� " << Pizza->name << "�� ���� : " << Pizza->radius << ", ���� : " << Pizza->weight << endl;

	delete Pizza;

}