#include<iostream>
using namespace std;
int main()
{
string name;
cout<<"Enter the Name of the Person: ";
cin>>name;

float weightloss;
cout<<"Enter the target weight loss in kilograms: ";
cin>>weightloss;

float days;
days=weightloss*15;

cout<<name<<" will need "<<days<<" days to lose "<< weightloss<<" kg of weight by following the doctor's suggestions";
return 0;
}