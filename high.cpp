#include <iostream> 
#include <string> 
 #include<conio.h>
using namespace std; 
 
int main(int argc, char* argv[]) 
{ 
   int a[3]; 
    
   cout<<"Enter three numbers:\n"; 
   cin>>a[1];  
   cin>>a[2];
   cin>>a[3];
                 if(a[1]>a[3] && a[1]>a[2])
         {
                
                if(a[2]<a[3])
                cout<<a[2]<<" "<<a[3]<<" "<<a[1]; 
                else
                cout<<a[3]<<" "<<a[2]<<" "<<a[1];
 
        }
        else 
        {
                if(a[2]>a[3] && a[2]>a[1])
                {
                       
                         
                if(a[1]<a[3])
                cout<<a[1]<<" "<<a[3]<<" "<<a[2]; 
                else
                cout<<a[3]<<" "<<a[1]<<" "<<a[2]; 
                }
                else
                {
                       
                        
                if(a[2]>a[1])
                cout<<a[1]<<" "<<a[2]<<" "<<a[3]; 
                else
                cout<<a[2]<<" "<<a[1]<<" "<<a[3]; 
                } 
     }
    
 getch();        
  return 0;
} 
 
 
