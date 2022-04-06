#include <iostream>
#include <cmath>
/*
Prepravite prethodni program (funkciju main) tako da poziv funkcije saberi i ispis vrijednosti sabiranja izvršava
sa dodatnim pokazivaèem p1 koji pokazuje na varijablu c.

*/



using namespace std;

void saberi (int *a, int *b, int *c){
	*c = *a+*b;
}



int main(){

int a,b,c;

cout<<"Unesite dva broja: ";
cin>>a>>b;

int *p = &c;
saberi(&a,&b,p);
cout<<a<<" + "<<b<<" = "<<c<<endl;


	return 0;
}
