#include<iostream>
#include<string>

//destructor; function or member of class...same name as class 

 
using namespace std;

class human{

    public:
    human()
    {
        cout<<"constructor called"<<endl;
    }
 
    //destructor
    ~human(){
        cout<<"destructor called"<<endl;

    }
};
 
int main()
{
    human *prakash;
    prakash=new human(); //constructor called

    delete prakash;//destructor called
    return 0;
     
     
    return 0;
 
}