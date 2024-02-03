#include <iostream>
#include <fstream>
#include <iomanip>
#include<string>
using namespace std;

void input(ifstream &, string& id, char[], int,char[]);         
int calculateScore(char[],int,char[]);
double percentage(char[],int,char[]);
char gradeCalculator(char[],int,char[]);
void processStudentData(ifstream&, string& id, char[], int,char[]);

int main()
{
    ifstream file;
    file.open("results.txt");                                  

    string id;
    char dataArray[20];int y = 20; 
    char ansArray[20];
    for (int i = 0; i < y; i++)
    {
        file>>ansArray[i];
    }

    processStudentData(file,id,dataArray,y,ansArray);       
    
    return 0;
}
void input(ifstream &file, string& id, char dataArray[], int y,char ansArray[])           
{
    file >> id;                
    file.ignore(1,'\n');
    for (int i = 0; i < y; i++)
    {
        file.get(dataArray[i]);
    }
    file.ignore(1,'\n');
}
int calculateScore(char dataArray[],int y,char ansArray[])
{                                                         
    int score=0;
    for (int i = 0; i < y; i++)
    {
        if (dataArray[i] == ' ')
            score+=0;
        else if (dataArray[i] == ansArray[i])
            score+=2;
        else if (dataArray[i] != ansArray[i])
            score-=1;
    }
    return score;
}
double percentage(char dataArray[],int y,char ansArray[])                     
{
    int score = calculateScore(dataArray,y,ansArray);
    double percent = (score/40.0)*100;
    return percent;
}
char gradeCalculator(char dataArray[],int y,char ansArray[])             
{
    char grade;
    double x = percentage(dataArray,y,ansArray);
    if (x >=0 && x <= 59.99)
        grade = 'F'; 
    else if (x >=60 && x <= 69.99)
        grade = 'D'; 
    else if (x >=70 && x <= 79.99)
        grade = 'C'; 
    else if (x >=80 && x <= 89.99)
        grade = 'B'; 
    else if (x >=90 && x <= 100)
        grade = 'A';
    else
        grade = 'F';
    return grade;
}
void processStudentData(ifstream &file, string& id, char dataArray[], int y,char ansArray[])
{
    while (!file.eof())                                   
    {
        input(file,id,dataArray,y,ansArray);
        cout<<"Student ID: "<<id<<" "<<"Score: "
            <<setw(3)<<calculateScore(dataArray,y,ansArray)<<" "<<"Grade: "
            <<gradeCalculator(dataArray,y,ansArray);
        cout<<endl;
    }
}