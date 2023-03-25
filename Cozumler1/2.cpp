#include <iostream>
using namespace std;
/*
* x->z
* z->y
* y->x gösterecek
*/
void degistir(int *x,int *y,int *z) 
{
    int _x, _y, _z;
    _x = *x;
    _y = *y;
    _z = *z;
    *z = _x;
    *y = _z;
    *x = _y;
}
int main()
{
    int x = 10, y = 20, z = 30;
    degistir(&x,&y,&z);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}