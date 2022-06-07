#include<iostream>
#include<string>

// friend function: which is not part of class but it can use the private members of class if it is assigned as friend;
using namespace std;
 
class total 
{
    int a;
    int b;
    public:
    void getdata()
    {
        cin>>a>>b;
    }
    void putdata()
    {
        cout<<a<<b<<endl;
    }

    friend int add();  // friend function its not member function
    //friend int add(total k);
};

int add()   //function definition
{
   total s;
   int temp;
   s.getdata();
   temp=s.a+s.b;// accessing private data from (non-member function) i.e.friend function
   return temp;
}
 
int main()
{
    int result;
    result=add();
    cout<<"sum = "<<result<<endl;
     
     
    return 0;
 
}