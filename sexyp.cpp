#include <iostream>   
#include<conio.h>
#include <string>     
using namespace std;  
int prime(int n, int a[],int l) 
{ 
 int k; 
 for(int i=2;i<=n;i++)  
        {  
                for(int j=1;j<i;j++)  
                {  
                        if((i%j)==0 && (j!=1))  
                        {           
                                k=0; 
                                break;   
                         }  
                        else  
                        k=1; 
                }  
        if(k==1) 
        { 
                a[l]=i; 
                ++l; 
        } 
                 
        }  
        return l;   
} ;
int checkprime(int n,int a[],int k)
{int h=0
for(int i=0;i<k;i++)
{
        if(a[i]==n)
        {
        h=1;
        break;
        }
}
return h;

};  
int main(int argc, char* argv[])   
{   
   int n=0,k=0,z[10],c,r;   
   cout<<"Enter Maximum No.:\n";   
   cin>>n;   
   k=prime(n,z,0);  
cout<<"Sexy Pairs:\n"; 
 for(int i=0;i<k;i++) 
   { 
        c=z[i]+6;
        r=checkprime(c,z,k);
        if(r==1) 
           cout<<"("<<z[i]<<" "<<c<<")"; 
} 
getch();
return 0;    
}   
   
  
 
