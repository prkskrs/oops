#include<iostream>
#include<string>
 
using namespace std;
class A
{
    protected:
    int m=10;
    public:
    void display()
    {
        cout<<"value of m = "<<m<<endl;
    }
};

class B
{
    protected:
    int n=12;
    public:
     void display()
    {
        cout<<"value of n = "<<n<<endl;
    }
};

class C : public A , public B
{
    int sum;
    public:
    void add()
    {
        sum=m+n;
    }
    void display()
    {
        cout<<"sum = "<<sum<<endl;
    }

    
};
 
int main()
{
    C num;
    num.A::display();
    num.B::display();
    num.C::display();
    num.add();
    num.C::display();
     
     
    return 0;
 
}