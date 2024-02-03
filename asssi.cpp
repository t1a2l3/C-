#include<iostream>
using namespace std;
void copygamma(int gamma[4], int instock[10][4], int i, int j);

int main ()
{
int alpha[4]={1,2,3,4};
int beta[4]={1,2,3,4};
    int i,j;
    int instock[10][4];
    int gamma[4];
    
    copygamma( gamma, instock,  i,  j);
}


void copygamma(int gamma[4], int instock[10][4], int i, int j)
{
    cout << " enter instock : ";
for(int i=0;i<4;i++)
{ 

cin>>instock[0][i];

gamma[i]=instock[0][i];
}
for(int i=0;i<4;i++)
{
cout<<gamma[i]<<",";
} 
cout << endl;
for(int i=1;i<10;i++)
{
cout<<i+1<<" row of instock ";
for(int j=0;j<4;j++)
{ 
    instock[i][j]=3*instock[i-1][j];
cout<<instock[i][j]<<",";

}
cout << endl;
}
} 