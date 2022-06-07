#include<iostream>
#include<string>
 
using namespace std;

class person
{
    protected:
    float amt;
    public:
    int id;
    string name;
    person(){}
    person(int id ,string name,float amt):id(id),name(name),amt(amt){}
    void getperson()
    {

    }

}; 

class student:public person
{
    public:
    int sid;
    float marks;
    student(int id ,string name,float amt,int sid,float marks)
    : person(id,name,amt),sid(sid),marks(marks){}

};

class shop
{
    public:
    person p;
    string shopp;
    shop(person p, string shopp)
    {
        this->p=p;
        this->shopp=shopp;
    }
};
int main()
{
    person p(1,"mohit",24.5);
    shop s(p,"sweets");
     
     
    return 0;
 
}