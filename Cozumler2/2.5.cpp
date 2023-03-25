#include <iostream>
using namespace std;
int kurus;
class Para 
{
public:double liraDegeri;int elli=0; int yirmibes=0; int on=0; int bes=0; int bir=0;
	 void liraAta() 
	 {
		 double p;
		 cout << "Para degerini lira olarak giriniz";
		 cin >> p;
		 liraDegeri = p;
	 }
	 void donustur() 
	 {
		 kurus = liraDegeri * 100;
	 }
	 void yaz() 
	 {
		cout << liraDegeri << " lira:" << endl;
		elli = kurus / 50;
		kurus %= 50;
		yirmibes = kurus / 25;
		kurus %= 25;
		on = kurus / 10;
		kurus %=10 ;
		bes = kurus / 5;
		kurus %= 5;
		bir = kurus / 1;
		kurus %=1 ;
		cout << elli << " 50 kurus" << endl;
		cout << yirmibes << " 25 kurus" << endl;
		cout << on << " 10 kurus" << endl;
		cout << bes << " 5 kurus" << endl;
		cout << bir << " 1 kurus" << endl;
	 }	
};
int main()
{
	Para para;
	para.liraAta();
	para.donustur();
	para.yaz();
}