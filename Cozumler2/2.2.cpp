#include <iostream>
using namespace std;
int h, r;
class Silindir
{
int yukseklik, tabanYaricapi;
public:
    double yuzeyAlanıHesapla(); double hacimHesapla(); int pi = 3;
};
double Silindir::yuzeyAlanıHesapla()
{
    cout << "Yukseklik:";
    cin >> h;
    yukseklik = h;
    cout << "Taban yaricapi:";
    cin >> r;
    tabanYaricapi = r;
    return 2 * pi * r * h + 2 * pi * r;
}
double Silindir::hacimHesapla() 
{
    return pi * r *r * h;
}
int main()
{
    Silindir silindir;
    cout << "Yuzey alanı:" << silindir.yuzeyAlanıHesapla() << endl;
    cout << "Hacmi:" << silindir.hacimHesapla() << endl;
    return 0;
}