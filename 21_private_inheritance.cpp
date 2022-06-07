//private inheritance
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


class Student:private Person  //private inheritance --> class Person member like 'name' and 'setName' become private to Student class cannot be accesible in any other class now
{
    public:
    void display()
    {
        cout<<"name = "<<name<<"; Private-Inheritance"<<endl;

    }
    void setStudentName(string iname)
    {
        setName(iname);  //public part of "Person" become private in "Student" so access this way
    }

    
};

class GradStudent: public Student
{
    public:
    void setGradStudent(string iname)
    {
        setStudentName(iname);  //public part of "Student" become public in "GradStudent" but cannot take name directly bcoz that is private for "Student" so use this way
    }
    
};

int main()
{
    GradStudent prakash;
    prakash.setGradStudent("praksh");
    prakash.display();
     
     
    return 0;
 
}