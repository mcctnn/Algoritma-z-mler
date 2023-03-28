#include <iostream>
using namespace std;
class TelefonRehberi 
{
	string* isimler; long* telefonlar;
public:
	TelefonRehberi(string* _isimler, long* _telefonlar) { isimler = _isimler; telefonlar = _telefonlar; }
	TelefonRehberi(TelefonRehberi& rehber) { isimler = rehber.isimler; telefonlar = rehber.telefonlar; }
	void yazdir() {
		for (int i = 0; i < 5; i++)
		{
			cout << isimler[i] +  " " << telefonlar[i]<<endl;
		}
	};
};
int main()
{
	string isimler[] = { "Aydan Sener","Fatma Girik","Filiz Akin","Hulya Kocyigit","Turkan Soray" };
	long telefonlar[] = { 111111,222222,333333,444444,555555 };
	TelefonRehberi rehber1(isimler,telefonlar);
	TelefonRehberi rehber2(rehber1);
	rehber2.yazdir();
	return 0;
}


