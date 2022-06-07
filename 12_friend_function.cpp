#include<iostream>
#include<string>
 
using namespace std;
class human{
    string name;//by default it will specified as private
    int age;
    public:
    human(string iname,int iage)
    {
        name=iname;
        age=iage;
    }
    void tellme()
    {
        cout<<name<<endl<<age<<endl;


    }
    friend void display(human man); // function void display(); which is not a member of a class but just friend f unction for class
                                    // friend of class syntax--> (friend class classname) is friend for class as same as for function


};

void display(human man)
{
    cout<<man.name<<endl<<man.age<<endl;
}
 
int main()
{
    human prakash("prakash",32);
    display(prakash);//without this line it will not work (friend function call)
    // prakash.tellme(); //this is usual call


     
     
    return 0;
 
}