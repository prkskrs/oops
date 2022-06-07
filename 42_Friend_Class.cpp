#include<iostream>
#include<string>
 
using namespace std;

class Alpha
{
    private:
    int data;
    void show()
    {
        cout<<"Friend Class: "<<data<<endl;
    }
    public:
    Alpha(){data=10;}
    friend class Beta;  //Beta is a friend class.
};


class Beta
{
    public:
    void printData(){
        Alpha a;
        a.show();
    }
    void printData(Alpha a){
        a.data=100;
        a.show();
    }

};



int main()
{
    Beta b;
    b.printData();
    Alpha a;
    b.printData(a);



    return 0;
}