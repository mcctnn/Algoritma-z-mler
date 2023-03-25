#include <iostream>
using namespace std;
double ata;
int ses;
string m1 = "112 arandi.", m2="155 arandi.",genelmesaj;
class Telsiz 
{
public: void ac();void sesAyarla(int);void kanalAyarla(double);void konus(string);void ledGoster();void kapa();void kapa(int);string dinle();
};
int main()
{
	Telsiz telsiz;
	telsiz.ac();
	telsiz.sesAyarla(10);
	telsiz.kanalAyarla(11.2);
	telsiz.konus("Trafik kazasi var,yardim gonderin...");
	telsiz.ledGoster();
	string mesaj = telsiz.dinle();
	cout << "Gelen mesaj: " << mesaj<<endl;
	telsiz.konus("Tamam...");
	telsiz.kapa();
	cout << "Ses seviyesi:" << ses << endl;
	return 0;
}
void Telsiz::ac()
{
	ses = 1;
}
void Telsiz::sesAyarla(int s)
{
	ses = s;
}
void Telsiz::kanalAyarla(double k)
{
	ata = k;
}
void Telsiz::konus(string m)
{
	cout << m;
}
string Telsiz::dinle()
{
	string mesaj;
	if (ata == 11.2)
	{
		genelmesaj = m1;
	}
	else
		genelmesaj = m2;
	mesaj = genelmesaj;
	return mesaj;
}
void Telsiz::ledGoster()
{
	if (ata==11.2)
	{
		cout << "Kirmizi LED yaniyor..." << endl << m1;
	}
	if (ata==15.5)
	{
		string m2 = "155 arandi.";
		cout << "Mavi LED yaniyor..." <<endl<<m2;
	}
}
void Telsiz::kapa()
{
	ses = 0;
}