#include<iostream>
using namespace std;
int main()
{
float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15;

cout<<"Number 1: ";
cin>>n1;
cout<<"Number 2: ";
cin>>n2;
cout<<"Number 3: ";
cin>>n3;
cout<<"Number 4: ";
cin>>n4;
cout<<"Number 5: ";
cin>>n5;
cout<<"Number 6: ";
cin>>n6;
cout<<"Number 7: ";
cin>>n7;
cout<<"Number 8: ";
cin>>n8;
cout<<"Number 9: ";
cin>>n9;
cout<<"Number 10: ";
cin>>n10;
cout<<"Number 11: ";
cin>>n11;
cout<<"Number 12: ";
cin>>n12;
cout<<"Number 13: ";
cin>>n13;
cout<<"Number 14: ";
cin>>n14;
cout<<"Number 15: ";
cin>>n15;

float result1;
result1=n1+n2+n3+n4+n5;

float result2;
result2=n6*n7*n8*n9*n10;

float result3;
result3=n11-n12-n13-n14-n15;

float resultfinal1;
resultfinal1=result1+result2;

float resultfinal;
resultfinal=resultfinal1-result3;

cout<<"The final result is: "<<resultfinal;



return 0;
}