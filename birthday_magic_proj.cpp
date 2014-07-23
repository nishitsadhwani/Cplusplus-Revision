#include <iostream>  
#include<time.h> 
using namespace std;  
int bday(int l ) 
{ 
    int k[5],j=0; 
    int i; 
    for(i=l;i>0;i/=100) 
    { 
           k[j]=i%100; 
           ++j; 
               
    } 
    cout<<"\n DD - MM - YY "; 
    cout<<"\n "<<k[1]<<" - "<<k[2]<<" - "<<k[0]; 
}  
int main()  
{  
    char ch='y'; 
int month,birth,year,ans,a,b,c,d,e,f,g,h,i,j,k,l; 
do 
{ 
cout<<string(30,'\n'); 
cout<< "\t\t\tWelcome to the Birthday_Magic CPP project!\t\t\t" ;   
cout<<" \n Do you wish to do the lengthy calculations : "; 
cout<<" \n 1.Yourself or "; 
cout<<" \n 2.Do you want me to do it for you ??"; 
cout<<" \n Enter your Choice(1/2)??"; 
cin>>ans; 
switch(ans) 
{ 
case 1 : 
cout<<" \n Make sure that you have your calculators in you hands "; 
cout<<" \n Step 1 - Add 18 to your birth month"; 
cout<<" \n Step 2 - Multiply by 25."; 
cout<<" \n Step 3 - Subtract 333 "; 
cout<<" \n Step 4 - Multiply by 8"; 
cout<<" \n Step 5 - Subtract 554"; 
cout<<" \n Step 6 - Divide by 2" ; 
cout<<" \n Step 7 - Add your birth date" ; 
cout<<" \n Step 8 - Multiply by 5"; 
cout<<" \n Step 9 - Add 692"; 
cout<<" \n Step 10- Multiply by 20 "; 
cout<<" \n Step 11- Add only the last two digits of your birth year "; 
cout<<" \n Step 12- Subtract 32940 to get your birthday!."; 
  
cout<<" \n If the answer is 123199 means that you were born on December 31, 1999."; 
cout<<" \n If the answer is not right, you followed the directions incorrectly or"; 
cout<<" \n lied about your birthday...;-)"; 
  break ; 
case 2 : 
cout<<" \n Enter your birth month : "; 
cin>>month;  
cout<<" \n Step 1 - Add 18 to your birth month"; 
a=month+18; 
cout<<"\n";  
 
cout<<month<<" + "<<18<<" = "<<a;  
cout<<" \n Step 2 - Multiply by 25."; 
b=a*25; 
cout<<"\n";  
cout<<a<<" * "<<25<<" = "<<b; 
 
cout<<" \n Step 3 - Subtract 333 "; 
c=b-333;cout<<"\n";  
cout<<b<<" - "<<333<<" = "<<c; 
cout<<" \n Step 4 - Multiply by 8"; 
d=c*8;cout<<"\n";  
cout<<c<<" * "<<8<<" = "<<d; 
cout<<" \n Step 5 - Subtract 554"; 
e=d-554;cout<<"\n";  
cout<<d<<" - "<<554<<" = "<<e; 
cout<<" \n Step 6 - Divide by 2" ; 
f=e/2;cout<<"\n";  
cout<<e<<" / "<<2<<" = "<<f; 
cout<<" \n Enter your birth date "; 
cin>>birth; 
cout<<" \n Step 7 - Add your birth date" ; 
g= birth + f; 
cout<<"\n";  
cout<<birth<<" + "<<f<<" = "<<g;  
cout<<" \n Step 8 - Multiply by 5"; 
h=g*5;cout<<"\n";  
cout<<g<<" * "<<5<<" = "<<h; 
cout<<" \n Step 9 - Add 692"; 
i=h+692; 
cout<<"\n"; 
cout<<h<<" + "<<692<<" = "<<i;  
cout<<" \n Step 10- Multiply by 20 "; 
j=i*20; 
cout<<"\n";  
cout<<i<<" * "<<20<<" = "<<j;  
cout<<" \n Enter last 2 digits of your birth year : "; 
cin>>year; 
cout<<" \n Step 11- Add only the last two digits of your birth year ";  
k=j+year;cout<<"\n";  
cout<<j<<" + "<<year<<" = "<<k; 
cout<<" \n Step 12- Subtract 32940 to get your birthday!.";  
l=k-32940; 
cout<<"\n"; 
cout<<k<<" - "<<32940<<" = "<<l; 
cout<< " \n Your birth date is : "; 
bday(l); 
break ; 
default :  
        cout<<"\n Invalid choice "; 
} 
cout<<"\n\n Do you wish to continue ??(y/n) "; 
cin>>ch; 
}while(ch=='y' || ch =='Y' ); 
 
return 0;  
}  
 
//Reference :  http://easycalculation.com/funny/tricks/trick6.php
 
