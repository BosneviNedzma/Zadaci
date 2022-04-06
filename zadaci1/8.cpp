#include <iostream>

/*
Napišite program u kojem æete:
a) deklarirati niz tipa double koji ima 10 elemenata:
double niz [10]={0.0, 1.1, 2.2, 3.3., 4.4, 5.5, 6.6, 7.7, 8.8, 9.9}
b) provjeriti koliko prostora u memoriji zauzima tip podatka double i koliko prostora u memoriji zauzima
cijeli niz (upotrijebite operator sizeof)
c) deklarirati pokazivac koji pokazuje na objekt tipa double
d) inicijalizirate pokazivac na adresu prvog elementa niza
(pokušajte ovu inicijalizaciju napraviti na dva nacina)
e) ispišite 4 element niza na barem 3 razlicita nacina
(koristite indeksaciju elemenata niza, dereferenciranje pokazivaca i operacije nad pokazivacem)
f) ispišite adrese svih elemenata niza koristeci operator inkrementa na pokazivac
(vodite racuna da ukoliko dekrementirate pokazivac – rezultat je adresa pomaknuta za onoliko bajta
koliko zauzima tip podatka na koji upucuje pokazivac)
g) ispišite elemente niza koristeci dereferenciranje pokazivaca.
*/
using namespace std;



int main(){

double niz[10]{0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

cout<<"Zauzima prostora: "<<10*sizeof(double)<<endl;

double *p;

p = &(niz[0]);

double a = niz[3];
double b = *(niz+3);
double c = p[3];

cout<<a<<" - "<<b<<" - "<<c<<endl;
cout<<"Prvi nacin: ";
for (int i=0; i<10; i++){
	cout<<"Adresa "<<i<<": "<<niz+i<<endl;
}

cout<<endl;
cout<<"Drugi nacin: ";
for (int i=0; i<10; i++){
	cout<<"Adresa "<<i<<": "<<p+1<<endl;
}

for (int i=0; i<10; i++){
	cout<<i+1<<". element: "<<*(p++)<<endl;
}

	return 0;
}
