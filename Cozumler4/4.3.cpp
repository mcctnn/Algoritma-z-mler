#include <iostream>
using namespace std;
class Nokta {
    float x, y;
public:
    Nokta(float _x, float _y) { x = _x;y = _y; }
    float xAl() { return x; }
    float yAl() { return y; }
    friend class Dogru;
};
class Dogru {
    float x, y;
public:
    Nokta kesisim(Dogru &dogru);
    float egim();
    Dogru(float _x ,float _y){x = _x; y = _y; }
};
int main()
{
    Dogru dogru1(2.0,3.5);
    Dogru dogru2(-2.0,5.0);
    cout << "Dogru1 egimi:" << dogru1.egim() << endl;
    cout <<"Dogru2 egimi: " << dogru2.egim() << endl;
    Nokta k = dogru1.kesisim(dogru2);
    cout <<"Kesisim noktalari(x,y):" << k.xAl() << " " << k.yAl();
    return 0;
}

Nokta Dogru::kesisim(Dogru& dogru)
{
    return  Nokta((dogru.y - y) / (x - dogru.x), (x + y) / 2);

}

float Dogru::egim()
{
    int egim = x;
    return egim;
}
