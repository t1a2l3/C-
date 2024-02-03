#include<iostream>
using namespace std;
int main()
{


int A[10][10];
int B[10][10];
int M[10][10];
int R1,R2,C1,C2;
cout<<"enter the rows: ";
cin>>R1;
cout<<"enter the columns: ";
cin>>C1;
cout<<"enter the rows: ";
cin>>R2;
cout<<"enter the columns: ";
cin>>C2;

for(int i=0;i<R1;i++)
{
for(int j=0;j<C1;j++)
{
    cin>>A[i][j];
}
}
for(int i=0;i<R1;i++)
{
for(int j=0;j<C1;j++)
{
    cout<<A[i][j]<<" ";

}
cout<<endl;
}
cout<<endl;
for(int i=0;i<R2;i++)
{
for(int j=0;j<C2;j++)
{
    cin>>B[i][j];
}

}
cout<<endl;


for(int i=0;i<R2;i++)
{
for(int j=0;j<C2;j++)
{
    cout<<B[i][j]<<" ";
}
cout<<endl;
}
for(int i=0;i<R1;i++)
{
for(int j=0;j<C2;j++)
{

M[i][j]=0;

}


}
cout<<endl;
for(int i=0;i<R1;i++)
{
for(int j=0;j<C2;j++)
{
for(int k=0;k<C1;k++)
{
 M[i][j]+=(A[i][j]*B[i][j]);
 


}

}
}
for(int i=0;i<R1;i++)
{
for(int j=0;j<C2;j++)
{

 cout<<M[i][j]<<" ";


}
cout<<endl;

}



return 0;


}


