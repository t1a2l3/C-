#include<iostream>
#include<fstream>
using namespace std;
void read()

int main()
{

int average;
ifstream file;
ofstream out;
file.open("p.txt");

int numofstud[10][10];
for(int i=0;i<3;i++)
{

for(int j=0;j<3;j++)
{
file>>numofstud[i][j];
cout<<numofstud[i][j]<<" ";


}
cout<<endl;

}


int grades;
int numofsubjects;
int numofstud;
int grades[20][20];


cout<<"enter the no of students: ";
cin>>numofstud;
cout<<"enter the number of subjects: ";
cin>>numofsubjects;
cout<<"enter the number of grades: ";
cin>>grades;
for(int i=0;i<5;i++)
{

for(int j=0;j<grades;j++)
{
cin>>grades[i][j];
cout<<grades<<" ";


}
cout<<endl;
}







}