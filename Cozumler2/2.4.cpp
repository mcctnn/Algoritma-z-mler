#include <iostream>
using namespace std;
class KolaMakinesi
{
public:double kolaFiyat; int kolaSayi;
    void ilkYukleme(double f=2.5,int s=100) 
    {
        kolaFiyat = f;
        kolaSayi = s;
    }
    void kolaVerme() 
    {
        double para;
        cout << "Kola fiyati: " << kolaFiyat << endl;
        cout << "Odemeniz:";
        cin >> para;
        if (para>kolaFiyat)
        {
            cout << "Kolaniz veriliyor." << endl;
            cout << "Para ustunuz " << para - kolaFiyat <<"TL" << endl;
            kolaSayi--;
        }
    }
    void goster() 
    {
        cout << "Son durum:" << endl;
        cout << "    Kolanin fiyati: " << kolaFiyat << endl;
        cout << "    Kola sayisi: " << kolaSayi << endl;
    }
};
int main()
{
    KolaMakinesi kolaMakinesi;
    kolaMakinesi.ilkYukleme();
    kolaMakinesi.kolaVerme();
    kolaMakinesi.goster();
    return 0;
}