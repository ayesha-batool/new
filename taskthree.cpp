#include<iostream>
using namespace std;
int main()
{
int initialvelocity;
cout<<"Enter Initial Velocity (m/s): ";
cin>>initialvelocity;

int acceleration;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acceleration;

int time;
cout<<"Enter Time (s): ";
cin>>time;

int finalvelocity;
finalvelocity=(acceleration*time)+(initialvelocity);

cout<<"Final Velocity (m/s): "<<finalvelocity<<endl;
return 0;
}