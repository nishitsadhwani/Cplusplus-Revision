#include <iostream> 
#include <string> 
#include<math.h>
#include<iomanip.h>
#include<conio.h> 
using namespace std; 
 
int main(int argc, char* argv[]) 
{ 
   float temp, wind_chill,wind_speed; 
   cout<<"Enter temperature and wind speed:\n"; 
   cin>>temp; 
   cin>>wind_speed;  
 wind_chill = 35.74 + (0.6215*temp) + (0.4275*temp - 35.75) * pow(wind_speed,0.16);
  
   cout<<"Wind chill is:\n"; 
        cout<<setiosflags(ios::fixed)<<setprecision(14)<<wind_chill;
        getch();
        return 0;
        }
 
