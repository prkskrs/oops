#include<iostream>
#include<string>
 
using namespace std;

class Vehicle
{
    public:
    int vehicleno;
    Vehicle(int vehicleno):vehicleno(vehicleno){}

};

class Car: public Vehicle
{
    public:

    string car_type;
    Car(int vehicleno,string car_type):Vehicle(vehicleno),car_type(car_type){}


};


class Bike: public Vehicle
{
    protected:
    string bike_type;
    public:
    Bike(int vehicleno,string bike_type):Vehicle(vehicleno),bike_type(bike_type){}

};


class Person
{
    public:
    string name;
    int age;
    Car veh;
    Person(string name,int age,Car veh):name(name),age(age),veh(veh)
    {
         
    }
};

class Employee : public Person
{
    protected:
    int id;
    float salary;
    public:

    Employee(string name,int age,Car veh,int id,float salary):Person(name,age,veh),id(id),salary(salary){}

    void disp_emp()
    {
        cout<<name<<"\t"<<age<<"\t"<<id<<"\t"<<salary<<"\t"<<veh.vehicleno<<"\t"<<veh.car_type<<endl;
    }
}; 




int main()
{
    Car veh(6898,"sedan");
    Employee e1("Prakash",22,veh,123,2800.34);
    e1.disp_emp();
     
     
    return 0;
 
}