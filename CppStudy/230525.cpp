#include <iostream>

using namespace std;
int main()
{
    char ch = 'M';
    int i = ch;
    cout << ch << "ASCII�ڵ�� " << i << "d�Դϴ�" << endl;

    cout << "�� ���� �ڵ忡 1�� ���غ��ڽ��ϴ�." << endl;
    ch += 1;
    i = ch;
    cout << ch << "�� ASCII�ڵ��" << i << "�Դϴ�" << endl;

    cout << "cout.put(ch)�� ����Ͽ� char�� ���� ch�� ȭ�鿡 ��� : ";
    cout.put(ch);

    cout.put('!');

    cout << endl << "����" << endl;
    return 0;
}