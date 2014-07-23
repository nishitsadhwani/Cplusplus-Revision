#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int h,b,i,j;
    cin>>h>>b;
    for(i=1;i<=h;i++)
    {
                     if(i==1 || i==h )
                     {
                          for(j=1;j<=b;j++)
                          {
                                           cout<<"*";
                          }
                     
                     cout<<"\n";
                     }
                     
                     else
                     {
                         for(j=1;j<=b;j++)
                         {
                                          if(j==1 || j==b )
                                          {
                                                  cout<<"*";
                                                  
                                          }
                                          else
                                          {
                                              cout<<" ";
                                          }
                         }cout<<"\n\n";
                     }
}
getch();
return 0;
}
