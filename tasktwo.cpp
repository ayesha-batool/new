#include<iostream>
using namespace std;
int main()
{
int min;
cout<<"Number of Minutes: ";
cin>>min;

int fps;
cout<<"Frames per Second: ";
cin>>fps;

int nof;
nof=min*fps*60;

cout<<"Total Number of Frames: "<<nof;
return 0;
}