#include <iostream>
using namespace std;
int n, o, d;
class YerlesimBirimi {
    string sehir;
    int nufus, olumSayisi, dogumSayisi;
   public: void isimAta();void nufusAta();void dogumAta();void olumAta();
        void dogumOranBul();void olumOranBul(); 
};

int main()
{
    YerlesimBirimi yerlesimBirimi;
    yerlesimBirimi.isimAta(); 
    yerlesimBirimi.nufusAta();
    yerlesimBirimi.dogumAta();
    yerlesimBirimi.olumAta();
    yerlesimBirimi.dogumOranBul();
    yerlesimBirimi.olumOranBul();
    return 0;
}

void YerlesimBirimi::isimAta()
{
    cout << "Yerlesim biriminin ismini giriniz:";
    cin >> sehir;
}

void YerlesimBirimi::nufusAta()
{
    cout << "Nufusunu giriniz:";
    cin >> nufus;

}

void YerlesimBirimi::dogumAta()
{
    cout << "Dogum sayisini giriniz:";
    cin >> dogumSayisi;
}

void YerlesimBirimi::olumAta()
{
    cout << "Olum sayisini giriniz:";
    cin >> olumSayisi;
}
void YerlesimBirimi::dogumOranBul()
{
    double dob = double(dogumSayisi) / nufus;
    cout << sehir << "--- Dogum orani: " <<dob<< endl;
}

void YerlesimBirimi::olumOranBul()
{
    double oob = double(olumSayisi) / nufus;
    cout <<sehir<<"--- Olum orani: "<<oob;
}