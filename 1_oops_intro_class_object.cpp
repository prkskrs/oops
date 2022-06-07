#include<iostream>
#include<string>
 
using namespace std;

class humanbeing
{
     public :
     void display()
          {
               cout<<"HELLO HUMAN BEING"<<endl;
          }
     


};
 
int main()
{
humanbeing anil;// classname object;   humanbeing is class and anil is object
anil.display();//object.memberofclass;
     
     return 0;
}