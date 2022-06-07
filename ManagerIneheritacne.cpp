#include<iostream>
#include<string>
 
using namespace std;

class Employee
{
    protected:
    string name;
    float salary;
    float percentagehike;
    public:

    Employee(string name,float salary,float percentagehike):name(name),salary(salary),percentagehike(percentagehike){}

};

class Manager :public Employee
{
    protected:
    int no_of_stocks;
    public:

    Manager(string name,float salary,float percentagehike,int no_of_stocks):Employee(name,salary,percentagehike),no_of_stocks(no_of_stocks)
    {
        HikeManager(percentagehike);
    }

    void HikeManager(float percentagehike)
    {
        if (percentagehike<=20)
        {
            salary= salary + (percentagehike/100*salary)+(no_of_stocks*10);
        }
        else
        {
            cout<<"Your percentage is above 20%\n"<<endl;
        }

    }
    void displayManagers()
    {
        cout<<name<<"\t"<<salary<<"\t"<<no_of_stocks<<"\t"<<endl;
    }


};

class NormalEmployee :public Employee
{
    public:
    NormalEmployee(string name,float salary,float percentagehike):Employee(name,salary,percentagehike){
        HikeNormal(percentagehike);
    }
    
    void displayNormalEmployee()
    {
        cout<<name<<"\t"<<salary<<"\t"<<endl;
    }

    void HikeNormal(float percentagehike)
    {
        if(percentagehike<=20)
        {
            salary= salary + (percentagehike/100*salary);
        }
        else
        {
            cout<<"Your percentage is above 20%\n"<<endl;
        }

    }

};

 
int main()
{
    NormalEmployee n1[3]={{"prakash",20000,12},{"prakash",20000,13},{"prakash",20000,14}};
    for (int i = 0; i < 3; i++)
    {
       // n1[i].HikeNormal(12);
        n1[i].displayNormalEmployee();
    }
    Manager m1[3]={{"anusha",20000,12,50},{"anusha",20000,13,55},{"anusha",20000,14,58}};
    for (int i = 0; i < 3; i++)
    {
       // n1[i].HikeNormal(12);
        m1[i].displayManagers();
    }
    
     
     
    return 0;
 
}