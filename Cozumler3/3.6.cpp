#include <iostream>
using namespace std;
class Seans {
	int kontenjan;
public:
	Seans(int k = 20) { kontenjan = k;}
	bool yerVar(){
		if (kontenjan <= 20)
		{
			return 1;
		}
		else
			return 0;
	}
	void yerAyir() {
		int y;
		cout << "Koltuk sayisi: ";
		cin >> y;
		if (y < kontenjan)
		{
			kontenjan = kontenjan - y;
			cout << y << "koltuk rezerve edildi.";
		}
		else
			cout << "Rezerve edilemedi...";
		
	}
	void iptal(int i) {
		kontenjan += i;
		cout << "Iptal edildi";
	}
	int kalanKoltuk() {
		return kontenjan;
	}
};
int main()
{
	Seans onIki, onBes, onSekiz;
	char secenek;
	int saat, koltukSayisi;
	cout << "Lutfen asagıdakilerden biriniz seciniz:" << endl << "R: rezervasyon" << endl
		<< "I: iptal" << endl << "K: kalan koltuk sayisi" << endl << "S: son" <<endl<<"Secenek" << endl;
	cin >> secenek;
	while (secenek!='S') {
		if (secenek == 'R')
		{
			cout << "Seans saati (12,15,18)";
			cin >> saat;
			if (saat == 12)
			{
				if (onIki.yerVar() == 1)
				{
					onIki.yerAyir();
				}
			}
			else if (saat == 15)
			{
				if (onBes.yerVar() == 1)
				{
					onBes.yerAyir();
				}
			}
			else
			{
				if (onSekiz.yerVar() == 1)
				{
					onSekiz.yerAyir();
				}
			}
		}
		else if (secenek == 'I')
		{
			cout << "Seans saati (12,15,18)";
			cin >> saat;
			if (saat == 12)
			{
				onIki.iptal(4);
			}
			else if (saat == 15)
			{
				onBes.iptal(4);
			}
			else
				onSekiz.iptal(4);
		}
		else if (secenek == 'K')
		{
			cout << "Seans saati (12,15,18)";
			cin >> saat;
			if (saat == 12)
			{
				cout << onIki.kalanKoltuk() << " koltuk reverze edilebilir";
			}
			else if (saat == 15)
			{
				cout << onBes.kalanKoltuk() << " koltuk rezerve edilebilir";
			}
			else
				cout << onSekiz.kalanKoltuk() << " koltuk rezerve edilebilir";
		}
		else
			cout << "Hatali giris...";break;
		cout << "Secenek:";
		cin >> secenek;
		}
	system("Pause");
	}


