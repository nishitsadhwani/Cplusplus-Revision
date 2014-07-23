#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int k[5],j=0;
    int i,l=123456;
    for(i=l;i>0;i/=100)
    {
           k[j]=i%100;
           ++j;
              
    }
    cout<<"\n DD - MM - YY ";
    cout<<"\n "<<k[1]<<" - "<<k[2]<<" - "<<k[0];

getch();
return 0;
}     
