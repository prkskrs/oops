#include<iostream>
#include<string>
 
using namespace std;
class Beta;
class Alpha
{
    private:
    int data;
    public:
    Alpha(){data=10;}
    friend int frifun(Alpha,Beta);
};
class Beta
{
    private:
    int data;
    public:
    Beta(){data=10;}
   friend int frifun(Alpha,Beta);
};

int frifun(Alpha a, Beta b)
{
    return a.data+b.data;


}


int main()
{
    Alpha a;
    Beta b;
    int result=frifun(a,b);
    cout<<result<<endl;



    return 0;
}