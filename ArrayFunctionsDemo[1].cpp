#include <iostream>
using namespace std;
void inputArray(int pArray[], int x);
void printArray(int pArray[], int x);
int findMinIndex(int pArray[], int x);

int main()
{
    int x;
    cout << "Enter the size of String. " << endl;
    cin >> x;
    int Array[x];

    inputArray(Array, x);

    printArray(Array, x);

    int idx = findMinIndex(Array, x);

    cout << "Index = " << idx<<endl;
}


void InputArray(int pArr[], int x)
{
    for (int i = 0 ; i < x ; i++)
    {
        cin >> pArr[i] ;
    }
}

void printArray(int pArray[], int x)
{
    for (int i = 0 ; i < x ; i++)
    {
        cout << pArray[i] << " " ;
    }
}
int findMinIndex(int pArray[], int x)
{
    int index;
    int Smaller  = pArray[0];

    for (int i = 0 ; i < x ; i++)
    {
        if(pArray[i] < Smaller )
        {
            Smaller = pArray[i];
            index = i;
        }
    }

    return index;
}
