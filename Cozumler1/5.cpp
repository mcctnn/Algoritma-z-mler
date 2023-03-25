#include <iostream>
using namespace std;
void mod(int);
int main()
{
    int *m;
    cout << "Veri serisinin boyutunu giriniz: ";
    int n; cin >> n;
    m = new int[n];
    if (n>9)
    {
        cout << "Iki basamaki sayi olamaz";
        return 0;
    }
    cout << "Veri serisini giriniz: ";
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    cout << "Mod: ";
    mod(n);
    return 0;
}
void mod(int n)
{
    int bi = 0;
    int *p;
    p = new int[n];
    int* modtut;
    modtut = new int[n];
    for (int i = 0; i < n; i++)
    {
        modtut[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (p[i]==p[j])
            {
                modtut[i]++;
            }
        }
        if (modtut[i]>modtut[bi])
        {
            bi = i;
        }
    }
    cout << modtut[bi];
}
