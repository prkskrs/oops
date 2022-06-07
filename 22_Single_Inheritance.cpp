#include<iostream>
#include<string>
 
using namespace std;

class A
{
    int m;
    public:
    void getdata_m(void);
    int retm(void);
    
};

class B : public A
{
    int n,sum;
    public:
    void getdata_n(void);
    int add(void);
    void display(void);
    

};


void A :: getdata_m(void)
{
    cout<<"enter value of m: "<<endl;
    cin>>m;
}
int A :: retm(void)
{
    return m;
}


void B :: getdata_n(void)
{
    cout<<"enter value of n: "<<endl;
    cin>>n;
}
int B :: add(void)
{
    sum=retm()+n;
    return sum;
}

void B::display(void)
{
    cout<<"value of m: "<<retm()<<endl;
    cout<<"value of n: "<<n<<endl;
    cout<<"sum "<<sum<<endl;
}
 
int main()
{
    B num;
    num.getdata_m();
    num.getdata_n();    
    num.add();    
    num.display();    
     
    return 0;
 
}