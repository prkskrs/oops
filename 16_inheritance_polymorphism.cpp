// inheritance allow us to define one class in terms of another class.
// in other words inheritance allows us to use features defined in one class into another class. 
// here we create a class instead of writing completely new data members and member function 
// we inherit memmbers and member function from another class.
#include<iostream>
#include<string>
 
using namespace std;

class Person   //base class -> class from where we are inhereting or his features are inherited in another class
{
    public:
    string name;
    int age;
    
    void setName(string iname)
    {
        name=iname;
    }

    void setAge(int iage)
    {
        age=iage;
    }

    
};
//inherting Student to Person
class Student: public Person //sub-class-> class which inherits from base class or which inherits the features of another class
{
    public:
    int id;
    void setId(int iId)
    {
        id=iId;
    }
    void introduce()
    {
        cout<<"hi I'm "<<name<<" and i am"<<age<<" years old"<<endl<<"and my student id is "<<id<<endl;
    }

};



 
int main()
{
    Student prakash;
    prakash.setAge(22);
    prakash.setName("Prakaash");
    prakash.setId(1323);
    prakash.introduce();
     
     
    return 0;
 
}