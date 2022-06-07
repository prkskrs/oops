#include<iostream>
#include<string>
 
using namespace std;

class human{
    private:
    int age;
    string name;
    public:

    //overload constructors
     
    human()
    {
        cout<<"default constructor"<<endl;
        age=0;
        name="noname";

    }
    human(int iage)
    {
        cout<<"constructor with age as parameter"<<endl;
        age=iage;
        name="noname";
    }

    human(string iname)
    {
        cout<<"constructor with name as parameter"<<endl;
        name=iname;
        age=0;
    }
    human(string iname,int iage)
    {
        cout<<"constructor with name and age as parameter"<<endl;
        age=iage;
        name=iname;
    }

    void display()
    {
        cout<<name<<endl<<age<<endl;
    }

    

};
 
int main()
{
    // human prakash;
    // prakash.display();

    // human appu("appu");
    // appu.display();
    
    // human saurav(21);
    // saurav.display();

    human priyansh("priyansh",20);
    priyansh.display();

    return 0;
 
}