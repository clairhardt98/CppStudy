#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int strcnt = 0;
	cout << "영어 단어들을 입력하십시오 (끝내려면 done을 입력) : \n";
	while (1)
	{
		char tempStr[30];
		cin >> tempStr;
		if (!strcmp(tempStr, "done"))
			break;
		else
			strcnt++;
	}
	cout << "총 " << strcnt << " 단어가 입력되었습니다.\n";

}