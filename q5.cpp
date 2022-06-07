#include<iostream>
#include<string>
 
using namespace std;

class Contact
{
    public:
    string cellno;
    string cname;

    void details()
    {
        cout<<"contact name: "<<cname<<" cell number: "<<cellno<<endl;
    }


    
};
 
int main()
{
    Contact object[5]; //create 5 object;
    for (int i = 0; i < 5; i++)
    {
    
        cout<<"Enter contact name : "<<endl;
        cin>>object[i].cname;

        cout<<"Enter Cell Number : "<<endl;
        cin>>object[i].cellno;

    }

    for (int i = 0; i < 5; i++)
    {
        object[i].details();

    }


    

     
     
    return 0;
 
}