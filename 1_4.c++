#include<iostream>
#include<string>
 
using namespace std;

class Library
{
    public:
    string collegename;
    string librarian;
    Book books;
    Library(string collegename,string librarian)
    {
        this->collegename=collegename;
        this->librarian=librarian;
    }
};


class Book
{
    public:
    string title;
    string publisher;
    Student issuedto;
    Book(string title,string publisher)
    {
        this->title=title;
        this->publisher=publisher;

    }


};


class Student
{
    public:
    string name;
    string srn;
    long mobileNum;
    Student(string name,string srn,long mobileNum)
    {
        this->name=name;
        this->srn=srn;
        this->mobileNum=mobileNum;
    }

};


int main()
{
     
     
    return 0;
 
}