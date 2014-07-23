#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
    int n,i,j[10],c=0;;
    cin>>n;
    for(i=1;n!=0;i++)
    {
              j[i]=n%2;
              ++c;
              n=n/2;
    }
for(i=c;i>0;i--)
    {
                           cout<<j[i];
}
getch();
return 0;
}
                     
