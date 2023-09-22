#include<iostream>
using namespace std;
int main()
{
int ic;
cout<<"Enter Imposter Count: ";
cin>>ic;

float pc;
cout<<"Enter Player Count: ";
cin>>pc;

int coimposter;
coimposter=100*(ic/pc);

cout<<"Chance of being an imposter: "<<coimposter<<"%";
return 0;
}