#include<iostream>
#include<string>
 
using namespace std;
class A
{
    protected:
    int m;
    public:
    void getdata_m()
    {
        cout<<"enter value of m: "<<endl;
        cin>>m;
    }
};

class B
{
    protected:
    int n;
    public:
    void getdata_n()
    {
        cout<<"enter value of m: "<<endl;
        cin>>n;
    }
};

class C : public A , public B
{
    int sum;
    public:
    int add()
    {
        sum=m+n;
        return sum;
    }
    void display()
    {
        cout<<"value of m : "<<m<<endl;
        cout<<"value of n : "<<n<<endl;
        cout<<"sum : "<<sum<<endl;

    }
};
 
int main()
{
    C num;
    num.getdata_m();
    num.getdata_n();
    num.add();
    num.display();
     
     
    return 0;
 
}