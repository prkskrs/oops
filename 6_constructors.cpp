// constructor: method or special function which has no return type and same name of the class
#include<iostream>
#include<string>

 
using namespace std;

class human{
    private:
    string name;
    int age;

    public:

    //constructor 
    human(){
        name="noname";
        age=0;
        cout<<"constructor is called when u create and object of human"<<endl;
    } // u can also define constructor using scope resolution operator ::


    //property
    void display()
    {
        cout<<name<<endl<<age<<endl;
    }
};

int main()
{
    human prakash;// will print "constructor is called when u create and object of human"
    prakash.display();

    //we dont have to call constructor it is automatically called by the c++;
    //why contructor is public?
    //because if we put it in private no objects will be created; check by own!
     
    return 0;
 
}