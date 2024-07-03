#include <iostream>
using namespace std;
int main()
{
	int sotien;
	int Tien[8] = {500,200,100,50,20,10,5,1};
	int SoToTien[8] = {0};
	cout << "Tinh menh gia tien !!!";
	cout << "\n Nhap so tien: ";
	cin >> sotien;
	for (int i = 0; i < 8; i++)
	{
		do
		{	
			SoToTien[i] = sotien / Tien[i];
			sotien = sotien - (SoToTien[i] * Tien[i]);
			cout << Tien[i] << " " << SoToTien[i] << endl;
		} while (sotien / Tien[i] > 0);
	}	
}