#include<iostream>
using namespace std;
int main()
{
int sofb;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>sofb;

int cob;
cout<<"Enter the cost of the bag: $";
cin>>cob;

int aisf;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>aisf;

int cofpp;
cofpp=cob/sofb;
cout<<"Cost of fertilizer per pound: $"<<cofpp<<endl;

int cofpsf;
cofpsf=cob/aisf;

cout<<"Cost of fertilizing per square foot: $"<<cofpsf;


return 0;
}