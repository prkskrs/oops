#include<iostream>
#include<string>
 
using namespace std;
class Employee
{
    public:
    string firstname;
    string lastname;
    string employe_type;
    float sal;
    static int total_employee;
    Employee(){}
    Employee(string firstname,string lastname,string employe_type):firstname(firstname),lastname(lastname),employe_type(employe_type){}
    virtual void Earnings()
    {}
    virtual void PrintEmployee()
    {
        cout<<"FirstName\t"<<"LastName\t"<<"EmployeeType"<<endl;
        cout<<firstname<<"\t"<<lastname<<"t"<<employe_type<<endl;
    }
    void totalEmployee()
    {
        cout<<"Total Emloyee Object Created :"<<total_employee<<endl;

    }
};

int Employee::total_employee=0;

class Student
{
    public:
    string u_name;
    string qual;

    Student(string u_name,string qual):u_name(u_name),qual(qual){}
};


class SalariedEmployee:public Employee,public Student
{
    public:
    float month_sal;
    SalariedEmployee(string firstname,string lastname,string employe_type,string u_name,string qual):Employee(firstname,lastname,employe_type),Student(u_name,qual){++total_employee;}
    void Earnings()
    {
        sal=30000;
        month_sal=sal;
    }
    void PrintEmployee()
    { 
        cout<<firstname<<"\t\t"<<lastname<<"\t\t"<<employe_type<<"\t"<<u_name<<"-"<<qual<<"\t\tRs."<<month_sal<<endl;
    }
    

};

class CommissionEmployee:public Employee,public Student
{
    public:
    float grossSales;
    float commissionRate;
    CommissionEmployee(string firstname,string lastname,string employe_type,string u_name,string qual,float grossSales,float commissionRate ):Employee(firstname,lastname,employe_type),Student(u_name,qual),grossSales(grossSales),commissionRate(commissionRate){++total_employee;}
    void Earnings()
    {
        sal=grossSales*(commissionRate/100);

    }
    void PrintEmployee()
    {   cout<<firstname<<"\t\t"<<lastname<<"\t\t"<<employe_type<<"\t"<<u_name<<"-"<<qual<<"\t\tRs."<<sal<<endl;
    }
};

class BasePlusCommissionEmployee:public Employee, public Student
{
    public:
    float baseSalary;
    float grossSales;
    float commissionRate;
    BasePlusCommissionEmployee(string firstname,string lastname,string employe_type,string u_name,string qual,float grossSales,float commissionRate):Employee(firstname,lastname,employe_type),Student(u_name,qual),grossSales(grossSales),commissionRate(commissionRate){++total_employee;}
    void Earnings()
    {
        baseSalary=40000;
        sal=baseSalary+grossSales*(commissionRate/100);

    }
    void PrintEmployee()
    {
        cout<<firstname<<"\t\t"<<lastname<<"\t\t"<<employe_type<<"\t"<<u_name<<"-"<<qual<<"\t\tRs."<<sal<<endl;
    }
};

void title()
    {

        cout<<"FirstName\t"<<"LastName\t"<<"EmployeeType\t\t"<<"University-Quali\t"<<"Earnings"<<endl;
     
    }

int main()
{
    title();
    Employee *e;
    SalariedEmployee s("Prakash","Singh","Salaried Employee","KLE","Btech");
    e=&s;e->Earnings();e->PrintEmployee();
    CommissionEmployee c("Anusha","Patil","Commission Employee","BVB","Mtech",80000,62);
    e=&c;e->Earnings();e->PrintEmployee();
    BasePlusCommissionEmployee b("Abhinav","Patil","BPlusComm Employeee","MITP","Phd",90000,83);
    e=&b;e->Earnings();e->PrintEmployee();
    CommissionEmployee n("Neha","Sindagi","Commission Employee","DYPatil","Btech",50830,83);
    e=&n;e->Earnings();e->PrintEmployee();
    SalariedEmployee a("Anand","Patil","Salaried Employee","RIMS","Mtech");
    e=&a;e->Earnings();e->PrintEmployee();
    
    e->totalEmployee();


}