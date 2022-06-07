#include<iostream>
#include<string>
 
using namespace std;
class Number
{
    protected:
    int m,n;
    public:
    void getnum()
    {
        cout<<"Enter any number:";
        cin>>m;
        cout<<"Enter any number:";
        cin>>n;
    }
};

class Addition: public Number
{
    public:
    void add()
    {
        getnum();
        cout<<"Sum: "<<m+n<<endl;
    }
};


class Substraction: public Number
{
    public:
    void sub()
    {
        getnum();
        cout<<"Sum: "<<m-n<<endl;
    }
};
 
int main()
{
    Addition a;
    a.add();
    Substraction s;
    s.sub();
     
     
    return 0;
 
}