#include <iostream> 
#include <string> 
#include<conio.h> 
using namespace std; 
 
int main(int argc, char* argv[]) 
{ 
   int n=0,k=0,a[5]; 
   cout<<"Enter Maximum No.:\n"; 
   cin>>n; 
   for(int i=5;i<=n;i++)
        {
                for(int j=2;j<i;j++)
                {
                        if((i%j)==0)
                        {         
                                k-=1;
                                break; 
                         }
                        else
                        a[k]=i;
                }
        
        ++k;
        
        }  
 for(int i=0;i<k;i++)
 {  
 cout<<a[i]<<"\n"; 
 }  cout<<"Sexy Pairs:\n"; 
getch();
return 0;
} 
 
