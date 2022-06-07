#include<iostream>
#include<string>
 
using namespace std;

class human{
    public:
    string name;
    void introduce()
    {
        cout<<"hi "<<name<<endl;
    }
};
 
int main()
{

    human anil; // object stored in stack

    human *prakash;//object allocated in heap
    prakash = new human();//heap allocation

    anil.name="anil";// when object stored in stack we use dot.method to access member or properties
    anil.introduce();

    prakash->name="prakash";// for pointer we use arrow->method to access member or properties
    prakash->introduce();





     
    return 0;
 
}