// A Initialised
// B Initialised
// C Initialised


#include<iostream>
#include<string>
 
using namespace std;

class A
{
    protected:
    int a;
    public:
    A(int a)
    {
        this->a=a;
        cout<<"A Initialised"<<endl;
    }
};

class B : public A
{
    protected:
    int b;
    public:
    B(int a,int b):A(a)
    {
        this->b=b;
        cout<<"B Initialised"<<endl;
    }

    // void b_display()
    // {
    //     cout<<"value of b : "<<b<<endl;
    // }

};
class C : public B
{
    protected:
    int c;
    public:
    C(int a,int b,int c):B(a,b)
    {
        this->c=c;
        cout<<"C Initialised"<<endl;
    }

    void display()
    {
        cout<<"value of a : "<<a<<endl;
        cout<<"value of b : "<<b<<endl;
        cout<<"value of c : "<<c<<endl;
    }
};

 
int main()
{
    C num(20,30,40);
    num.display();
    
    return 0;
 
}