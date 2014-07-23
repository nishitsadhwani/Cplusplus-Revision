#include<iostream>
#include<conio.h>
long sumof(long n);
using namespace std;
int main()
{
    long num=0,z=0,k=0,l;
    cin>>num;
    z=sumof(num );
  if(z>10)
   {k=sumof(z);
   if(k>=10)
   {
            l=sumof(k);
            cout<<l;
            }
            else
   cout<<k;    }
   else
   cout<<z;                                     
getch();
return 0;
}
long sumof(long n)
{
    long i,sum=0;
    for(i=n;i>0;i/=10)
    {
                     sum+=i%10;
                     
                     }
                    
                                         return sum;
                                            }
