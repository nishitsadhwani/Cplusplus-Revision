#include <iostream> 
#include <string> 
#include<conio.h> 
#include<stdlib.h>
using namespace std; 
 
int main(int argc, char* argv[]) 
{ 
   int num=0; 
   
   cout<<"Enter a number:\n"; 
   cin>>num;  
   cout<<"Collatz Sequence is:\n";  
   cout<<num;
                start :
                if(num==1) 
                {
                        exit(0);
                }
                else
                {
                        if(num%2==0)
                        {           num/=2;
                                 cout<<" "<<num;
                                goto start; 
                        }
                        else
                        {       num=(3*num)+1;
                                cout<<" "<<num;
                                                        goto start; 
                        }
                }
 getch();       
 return 0; 
} 
 
