#include<iostream>
using namespace std;
int main()
{
int x;
cout<<"enter the value of x:";
cin>>x;
int a[x];
for(int i=0;i<x;i++)
{
cin>>a[i];

}

for(int i=0;i<x;i++)
{

for(int j=i+1;j<x;j++)
{

if(a[i]>a[j])
{
int temp_hold=a[i];
a[i]=a[j];
a[j]=temp_hold;

}

}
cout<<endl;
}

for(int i=0;i<x;i++)
{
cout<<a[i]<<" ";
}

}