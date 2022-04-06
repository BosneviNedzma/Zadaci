#include <iostream>
#include <cmath>
/*
Napravite program tako da iskoristite prototip funkcije:

void saberi(int *, int *, int *);

Funkcija treba sabrati vrijednosti prva dva parametra i rezultat smjestiti u treci parametar. U funkciji main
trebate nakon poziva funkcije ispisati rezultat sabiranja.

*/



using namespace std;

void saberi (int *a, int *b, int *c){
	*c = *a+*b;
}



int main(){

int a,b,c;

cout<<"Unesite dva broja: ";
cin>>a>>b;
saberi(&a,&b,&c);
cout<<a<<" + "<<b<<" = "<<c<<endl;


	return 0;
}
