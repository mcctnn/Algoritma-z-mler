#include <iostream>
using namespace std;

int main()
{
	double* hafta = nullptr;
	cout << "Diyet programinizin suresini giriniz:";
	int n;
	cin >> n;
	hafta = new double[n];
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". hafta kilonuz:";
		cin >> hafta[i];
	}
	cout << "Bu diyet programı ile toplam "<<hafta[0]-hafta[n-1] << " kilo kaybettiniz";
	delete[] hafta;
	return 0;
}




