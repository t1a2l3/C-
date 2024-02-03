#include<iostream>
#include<fstream>
#include<cstring>
void calculate(char studArra[29],char teacArray[30],int size);
using namespace std;
int main()
{
    ifstream file;
    ofstream out;
    file.open("ans.txt");
    int const size=29;
    char studArra[size]={'T','T','T','F','T','F','T','T','T','F','T','T','F','F','T','T','T','T','T','T','T','T','F','T','F','T','F','T'};
    char teacArray[30];
    calculate(studArra,teacArray,size);
    file.close();
    return 0;
}
   void calculate(char studArra[29],char teacArray[30],int size)
   {

   
    ifstream file;
    file.open("ans.txt");
    int totalmarks=28;
    int obtainedmarks=0;
    int percentage;
    char grade; 

for(int i=0;i<size;i++)
{
    file>>teacArray[i];
    cout<<teacArray[i]<<endl;
    if(teacArray[i]==studArra[i])
    obtainedmarks+=2;
    else if(teacArray[i]!=studArra[i])
    obtainedmarks-=1;
    else
    obtainedmarks+=0;
  

}
percentage=((obtainedmarks*100) / totalmarks);

if(percentage>=90)
grade='A';
else if(percentage>=80)
grade='B';
else if(percentage>=70)
grade='C';
else if(percentage>=60)
grade='D';
else if(percentage>=50)
grade='E';
else
grade='F';




cout<<"Total Marks:"<<percentage<<",""grade:"<<grade;

   }


