#include<iostream>
#include<fstream>
using namespace std;

void getnumber(ifstream input , ofstream output ,int num,double &sum, double &average, double &counter);
void printout(ifstream input1,ofstream output2,int &even,int &odd,int &zeros,int number);
int main()
{


ifstream infile ();
ofstream offile ();

infile.open("group.txt");
offile.open("group1.txt");

int even,odd,zero;
double sum, average,counter;
int num;
even=0;
odd=0;
sum=0;
counter=0;
while (!infile.eof())
{
  getnumber(infile,offile,sum,counter,average,num);
  printout(even,odd,zero,infile,offile, number);
}




offile <<endl;
offile <<"even numbers:"<<even;
offile <<"odd numbers:"<<odd;
offile <<"sum:"<<sum;
offile <<"average:"<<average;
infile.close();
offile.close();

}
void getnumber(ifstream input , ofstream output ,int num, double &sum, double &average, double &counter)
{

input >> num;
output<< num;

counter++;
sum=sum+num;
average=sum/counter;
}
void printout(ifstream input1,ofstream output2,int &even,int &odd,int &zero,int number)

{
    
    
        input1>>number;
        if (number %2==0)
        {
            even++;
        }
        if (number%3==0)
        {
            odd++;
        }
        if (number==0)
        {
            zero++;
        }
        
       
}













