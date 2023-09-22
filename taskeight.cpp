#include<iostream>
using namespace std;
int main()
{
float vegetableprice;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegetableprice;

float fruitprice;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruitprice;

float totalvegetablegrams;
cout<<"Enter total kilograms of vegetables: ";
cin>>totalvegetablegrams;

float totalfruitgrams;
cout<<"Enter total kilograms of fruits: ";
cin>>totalfruitgrams;

float totalearning;
totalearning=((vegetableprice*totalvegetablegrams)+(fruitprice*totalfruitgrams))/1.94;
cout<<"Total earnings in Rupees (Rps): "<<totalearning;

return 0;
}