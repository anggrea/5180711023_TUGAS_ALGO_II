#include <iostream>
using namespace::std;
double pem(double angka, double pangkat){
    double a,b,c;
    if (pangkat>0)
    {a=1;b=0;c=1;}
    if (pangkat<0)
    {a=0;b=1;c=-1;}
    if (pangkat==0){return 1 ;}

    else
        return 1/angka*pem(angka,pangkat-c)*b + angka*pem(angka,pangkat-c)*a;
    }

main () {
double s,l;
cout<<"ANGKA :";
cin>>s;
cout<<"PEMANGKATAN :";
cin>>l;
cout<<"HASIL PANGKAT :"<<pem(s,l);

}







