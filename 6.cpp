#include <iostream>
using namespace std;
class Saat
{
public:
	int saat, dakika;
	void kur(int a, int b)
	{
		saat = a;
		dakika = b;
	}
	/*void kur()
	{
		saat = 12;
		dakika = 0;
	}*/
	void arttır()
	{
		if (dakika < 59)
		{
			dakika++;
		}
		else
		{
			dakika=0;
			if (saat < 23)
			{
				saat++;	
			}
			else
			{
				saat = 0;
			}
		}
	}
	void goster()
	{
		if (saat == 0)
		{
			cout << "00";
		}
		else
		{
			cout << saat;
		}
		if (dakika == 0)
		{
			cout << ":00" << endl;
		}
		else if (dakika<10)
		{
			cout << ":0" << dakika << endl;
		}
		else
		{
			cout << ":" << dakika << endl;
		}
	}
};
int main()
{
	Saat saat;
	saat.kur(14,55);
	cout << "Saat: ";
	saat.goster();
	cout << "10 dk boyunca saat:";
	for (int i = 1; i <=10; i++)
	{
		saat.goster();
		saat.arttır();
	}
	return 0;
}