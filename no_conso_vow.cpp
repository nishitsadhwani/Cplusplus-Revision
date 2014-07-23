#include <iostream> 
#include<conio.h>
using namespace std;  
 
int main() 
{ 
	 
char line[80];  
int number_of_vowels,uc,lc,uv,lv,r; 
uc=lc=uv=lv=0; 
cout << "Enter your sentence :"<< endl; 
cin.getline(line,80); 
//write your logic here  
for(int i=0;line[i]!='\0';i++)
{
 
 r=line[i];
if((r== 65)||(r== 69)||(r== 73)||(r== 79)||(r== 85)) 
{
++uv;
++uc;
}
else
{
if((r== 97)||(r==101)||(r==105)||(r==111)||(r==117))
{ 
 ++lv;
 ++lc;
}
else
{
if(r>=66 && r<=90 )
{
++uc;
}
else
{
if(r>=98 && r<=122 )
{++lc;}
} 
 }}
} 
  
 
 
//end  
//Printing the output. 
cout << "Uppercase Consonants = "<< uc << "." << endl; 
cout << "Lowercase Consonants = "<< lc << "." << endl; 
cout << "Uppercase Vowels = "<< uv << "." << endl; 
cout << "Lowercase Vowels = "<< lv << "." << endl; 
number_of_vowels=uv+lv; 
cout << "Number of vowels = "<< number_of_vowels << endl; 
 getch();
return 0; 
}  
