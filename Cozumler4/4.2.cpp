#include <iostream>
using namespace std;
class Nokta {
    int x, y;
public:
    Nokta(int _x, int _y) { x = _x; y = _y; }
    int xAl() { return x; };
    void xAta(int _x) { x = _x; };
    int yAl() { return y; };
    void yAta(int _y) { y = _y; };
    friend class Dikdortgen;
};
class Dikdortgen {
    Nokta a, b;
public:
    Dikdortgen(Nokta _a,Nokta _b)
    {
        a = _a; 
        b = _b;
    }
    float alan();
    int cevre();
};
int main()
{
    int x, y;
    cout << "a noktasi (x,y):";
    cin >> x >> y;
    Nokta a(x, y);
    cout << "b noktasi(x,y):";
    cin >> x >> y;
    Nokta b(x, y);
    Dikdortgen d(a,b);
    cout << "Dikdortgen cevresi: " << d.cevre() << endl;
    cout << "Dikdortgen alanı: " << d.alan() << endl;
    return 0;
}
float Dikdortgen::alan()
{
    return (b.xAl() - a.xAl()) * (b.yAl() - a.yAl());
}

int Dikdortgen::cevre()
{
    return 2*((b.xAl() - a.xAl()) + (b.yAl() - a.yAl()));
}
