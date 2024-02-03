#include<iostream>
#include<fstream>
using namespace std;

void findrange(int pArray[],int size);
void result(int r1,int r2,int r3,int r4,int r5,int r6,int r7,int r8);



int main()
{
ifstream file;
ofstream out;
file.open("h.txt");
int const size =26;
int pArray[size];

for(int i=0; i<size; i++)
{
file>>pArray[i];

}

file.close();
findrange(pArray, size);

return 0;

}


void findrange(int pArray[], int size)
{
ifstream file;
file.open("h.txt");
int r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0;
for (int i = 0; i < size; i++)
{  
   
    if (pArray[i]>=0 && pArray[i]<=24)
    {
       r1++;
      
    }
    else if (pArray[i]>24 && pArray[i]<=49)
    {
       r2++;
      
    }

    else if (pArray[i]>49 && pArray[i]<=74)
    {
       r3++;
      
    }

    else if (pArray[i]>74 && pArray[i]<=99)
    {
        r4++;
      
    }
    else if (pArray[i]>99 && pArray[i]<=124)
    {
       r5++;
      
    }

    else if (pArray[i]>124 && pArray[i]<=149)
    {
        r6++;
      
    }

    else if (pArray[i]>149 && pArray[i]<=174)
    {
        r7++;
      
    }
    else if (pArray[i]>174 && pArray[i]<=199)
    {
       r8++;
      
    }

}
result(r1,r2,r3,r4,r5,r6,r7,r8);
}
void result(int r1,int r2,int r3,int r4,int r5,int r6,int r7,int r8)
{

cout<<"range 1:"<<r1<<endl;
cout<<"range 2:"<<r2<<endl;
cout<<"range 3:"<<r3<<endl;
cout<<"range 4:"<<r4<<endl;
cout<<"range 5:"<<r5<<endl;
cout<<"range 6:"<<r6<<endl;
cout<<"range 7:"<<r7<<endl;
cout<<"range 8:"<<r8<<endl;

}









