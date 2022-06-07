#include<iostream>
#include<string>
 
using namespace std;

class Student
{
    public: 
    string name;
    string usn;

    Student(string cname,string cusn)
    {
        name=cname;
        usn=cusn;
    }

    void StudentDetail()
    {
        cout<<name<<usn<<endl;
    }



};


class Course
{
    int isa1;
    int isa2;
    int esa;
};

class Date
{
    int dd;
    int mm;
    int yy;

    

    

};
 
int main()
{
    Student s("Prakash","1fe20bcs302");
    s.StudentDetail();

     
    return 0;
 
}