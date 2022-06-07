#include<iostream>
#include<string>
 
using namespace std;

class human{
    public:
    string name = "noname";
    void introduce();
};

// ::   scope resolution operator to define any property outside the definition of class
void human :: introduce()
{
    cout<<"hi "<<name<<endl;
}

// we can't use scope resolution operator to initialise property name outside the class
// will get some error "name" is not the static member of the class
//string human::name="noname"; //will show error

 
int main()
{
    human prakash;
    prakash.name="prakash";
    prakash.introduce();

    human priyansh;// give hi! noname because in class "noname" is initialized
    priyansh.introduce();

    
    return 0;
 
}