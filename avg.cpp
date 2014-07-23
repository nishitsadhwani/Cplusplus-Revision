#include <iostream> 
#include<conio.h>
using namespace std; 
int main() 
{ 
int arr[10],cp=0,cn=0,sp=0,sn=0; 
float avg_pos=0.0,avg_neg=0.0; 
 
for(int i=0;i<10;i++) 
{ 
cin>>arr[i];   
} 
 
//Write your logic here 
 
 
for(int i=0;i<10;i++) 
{ 
if(arr[i]<0)
{
sn+=arr[i];
++cn;    
}  
else
{
sp+=arr[i];
++cp;
}
}
cout<<"\n p"<<sp; 
cout<<"\n n"<<sn;    
avg_pos=sp/cp;
avg_neg=sn/cn;
 
 
//end 
cout<<"positivenumbers:\n"<<avg_pos; 
cout<<"negativenumbers:\n"<<avg_neg;   
getch();
return 0; 
} 
 
 
 
 
