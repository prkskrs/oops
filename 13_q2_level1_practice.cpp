// Write a program to print the area of a triangle having sides (3,4,5) respectively by 
// creating a class named 'Triangle' with a function named 'Area' which returns the area. 
// and also another function "Perimeter" which returns perimeter;
#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;

class triangle{
    float a,b,c;
    public:
    void area(float ia,float ib,float ic)
    {
        float s=(ia+ib+ic)/2;
        float area=float(sqrt(s*(s-ia)*(s-ib)*(s-ic)));
        cout<<"area: "<<area<<endl;


    }

    void perimeter(float ia,float ib,float ic)
    {
        float peri=ia+ib+ic;
        cout<<"perimeter: "<<peri<<endl;


    }
};
 
int main()
{
    triangle object1;
    object1.area(3,4,5);
    object1.perimeter(3,4,5);
     
     
    return 0;
 
}