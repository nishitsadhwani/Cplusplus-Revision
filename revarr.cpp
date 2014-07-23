#include <iostream> 
#include<conio.h>
using namespace std; 
int main() 
{ 
         int arr[10]; 
          
         for(int i =0;i<10;i++) 
         { 
          cout<<"Enter the array elements["<<i<<"]:\n"; 
          cin>>arr[i]; 
         }  
          //write your logic here 
         
 for(int i=9;i>=0;i--) 
         { 
          cout<<arr[i]<<" "; 
         }   
 
 
 
 
          //end  
getch();       
return 0; 
} 
 
