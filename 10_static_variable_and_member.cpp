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
    void humantotal()
    {
        //human_count++;
        cout<<"there are "<<human_count<<" people are in this program"<<endl;
    }
 
};

int human::human_count=0;

int main()
{

    cout<<human::human_count<<endl;
    human prkash;
    prkash.humantotal();
    human saurav;
    saurav.humantotal();
    human aman;
    aman.humantotal();
    human appu;
    appu.humantotal();

    cout<<human::human_count<<endl;
    // ones the value is assigned in line 23 values are reflected in all the objects;
     
     
    return 0;
 
}