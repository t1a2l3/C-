#include<iostream>
using namespace std;
int main()
{

int arr[10][10];
int arr1[10][10];
int r1,r2,c1,c2;
cout<<"enter the rows: ";
cin>>r1;
cout<<"enter the columns: ";
cin>>c1;
cout<<"enter the rows: ";
cin>>r2;
cout<<"enter the columns: ";
cin>>c2;
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
cin>>arr[i][j];
}

}
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<endl;
}
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
{
cin>>arr1[i][j];
}

}
for(int i=0;i<r2;i++)
{
for(int j=0;j<c2;j++)
{
cout<<arr1[i][j]<<" ";
}
cout<<endl;
}
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
cout<<(arr[i][j]-arr1[i][j])<<" ";
}
cout<<endl;
}



return 0;






}