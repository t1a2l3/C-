#include<iostream>
using namespace std;
int main()
{
int  num, zeros, odds, evens;
zeros=0;
evens=0;
odds=0;

for (int i = 0; i < 20; i++)
{
cin>>num;
if (num %2==0)  
{
    evens++;

}

 if (num %3==0)
{
    odds++;
}
if (num==0)
{
    zeros++;

}

    


}

cout<<"Enter even numbers:"<<evens<<endl;
cout<<"Enter odd numbers:"<<odds<<endl;
cout<<"Enter zeros:"<<zeros;

}






















































































































































































































































































































































































































































































































































































































































































































