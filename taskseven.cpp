#include<iostream>
using namespace std;
int main()
{
string name;
cout<<"Enter the movie name: ";
cin>>name;

int atp;
cout<<"Enter the adult ticket price: $";
cin>>atp;

int ctp;
cout<<"Enter the child ticket price: $";
cin>>ctp;

int nats;
cout<<"Enter the number of adult tickets sold: ";
cin>>nats;

int ncts;
cout<<"Enter the number of child tickets sold: ";
cin>>ncts;

int poabdtoc;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>poabdtoc;
cout<<""<<endl;

cout<<"Movie: "<<name<<endl;

int totalamount;
totalamount=(atp*nats)+(ctp*ncts);
cout<<"Total amount generated from ticket sales: $"<<totalamount<<endl;

int donation;
donation=totalamount/10;
cout<<"Donation to charity (10%): $"<<donation<<endl;

int remaining;
remaining=(totalamount)-donation;
cout<<"Remaining amount after donation: $"<<remaining;

return 0;
}