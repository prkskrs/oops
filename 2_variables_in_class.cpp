#include<iostream>
#include<string>
 
using namespace std;

class HumanBeing
{
    public:
    string name;  //variables inside a class
    void introduce()
        {
            cout<<"Hi! I am "<<name<<endl;
        }
}; 
 
int main()
{
    HumanBeing prakash;
    prakash.name="Prakash"; //prakash object contain name Prakash
    prakash.introduce();


    HumanBeing anusha;
    anusha.name="anusha"; //anjali object contain name Anjali
    anusha.introduce();






     
     
    return 0;
 
}