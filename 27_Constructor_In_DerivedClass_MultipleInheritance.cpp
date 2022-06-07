// A initialized
// B initialized
// C initialized
// a : 10 b : 20
// c : 30 d : 40
// e : 50 f : 60
// total (a+b+c+d+e+f): 368291877
// e : 50 f : 60
// total (a+b+c+d+e+f): 210
//check line 70

#include<iostream>
#include<string>
 
using namespace std;

class A
{
    private:
    int a;
    protected:
    int b;
    public:

    A(int a,int b)
    {
        this->a=a;
        this->b=b;
        cout<<"A initialized"<<endl;
    }

    int geta()
    {
        return a;
    }

    void disp_ab()
    {
        cout<<"a : "<<a<<" b : "<<b<<endl;
    }
};
 
class B
{
    private:
    int c;
    protected:
    int d;
    public:

    B(int c,int d)
    {
        this->c=c;
        this->d=d;
        cout<<"B initialized"<<endl;
    }

    int getc()
    {
        return c;
    }

    void disp_cd()
    {
        cout<<"c : "<<c<<" d : "<<d<<endl;
    }

};

class C :public A,public B
{
    private:
    int e;
    protected:
    int f,total;
    public:
    C(int a,int b,int c,int d, int e,int f):A(a,b),B(c,d)
    {
        this->e=e;
        this->f=f;
        cout<<"C initialized"<<endl;
    }

    void sum()
    {
        total=geta()+b+getc()+d+e+f;
    }

    void display()
    {
        cout<<"e : "<<e<<" f : "<<f<<endl;
        cout<<"total (a+b+c+d+e+f): "<<total<<endl;

    }


};
int main()
{
    C nums(10,20,30,40,50,60);
    nums.disp_ab();
    nums.disp_cd();
    nums.display();
    nums.sum();
    nums.display();
     
     
    return 0;
 
}