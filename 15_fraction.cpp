#include<iostream>
#include<string>
 
using namespace std;

class Fraction
{
    public:
    int num1,num2;
    int deno1,deno2;
    void Getfraction(int inum,int ideno)
    {
        num1=inum;
        deno1=ideno;
        cout<<num1<<"/"<<deno1<<endl;
        
    }


    void Add(int inum1,int ideno1,int inum2=0,int ideno2=0)
    {
        num1=inum1;
        deno1=ideno1;
        num2=inum2;
        deno2=ideno2;
        if(inum2==0 &&ideno2==0)
        {
            cout<<num1<<"/"<<deno1<<endl;

        }
        else
        {
            cout<<(num1*deno2+num2*deno1)<<"/"<<deno1*deno2<<endl;
        }
    }


    void Substract(int inum1,int ideno1,int inum2=0,int ideno2=0)
    {
        num1=inum1;
        deno1=ideno1;
        num2=inum2;
        deno2=ideno2;
        if(inum2==0 &&ideno2==0)
        {
            cout<<num1<<"/"<<deno1<<endl;

        }
        else
        {
            cout<<(num1*deno2-num2*deno1)<<"/"<<deno1*deno2<<endl;
        }
    };

    void Multiply(int inum1,int ideno1,int inum2=0,int ideno2=0)
    {
        num1=inum1;
        deno1=ideno1;
        num2=inum2;
        deno2=ideno2;
        if(inum2==0 &&ideno2==0)
        {
            cout<<num1<<"/"<<deno1<<endl;

        }
        else
        {
            cout<<(num1*num2)<<"/"<<deno1*deno2<<endl;
        }
    };


    void Divide(int inum1,int ideno1,int inum2=0,int ideno2=0)
    {
        num1=inum1;
        deno1=ideno1;
        num2=inum2;
        deno2=ideno2;
        if(inum2==0 &&ideno2==0)
        {
            cout<<num1<<"/"<<deno1<<endl;

        }
        else
        {
            cout<<(num1*deno2)<<"/"<<deno1*num2<<endl;
        }
    };
};
 
int main()
{
    Fraction f2;
    f2.Getfraction(2,3);

    f2.Add(2,3,4,5);
    f2.Add(5,6);
    f2.Substract(5,6,3,1);
    f2.Multiply(5,6,3,1);
    f2.Divide(5,6,3,1);
     
     
    return 0;
 
}