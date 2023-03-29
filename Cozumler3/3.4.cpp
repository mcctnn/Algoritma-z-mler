#include <iostream>
using namespace std;
class Polinom {
	int* katsayi;
	int derece;
public:Polinom(int);
	  void katsayiAta();void yaz(); void topla(Polinom p);
};
int main()
{
	int d;
	cout << "Polinomun derecesini giriniz:";
	cin >> d;
	Polinom p1(d), p2(d);
	p1.katsayiAta();
	p2.katsayiAta();
	p1.yaz();
	cout << " ";
	p2.yaz();
	cout << " =";
	p1.topla(p2);
	p1.yaz();
}

Polinom::Polinom(int d)
{
	derece = d;
}

void Polinom::katsayiAta()
{

	cout << "Katsayilari giriniz:" << endl;
	katsayi = new int[derece];
	for (int i = derece; i >= 0; i--)
	{
		cout <<  i << ". katsayi:";
		cin >> katsayi[i];
	}

}

void Polinom::yaz()
{
	for (int i = derece; i >= 0; i--)
	{
		if (katsayi[i] != 0)
		{
			if (i == 0)

				cout << katsayi[i];
			else if (i == 1)
				cout << katsayi[i] << "x+";
			else
				cout << katsayi[i] << "x" << i << "+";
		}
	}
}
void Polinom::topla(Polinom p)
{
	for (int i = derece; i >= 0; i--)
	{
		katsayi[i] += p.katsayi[i];
	}
}
