#include<iostream>
using namespace::std;

int data[10];
int n;

main()
{
int x,i,z;
cout<<"INSERTION SORT DESCENDING"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"BANYAKNYA DATA : ";
cin>>n;cout<<endl;
for(int i=0;i<n;i++)
{
cout<<"DATA KE-"<<(i+1)<<" = " ;
cin>>data[i];
}
cout<<"-------------------------------------------------"<<endl;
cout<<"DATA INPUTAN:"<<endl;
for(i=0;i<n;i++)
{
cout<<data[i]<<" ";
}
cout<<endl<<"-------------------------------------------------"<<endl;

for(i=1;i<n;i++)
{
x=data[i];
z=i-1;
while(data[z]<x && z>=0)
{
data[z+1]=data[z];
z--;
}
data[z+1]=x;
}

cout<<"DATA DIURUTKAN SECARA DESCENDING : "<<endl;
for(int i=0;i<n;i++)
{
cout<<data[i]<<" ";
}

}
