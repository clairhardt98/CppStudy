#include <iostream>

using namespace std;
//Q3
int main()
{
    //eu style : l/100km, usa style : G/mile
	// ���� : ų�� = ���� : ����
	// 100 * 1/3.875 : 62.4���� = �� ���� : 1����?
	double oilconsume;
	
	cout << "�ֹ��� �Һ�(100ų�ι��ʹ� ���� ��) : ";
	cin >> oilconsume;
	const double kmtomile100 = 62.14;
	const double litertogalon = 1 / 3.875;

	double usaoilconsume = (kmtomile100) / (oilconsume * litertogalon);
	cout << "�ֹ��� �Һ�(������ ���� ��) : " << usaoilconsume << endl;
	
}