#include<iostream>
#include<string>
#include<stdio.h>
 
using namespace std;

class Car
{
    int id;
    string name;
    public:

    Car(int id=0,string name="nocar")
    {
        this->id=id;
        this->name=name;

    }




    void printcar()
    {
        cout<<id<<endl;
        cout<<name<<endl;
    }
};







class Person
{
    private: 
    int uid;
    string name;
    float totalincome;
    float tax;
    Car c;
    public:


    
    Person()
    {
        uid=0;
        name="noname";
        totalincome=0;
    }

    Person(int uid,string name,float totalincome, Car c)
    {
        this->uid=uid;
        this->name=name; 
        this->totalincome=totalincome;
        this->c=c;
        calcTax();
        c.printcar();
    }

    
    void printperson()
    {
        cout<<"Uid : "<<uid<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Total Income : "<<totalincome<<endl;
        cout<<"Tax : "<<tax<<endl;
    }
   void calcTax();

   
};



void Person ::  calcTax()
    { 
        tax=totalincome*0.5;

    }
 


int main()
{
    Car c(12,"BMW");
    Person P1(9,"Prakash",5666.30,c);
    P1.printperson();
     
     
    return 0;
 
}