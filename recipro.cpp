#include <iostream> 
#include <math.h> 
#include <ctype.h> 
#include<conio.h>
   
using namespace std;  
int main() 
{ 
 
  double sum = 0,r,j=1,n=0,k=0; 
  double average = 0; 
  double product = 1; 
 
  cout<<"Type an integer and press Enter:\n"; 
  cin>>n; 
        r=1/n;
 for(float i=1;i<20;i++)
        {       
                k=1/j;
                sum+=k;
                product*=k; 
                if(j==n)
                break;
              
                ++j;
        }
average=sum/n; 
  cout<<"Sum, product and average of reciprocals are:\n";  
 cout<<sum<<" "<<product<<" "<<average;
getch();
return 0;
}  
 
 
 
 
 
