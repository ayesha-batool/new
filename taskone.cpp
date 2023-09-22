#include<iostream>
using namespace std;
int main()
{
int polygon;
cout<<"Enter the number of sides of the polygon: ";
cin>>polygon;
int internalangles;
internalangles=(polygon-2)*180;

cout<<"The sum of internal angles of a "<<polygon<<"-sided polygon is: "<<internalangles<<" degrees";
return 0;
}