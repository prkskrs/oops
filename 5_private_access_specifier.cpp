#include<iostream>
#include<string>
 
using namespace std;

class human{
    private:   //private property : u cannot use it in main() you can only use it in this class
    int age;
    int getage(){  //private 
        return age-5;
    }

    public:

    void displayage()
    {
        cout<<"prakash's age : "<<age<<endl;

    }

    void documentage()
    {
        cout<<"prakash's document age : "<<getage()<<endl;

    }

    void setage(int value)
    {
        age=value;
    }


};
 
int main()
{
    human prakash;
    //prakash.age=21; // error will come like "declared private here"
    // how to use private property??
    // u can use private property only in class so that make above changes to use in main()
    
      prakash.setage(22);
      prakash.displayage();
      prakash.documentage();
      
    //use of private case is to hide secret properties or internal data like here we hide age by -5 using private method;
    return 0;
 
}