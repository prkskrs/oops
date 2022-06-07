// B Initialized
// A Initialized
// C Initialized
// value of a : 1
// value of b : 2
// value of c : 3
// value of d : 4
// value of e : 5

#include<iostream>
#include<string>
 
using namespace std;
class A
{
    protected:
    int a;
    public:
    A(int a):a(a){ cout<<"A Initialized"<<endl;}
    
    // also you can use
    // A(int i):a(i){}

};

class B
{
    protected:
    int b,c;
    public:
    B(int b,int c):b(b),c(c){cout<<"B Initialized"<<endl;}
};




//class C: public B,public virtual A
// A Initialized
// B Initialized
// C Initialized
class C: public B,public A
{
    protected:
    int d,e;
    public:
    C(int a,int b,int c,int d,int e):A(a),B(b,c),d(d)
    {
        this->e=e;
        cout<<"C Initialized"<<endl;
    }

    // C(int a,int b,int c,int d,int e):A(a),B(b,c),d(d*c)
    // {
    //     this->e=e;
    //     cout<<"C Initialized"<<endl;
    // }

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