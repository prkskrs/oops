//protected inheritance
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

class Student:protected Person  //protected inheritance
{
    public:
    void display()
    {
        cout<<"name = "<<name<<"; Protected-Inheritance"<<endl;

    }
    void setStudentName(string iname)
    {
        setName(iname);
    }
    
};

int main()
{
    Student prakash;
    //prakash.setName("Praksh");//we cannot access it this way now bcoz public part of Person get protected in Student class
    prakash.setStudentName("praksh");
    prakash.display();
     
     
    return 0;
 
}