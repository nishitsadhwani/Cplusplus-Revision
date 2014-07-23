#include <iostream> 
#include<conio.h>
using namespace std; 
int main() 
{ 
   char str[20],d=' ',r[20]="",temp=' '; 
   cout<<"Enter String:\n"; 
    cin.getline(str,40);
    
   cout<<"Enter Character which you want to delete:\n"; 
   cin>>d; 
   //write your logic here 
 
 for(int i=0;str[i]!='\0';i++) 
        { 
                if( str[i]== d ) 
         {
                r[i]='+';
        } 
else
r[i]=str[i];
 }
 cout<<r;
 int j=0;
 
{   
                if( r[j]=='+' ) 
{                
temp=r[j];
r[j]=r[j+1];
r[j+1]=temp;
}                
 j++;         
 } 
 
 
  //end  
   cout<<"Result String is:\n";    
   cout<<r;  
    
getch();   
return 0; 
} 
