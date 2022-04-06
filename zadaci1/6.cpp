#include <iostream>

/*
a) deklarišite pokazivac p1 na int
b) alocirajte prostor pokazivacu p1 u dinamickoj memoriji p1 = new int;
c) ucitajte broj sa tastature u prethodno alocirani prostor
d) inkrementirajte prethodno uneseni broj koristeæi pokazivac p1 pomocu operatora ++
e) definišite i pozovite funkciju promijeni_predznak ciji ce formalni parametar biti pokazivac;
funkcija treba promijeniti predznak broju koji je korisnik unio u koraku c
f) deklarirajte varijablu d i neka pokazivac p1 pokazuje na varijablu d
g) dodijelite varijabli d neku vrijednost koristeci pokazivac p1
h) promijenite predznak varijabli d, koristeci funkciju promijeni_predznak
i) pozovite ponovo funkciju promjeni_predznak i proslijedite joj kao aktuelni parametar pokazivac p1
*/
using namespace std;

void promijeni_predznak(int *p){
	 *p *= -1;
}


int main(){

int *p1;
p1 = new int;
cout<<"Unesite neki broj: ";
cin>>*p1;
(*p1)++;
promijeni_predznak(p1);
cout<<"Vrijednost sada je: "<<*p1<<endl;
int d;
delete p1;
p1 = &d;
*p1 = 9.6;
promijeni_predznak(&d);
cout<<"Vrijednost sada je: "<<d<<endl;
promijeni_predznak(p1);
cout<<"Vrijednost sada je: "<<*p1;
	return 0;
}
