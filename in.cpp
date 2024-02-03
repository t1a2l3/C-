#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    ifstream file;
    ofstream out;
    file.open("ans.txt");
    const int size=20;
    char studArra[100];
    char teacArray[size];
   
    int totalmarks=40;
    int obtainedmarks;
    int percentage;
    char grade;
    int i=0;
    for(i=0;i<size;i++)
{ 
    file>>teacArray[i];
    cout<<teacArray[i]<<" ";
} 
   cout<<endl;
   for(i=0;i<5;i++)
{
   obtainedmarks=0;
    
   for( i=0;i<size;i++)
   {
    file>>studArra[i];
    char temp_hold=temp_hold;
    cout<<temp_hold<<" ";
    if(temp_hold==teacArray[i])
    obtainedmarks+=2;

    else if(temp_hold!=teacArray[i])
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
file.close();
return 0;

}

