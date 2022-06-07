// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by 
// creating a class named 'Rectangle' with a function named 'Area' which returns the area. 
// Length and breadth are passed as parameters to its constructor.
#include<iostream>
#include<string>
 
using namespace std;

class rectangle
{
private:
int len;
int bre;
public:
    rectangle(int l,int b)
    {
        len=l;
        bre=b;

    }
    void area()
    {
        cout<<"area: "<<len*bre<<endl;
    }
    
};


int main()
{
    rectangle r1(4,5);
    r1.area();
    rectangle r2(5,8);
    r2.area();
        
     
    return 0;
 
}