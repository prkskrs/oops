//public inheritance
#include<iostream>
#include<string>
 
using namespace std;
class Person
{
    protected:
    string name;
    public:
    void setName(string iname)
    {
        name=iname;
    }
};

class Student:public Person  //public inheritance
{
    public:
    void display()
    {
        cout<<"name = "<<name<<"; Public-Inheritance"<<endl;

    }
    
};

int main()
{
    Student prakash;
    prakash.setName("Praksh");
    prakash.display();
     
     
    return 0;
 
}