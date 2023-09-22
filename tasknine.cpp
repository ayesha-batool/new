#include<iostream>
using namespace std;
int main()
{
int no_of4;
cout<<"Enter a 4-digit number: ";
cin>>no_of4;

int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
n1=no_of4%10;
n2=no_of4-n1;
n3=n2/10;
n4=n3%10;
n5=n3-n4;
n6=n5/10;
n7=n6%10;
n8=n6-n7;
n9=n8/10;
n10=n9%10;
n11=n9-n10;
n12=n11/10;



cout<<"Sum of the individual digits: "<<n1+n4+n7+n10;

return 0;
}