#include <iostream>
#include <stdlib.h>
#include <ratio>
using namespace std;
class VucutKutlesi {
private :
    float boy;
    float kilo;
    string durum;
public:
    VucutKutlesi(float _boy, float _kilo) { boy = _boy; kilo = _kilo; }
    float vkiHesapla();
    float idealKiloHesapla();
    friend void testVkiHesapla(VucutKutlesi);
    friend void testIdealKiloHesapla(VucutKutlesi);
};
int main()
{
    float k, b;
    cout << "Kilo..";
    cin >> k;
    cout << "Boy..";
    cin >> b;
    VucutKutlesi vucutKutlesi(b,k);
    vucutKutlesi.vkiHesapla();
    vucutKutlesi.idealKiloHesapla();
}

float VucutKutlesi::vkiHesapla()
{
    cout << "VKI hesabi test ediliyor..." << endl;
    cout << "Kilo:" << kilo << "kg" << endl << "Boy:" << boy << "m" << endl;
    return kilo / (boy * boy);
}

float VucutKutlesi::idealKiloHesapla()
{
    cout << "Ideal kilo hesabi test ediliyor..." << endl;
    cout << "Kilo:" << kilo << "kg" << endl << "Boy:" << boy << "m" << endl;
    return (boy * boy) * 22;
}

void testVkiHesapla(VucutKutlesi a)
{
    float testvki, vki;
    vki = a.vkiHesapla();
    testvki = (a.kilo) / a.boy * a.boy;
    if (vki==testvki)
    {
        cout << "Test basarili.." << vki;
    }
    else
    {
        cout << "Test basarisiz.."<<endl<<" mevcut vki" << testvki << endl << " olmasi gereken..." << vki;
    }
}

void testIdealKiloHesapla(VucutKutlesi a)
{
    float testikh, ikh;
    ikh = a.idealKiloHesapla();
    testikh = 22 * (a.boy *a.boy);
    if (ikh = testikh)
    {
        cout << "Test basarili.." << ikh;
    }
    else
        cout << "Test basarisiz.." << endl << "mevcut ikh" << testikh << endl << "olmasi gereken..." << ikh;
}
