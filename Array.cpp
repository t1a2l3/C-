#include<iostream>
using namespace std;
int main()
{

int smallest,index,x;
cin>>x;
int array1[x];
cout<<"enter the integers:"<<endl;
for (int i = 0; i < x; i++)
{
    cin>>array1[i];

}

smallest=array1[0];

for (int i = 0; i < x; i++)
{
    if (array1[i]<smallest)
    {
        smallest=array1[i];
        index=i;

    }
  



}

 cout<<"The smallest value of array:"<<smallest<<endl;
 cout<<"the index of the smallest value:"<<index;
return 0;



}