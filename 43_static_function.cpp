#include<iostream>
#include<string>
 
using namespace std;

class Bank
{
    public:

    static void printMsg()
    {
        cout<<"Welcome to bank!"<<endl;
    }
 
};




int main()
{
    Bank::printMsg();

    return 0;
}