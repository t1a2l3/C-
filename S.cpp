#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     ifstream file;
     ofstream out;
     file.open("S.txt");                         
     int const size=6;
     int arr[size];
     int arr1[size];

    
     for(int i=0;i<size;i++)
        {

        
        file>>arr[i];
        cout<<arr[i]<<",";



        }
      
    
       cout<<endl;
    
    
        for(int i=0;i<size;i++)
        {

        
        file>>arr1[i];
        cout<<arr1[i]<<",";




        }


      cout<<endl;
    
        for(int i=0;i<size;i++)
        {

       
       cout<<arr[i]+arr1[i]<<",";



        }
        

    

     file.close();
      return 0;






}