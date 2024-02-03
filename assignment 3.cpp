#include<iostream>
using namespace std;
int main()
int totalmarks=28;
int obtainedmarks=0;

string teacData[14]={"T","F","T","F","T","T","F","F","T","F","F","T"};
string studdata1[14]={"T","T","T","F","F","T","T","F","T","F","T","T"};
int i=0;
for(i=0,i<13,i++)
{
if(techdata[i]==studdata1[i])
obtainedmarks+=2;
else if((techdata[i]!=studdata1[i]))
 obtainedmarks-=1;
 else
 obtainedmarks+=0;


}

cout<<"obtained marks:"<<obtainedmarks;



