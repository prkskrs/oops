#include<iostream>
#include<string>
 
using namespace std;
class human{
    private:
    int age;
    string name;

    public:
    human()
    {
        cout<<"default constructor"<<endl;
        name="noname";
        age=0;
    }

    human(string iname="noname",int iage=0)   //default constructor if no parameters given in function
    { 
        cout<<"overloaded constructor"<<endl;
        name=iname;
        age=iage;
    }

    void speakup()
    {
        cout<<name<<endl<<age<<endl;

    }


};

int main()
{
    human prakash("prakash",22);// two parameter given
    prakash.speakup();

    human saurav("saurav");// one parameter given
    saurav.speakup();


    // human annu(18);// one parameter given
    // annu.speakup();
    
    // human priyansh;// no parameter given
    // priyansh.speakup();
     
      
    return 0;
 
}