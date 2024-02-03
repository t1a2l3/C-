#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
void displaytech(char teacArray[],int size);
void RESPONSES(char studArra[100],char teacArray[],int percentage,char grade ,int size);
int main()
{
    ifstream file;
    ofstream out;
    file.open("ans.txt");
    int const size=20;
    char studArra[100];
    char teacArray[size];
    int percentage;
    char grade;
displaytech( teacArray, size);
  
RESPONSES(studArra,teacArray, percentage, grade ,size); 

   
    file.close();
   return 0;
}

// THIS LOOP WILL TAKE TEACHER'S KEY
void displaytech(char teacArray[],int size)
{   
    ifstream file;
    file.open("ans.txt");
  
    for (int i=0; i<size; i++)
{

        file >> teacArray[i];
        cout << teacArray[i] << " ";
}
cout << endl;
}
// NOW WE TAKE STUDENT'S RESPONSES AND MATCH WITH TEACHER'S KEYS
// 2 LOOPS 1 OUTER & OTHER INNER
// OUTER LOOP WILL MOVE THROUGH ROWS
void RESPONSES(char studArra[100],char teacArray[],int percentage,char grade ,int size)
{   
    
    
    ifstream file;
    file.open("ans.txt");
  
    int obtainedmarks;
    int totalmarks=40;
    for (int i = 0; i <5 ; i++)
{
    obtainedmarks=0;
// THIS INNER LOOP WILL TAKE EACH ALPHABET AND MATCH THEM
     for(int i=0;i<size;i++)
{
        file>>studArra[i];
    char temp_hold = studArra[i];
    cout << temp_hold << " ";    // TEMP_HOLD = TEMPRARY HOLD THE ANSWER.


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

cout<<"Total Marks:"<< percentage <<",""grade:"<<grade << endl;

}
}



