#include<iostream>
#include<string>
 
using namespace std;

class Prakash
{
    int hi;
    public:
    void disp();
};

class Anusha
{
    public:
    int bye;
    friend void Prakash::disp(); //add() of class Prakash is freind of class Anusha
};

void Prakash::disp()
{
        Anusha hate;
        hate.bye=322;
        Prakash love;
        love.hi=143;
        cout<<"Prakash says "<<love.hi<<endl;
        cout<<"Anusha says "<<hate.bye<<endl;
    }
 
int main()
{
    Prakash whatsapp;
    whatsapp.disp();
    
     
     
    return 0;
 
}