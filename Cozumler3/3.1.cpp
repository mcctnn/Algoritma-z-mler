#include <iostream>
using namespace std;
class Ulke 
{
public:
	Ulke(string _baskent, string _ulkePlaka) {
		string baskent, ulkePlaka; baskent = _baskent; ulkePlaka = _ulkePlaka;
	cout << baskent + " " << ulkePlaka;
	}
	Ulke() {}
	Ulke(string _baskent) { string baskent; baskent = _baskent;
	cout << baskent + " ";
	}
	Ulke(long _nufus) {
		long nufus; nufus = _nufus; bool dvm=true;
	if (dvm)
	{
		cout << nufus + " "; 
	}
	}
	Ulke(string _baskent, string _h, string _dil) { string baskent = _baskent, h = _h, dil = _dil;
	cout << baskent + " " << h + " " << dil;
	}
	Ulke(int _tlfKodu) {
		int tlfKodu = _tlfKodu
			;
		cout << tlfKodu;
	}
};


int main()
{
	Ulke Turkiye("Ankara","TR");
	Ulke Almanya;
	Ulke Ingiltere("Londra");
	Ulke Kosava(2000000);
	Ulke Ispanya("Madrid","E","Ispanyolca");
	Ulke Estonya(372);
}