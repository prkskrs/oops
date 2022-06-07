#include<iostream>
#include<string>
 
using namespace std;

class dell;
class logitech
{
    int product;
    public:
    void getprodno()
    {
        cin>>product;
    }
    friend dell;
};

class dell
{
    public:
    void lappy(logitech a)
    {
        cout<<"product no of logitech : "<<a.product<<endl;
    }
    void keybo(logitech);
};

void dell::keybo(logitech b)
{
    cout<<"keyboard : "<<b.product<<endl;
}

int main()
{
    logitech x;
    dell y;
    x.getprodno();
    y.lappy(x);
    y.keybo(x);
     
     
    return 0;
 
}