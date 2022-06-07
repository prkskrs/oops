//protected access modifier is similar to private but with additional benfits 
//that those member are also accessible in sub classes or which inherits this class.
#include<iostream>
#include<string>
 
using namespace std;
class Person
{
    protected:
    string name;
    // private:   ---> it will not work for private so that we use protected access modifier bcoz it provide access to sub-classes.
    // string name;
    public:
    void setName(string iname)
    {
        name=iname;
    }
    void introduce()
    {
        cout<<"name from display function (base-class)"<<name<<endl;

    }
};

class Student:public Person
{
    public:
    void display()
    {
        cout<<"name from display function (sub-class) "<<name<<endl;

    }
    
};

int main()
{
    Student prakash;
    prakash.setName("Praksh");
    prakash.introduce();
    prakash.display();
     
     
    return 0;
 
}