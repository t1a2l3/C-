#include<iostream>
#include<fstream>
using namespace std;
void getnumber(int &num,ifstream &infile);
void classify(int num, int &odd,int &zero,int &even);
void sum(int num, int &sum);
int average(int sum, int count);
void output(ofstream& outfile, int& sum, int& avg, int& even, int& odd, int& zero);
 
int main()
{
    ifstream infile;
    ofstream outfile;
    int num, even=0, odd=0,  zero=0,sum=0,count=0,avg;

    infile.open("data.txt");
    outfile.open("output.txt");
    while (!infile.eof())
    {
       getnumber(num, infile);
       outfile<<num<<endl;
       classify(num,odd,zero,even);
       sum+=num;
       count++;

    }
  avg = sum/count;

 outfile<<"number of even are "<<even<<endl;
  outfile <<"number of odds are "<<odd<<endl;
  outfile <<"number of zeros "<<zero<<endl;
  outfile<<"sum of numbers is " <<sum<<endl;
  outfile<<"the average of number "<<avg;
infile.close();
outfile.close();
return 0;

}

 int average(int sum, int count)
 {
    return sum/count;
 }
void sum(int num, int& sum)
{
    sum=sum+num;
}
void classify(int num, int& odd,int& zero,int& even)
{
    if (num%2==0)
    {
     even++;
    }
    if (num%2!=0)
    {
    odd++;
    }
    if(num==0 )
    zero++;
}
void getnumber(int  &num, ifstream  &infile)
{  

    infile>>num;


}
void output(ofstream& outfile, int& sum, int& avg, int& even, int& odd, int& zero){
    outfile<<"number of even are "<<even<<endl;
  outfile <<"number of odds are "<<odd<<endl;
  outfile <<"number of zeros "<<zero<<endl;
  outfile<<"sum of numbers is " <<sum<<endl;
  outfile<<"the average of number "<<avg;
}