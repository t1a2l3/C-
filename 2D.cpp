#include<iostream>
using namespace std;
int main()
{
    int ROWS,cols;
    cout<<"ENTER THE ROWS:";
    cin>>ROWS;
    cout<<"Enter the columns:";
    cin>>cols;
    int arr2[ROWS][cols];
    int arr3[ROWS][cols];
    int i,j;
    for(i=0;i<ROWS;i++)
    {
    for(j=0;j<cols;j++)
    {
        cout<<"i : "<<i<<"j: "<< j;
        cin>>arr2[i][j];
    }
    }

   for(i=0;i<ROWS;i++)
    {
    for(j=0;j<cols;j++)
    {
        
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
    }
   for(i=0;i<ROWS;i++)
    {
    for(j=0;j<cols;j++)
    {
        cout<<"i :"<< i<<"j:"<< j;
        cin>>arr3[i][j];
    }
    }

   for(i=0;i<ROWS;i++)
    {
    for(j=0;j<cols;j++)
    {
        
        cout<<arr3[i][j]<<" ";
    }
    cout<<endl;
    }

  for(i=0;i<ROWS;i++)
    {
    for(j=0;j<cols;j++)
    {
        
       cout<<(arr2[i][j]+arr3[i][j])<<" ";
    }
    cout<<endl;
    }



}