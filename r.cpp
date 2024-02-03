#include<iostream>
using namespace std;
int main()  {
    int i;
    bool gender;
    string name;
    int age;
    const int num_students = 3;

    for(i=0;i<num_students;i++)    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter gender:";
        cin>>gender;
        do {
            cout<<"Enter age:";
            cin>>age;
        } while(age<=0); 
        
         if(gender==true)
            cout<<"Mr. " << name << ", you are " << age << " years old";
         else
            cout<<"Ms. " << name << ", you are " << age << " years old";
    }
    return 0;
}
