#include <iostream>

using namespace std;
//Q3
int main()
{
    //eu style : l/100km, usa style : G/mile
	// 리터 : 킬로 = 마일 : 갤런
	// 100 * 1/3.875 : 62.4마일 = 몇 갤런 : 1마일?
	double oilconsume;
	
	cout << "휘발유 소비량(100킬로미터당 리터 수) : ";
	cin >> oilconsume;
	const double kmtomile100 = 62.14;
	const double litertogalon = 1 / 3.875;

	double usaoilconsume = (kmtomile100) / (oilconsume * litertogalon);
	cout << "휘발유 소비량(갤런당 마일 수) : " << usaoilconsume << endl;
	
}