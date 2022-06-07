#include<iostream>
#include<string>
 
using namespace std;
class human{
    private:
    int *age;
    string *name;

    public:

    human(string iname,int iage)   //default constructor if no parameters given in function
    { 
        age=new int;
        name=new string;      
        *name=iname;
        *age=iage;
    }

    void display()
    {
        cout<<"My name is "<<*name<<". And I'm "<<endl<<*age<<" years old."<<endl;

    }
    ~human()
    {
        delete name;
        delete age;
        cout<<"All memories are released."<<endl;

    }


};

int main()
{
    human *prakash=new human("praksh",22);
    prakash->display();
    delete prakash;

     
      
    return 0;
 
}