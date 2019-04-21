#include<iostream>
using namespace::std;

int data[20];
int bnykdata;

void tukar(int a, int b)
{
int c;
c=data[b];
data[b]=data[a];
data[a]=c;
}

main()
{
int pos,i,j;


cout<<"SELECTION SORT ASCENDING"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"BANYAK DATA: ";
cin>>bnykdata;cout<<endl;

for(int i=0;i<bnykdata;i++)
{
cout<<"DATA KE-"<<(i+1)<<" = " ;
cin>>data[i];
}
cout<<"-------------------------------------------------"<<endl;
cout<<"DATA INPUTAN:"<<endl;
for(i=0;i<bnykdata;i++)
{
cout<<data[i]<<" ";
}
cout<<endl<<"-------------------------------------------------"<<endl;

for(i=0;i<bnykdata-1;i++)
{
pos=i;
for(j=i+1;j<bnykdata;j++)
{
if(data[j]<data[pos])pos=j;
}
if(pos!=i) tukar(pos,i);
}

cout<<"DATA DIURUTKAN SECARA ASCENDING : "<<endl;
for(int i=0;i<bnykdata;i++)
{
cout<<data[i]<<" ";
}

}
