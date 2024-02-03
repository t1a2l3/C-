#include<iostream>
using namespace std;
int main()
{
int matrix[2][3];
int temp[5];
int m=temp[0];
int k=0;
for(int i=0;i<2;i++)
{
 for(int j=0;j<2;j++)
 {
   cin>>matrix[i][j];

 }


}
  for(int i=0;i<2;i++)
{
 for(int j=0;j<2;j++)
 {
  
   temp[k]=matrix[i][j];
   k++;

 }


}

for(int i=0;i<=k;i++)
{
if(m<temp[i])
{

m=temp[i];

}


}

cout<<m;
return 0;

}