#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int strcnt = 0;
	cout << "���� �ܾ���� �Է��Ͻʽÿ� (�������� done�� �Է�) : \n";
	while (1)
	{
		char tempStr[30];
		cin >> tempStr;
		if (!strcmp(tempStr, "done"))
			break;
		else
			strcnt++;
	}
	cout << "�� " << strcnt << " �ܾ �ԷµǾ����ϴ�.\n";

}