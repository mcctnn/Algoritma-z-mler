#include <iostream>
using namespace std;
int* degistir(int*,int);
int main()
{
	int n;
	int* g1;
	cout << "Dizinin boyutunu giriniz: ";
	cin >> n;
	g1 = new int[n];
	cout << "Dizinin elemanlarını giriniz:";
	for (int i = 0; i <n; i++)
	{
		cin >> g1[i];
	}
	int* g2;
	g2 = degistir(g1, n);
	cout << "Dizinin ilk ve son elemansiz sekli:";
	for (int i = 0; i < n-2; i++)
	{
		cout << g2[i] <<" ";
	}
	
}
int* degistir(int *g,int n) 
{
	int* ctrlcv;
	int s = n - 2;
	ctrlcv = new int[s];
	for (size_t i = 0; i < s; i++)
	{
		ctrlcv[i] = g[i + 1];
	}
	return ctrlcv;
}