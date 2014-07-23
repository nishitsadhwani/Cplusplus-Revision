#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
    int i,j,n=0,c=1;  
cout << "Enter an odd number: "; 
cin >> n; 
cout<<"Diamond is :\n"; 
    for(i=1;i<=n;i+=2)
    {
                      cout<<"\t\t";
                      for(j=1;j<c+1;j++)
                      
                      {
                                        cout<<"\b";
                      }
                      for(j=1;j<=i;j++)
                      {
                                       cout<<"*";
                      }
                      cout<<"\n";
                      ++c;
                      
}
c=n/2;
for(i=n-2;i>=1;i-=2)
{
                    cout<<"\t\t";
                    for(j=c;j>=1;j--)
                    {
                                     cout<<"\b";
                                     }
                    for(j=i;j>=1;j--)
                    {
                                       cout<<"*";
                    }
                      cout<<"\n";
                    --c;
}
getch();
return 0;
}
                                       
