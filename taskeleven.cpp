#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"Enter the person's age: ";
cin>>age;

int times;
cout<<"Enter the number of times they've moved: ";
cin>>times;

int years;
years=(age/(times+1));
cout<<"Average number of years lived in the same house: "<<years;

return 0;
}