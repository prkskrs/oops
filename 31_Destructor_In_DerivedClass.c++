// Destructor occurs in reverse order of Constructor

#include<iostream>
#include<string>
 
using namespace std;
class A
{
    protected:
    int a;
    public:
    A(int a):a(a){ cout<<"A Initialized"<<endl;}

    ~A()
    {
        cout<<"Destructor in Derived Class A"<<endl;
    }
};

class B
{
    protected:
    int b,c;
    public:
    B(int b,int c):b(b),c(c){cout<<"B Initialized"<<endl;}
    ~B()
    {
        cout<<"Destructor in Derived Class B"<<endl;
    }

};

class C: public A,public B
{
    protected:
    int d,e;
    public:
    C(int a,int b,int c,int d,int e):A(a),B(b,c),d(d)
    {
        this->e=e;
        cout<<"C Initialized"<<endl;
    }

    ~C()
    {
        cout<<"Destructor in Derived Class C"<<endl;
    }

    void display()
    {
        cout<<"value of a : "<<a<<endl;
        cout<<"value of b : "<<b<<endl;
        cout<<"value of c : "<<c<<endl;
        cout<<"value of d : "<<d<<endl;
        cout<<"value of e : "<<e<<endl;
    }


};

int main()
{
    C num(1,2,3,4,5);
    num.display();
     
     
    return 0;
 
}