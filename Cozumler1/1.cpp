#include <iostream>
using namespace std;
void sayiOku(float* g, int n);
void yazdır(float*g , int n);
float maksimumHesapla(float* g,int n);
int main()
{
	float *g;
	int n;
	float max, min, ortalama;
	cout << "Girmek istediginiz sayi adedini giriniz";
	cin >> n;
	g = new float[n];
	sayiOku(g,n);
	yazdır(g,n);
	cout << "En buyuk sayi:" << maksimumHesapla(g,n) << endl;
	delete[] g;
	return 0;
}
void sayiOku(float* g, int n)
{
	for (int i=0;i<n;i++)
	{
		cout << i + 1 << ". sayı:" << endl;
		cin >> g[i];
	}
	
}
void yazdır(float* g, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << g[i] << endl;
	}
}
float maksimumHesapla(float* g, int n)
{
	float m = *g;
	for (int i = 0; i < n; i++)
	{
		if (g[i]>m)
		{
			m = g[i];
		}
		
	}
	return m;
}