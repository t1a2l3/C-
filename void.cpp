#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void averga(int x1,int x2, int x3, double &x, double &y,double &z)
{
x=((x1+x2+x3)/3);
y=sqrt((pow(x1-x,2)+pow(x2-x,2)+pow(x3-x,2)+pow(x2-x,2)+pow(x3-x,2))/5);
z=sqrt(x+y+x1+x2+x3);


}


int main ()


{
int x1;
int x2;
int x3;
cout<<"enter the numbers:";
cin>>x1>>x2>>x3;


double a,b,c;

averga(3,5,9,a, b, c);

cout<<"average:"<< a <<","<<"standarddev:"<< b <<"," <<"squareroot:"<<c;
return 0;




}