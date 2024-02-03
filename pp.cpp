#include<iostream>
#include<cmath>
using namespace std;
void radius(int x1,int x2,int y1,int y2,double& x,double& c, double &a,double z)
{
    x=sqrt(pow(x2-x1,2))+(pow(y2-y1,2));
    c=2*z*x;
    a= z*pow(x,2);
}


int main()
{
int x1;
int x2;
int y1;
int y2;
double z;
cout<<"enter the numbers:";
cin>>x1>>x2>>y1>>y2>>z;
double x,c,a;
radius(x1,x2,y1,y2,x,c,a,z);

cout<<"radius:"<<x<<"circumference:"<<c<<"area:"<<a;

return 0;








}