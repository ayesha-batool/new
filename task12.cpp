#include<iostream>
using namespace std;
int main()
{
int squaremeters;
cout<<"Number of square meters you can paint: ";
cin>>squaremeters;

int width;
cout<<"Width of the single wall (in meters): ";
cin>>width;

int height;
cout<<"Height of the single wall (in meters): ";
cin>>height;



int no_of_walls;
no_of_walls=squaremeters/(width*height);
cout<<"Number of walls you can paint: "<<no_of_walls;

return 0;
}