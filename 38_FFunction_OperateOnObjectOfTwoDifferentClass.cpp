#include<iostream>
#include<string>
 
using namespace std;
class Anusha;
class Prakash
{
    int a;
    public:
    void geta()
    {
        cin>>a;
    }
    friend void add(Prakash,Anusha);
};

class Anusha
{

    int b;
    public:
    void getb()
    {
        cin>>b;
    }
    friend void add(Prakash,Anusha);
    
};

void add(Prakash a,Anusha b)
{
    cout<<"Total : "<<a.a+b.b<<endl;
        
}
 
int main()
{
    Prakash a;
    Anusha b;
    a.geta();
    b.getb();
    add(a,b);

    
     
     
    return 0;
 
}