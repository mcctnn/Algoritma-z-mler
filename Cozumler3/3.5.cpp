#include <iostream>
using namespace std;
int aylar[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
class Tarih {
	int gun, ay, yil;
public:
	Tarih(int g = 1,int a=1,int y=2012)
	{
		gun = g;
		ay = a;
		yil = y;
	}
	void arttir() {
		if (gun==aylar[ay])
		{
			gun = 1;
			if (ay == 12) {
				yil++; ay = 1;
			}
			ay++;
		}
		else {
			gun++;
			if (ay==12)
			{
				yil++;ay = 1;
			}
		}
		
	}
	void goster() {
		cout << gun << "/" << ay << "/" << yil << endl;
	}
	
};
int main()
{
	Tarih tarih(30,7);
	cout << "Bugun: ";
	tarih.goster();
	cout<<"Onumuzdeki 10 gun:";
	for (int i = 1; i <= 10; i++)
	{
		tarih.arttir();
		tarih.goster();
	}
	return 0;
}
