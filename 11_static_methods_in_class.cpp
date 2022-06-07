#include<iostream>
#include<string>
 
using namespace std;



class human{
    public:
    static int human_count;

    human()
    {
        human_count++;
    }
    // void humantotal()
    // {
    //     cout<<"there are "<<human_count<<" people are in this program"<<endl;
    // }

    static void humancount()
    {
        //static method can only call static variable
        cout<<"there are "<<human_count<<" people are in this program"<<endl;

    }
 
};

int human::human_count=0;

int main()
{

    cout<<human::human_count<<endl;
    human prkash;
    prkash.humancount();
    human saurav;
    saurav.humancount();
    human aman;
    aman.humancount();
    human appu;
    appu.humancount();


    cout<<human::human_count<<endl;
    // ones the value is assigned in line 23 values are reflected in all the objects;
     
     
    return 0;
 
}