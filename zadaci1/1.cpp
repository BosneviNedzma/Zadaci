#include <iostream>
#include <cmath>
using namespace std;



int main(){

float a,b;
cout<<"Unesite dva broja: ";
cin>>a>>b;
float *p1=&a;
float *p2=&b;
float c1,c2,c3,c4,c5,c6;

c1 = (*p1)-(*p2);
c2 = sin(*p1)-cos(*p2);
c3 = (*p2)*(*p1);
if (*p2 != 0){
	c4 = (*p1)/(*p2);
}
c5 = pow((*p1), (*p2));
c6 = pow(sqrt(*p1), (*p2));
cout<<"Vrijednost varijable c1 je: "<<c1<<"."<<endl;
cout<<"Vrijednost varijable c2 je: "<<c2<<"."<<endl;
cout<<"Vrijednost varijable c3 je: "<<c3<<"."<<endl;
cout<<"Vrijednost varijable c4 je: "<<c4<<"."<<endl;
cout<<"Vrijednost varijable c5 je: "<<c5<<"."<<endl;
cout<<"Vrijednost varijable c6 je: "<<c6<<"."<<endl;




	return 0;
}
