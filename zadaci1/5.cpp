#include <iostream>
#include <cmath>
/*
Napravite program u kojem æe te koristiti funkciju void zamjeni(int* p1, int* p2). Funkcija treba
zamijeniti vrijednosti varijabli koji su joj proslijeðeni kao aktuelni parametri u pozivu.

Riješite prethodni zadatak pomoæu reference.
*/
using namespace std;


void zamijeni (int *p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void zamijeni2 (int &a, int &b){
	int temp;
	temp = a;
	a=b;
	b=temp;
}

int main(){

int a,b;
cout<<"Unesite dva broja: ";
cin>>a>>b;
cout<<"\nBrojevi prije zamjene su: a = "<<a<<" i b = "<<b<<". "<<endl;
zamijeni(&a,&b);
cout<<"Brojevi poslije zamjene su: a = "<<a<<" i b = "<<b<<". "<<endl;
zamijeni2(a,b);
cout<<"Brojevi poslije ponovne zamjene su: a = "<<a<<" i b = "<<b<<". "<<endl;


	return 0;
}
