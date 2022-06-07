//previous question using constructor
#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;

class triangle{
    float a,b,c;
    public:
    triangle(float ia,float ib,float ic)
    {
        float s=(ia+ib+ic)/2;
        float peri=ia+ib+ic;
        
        float area=float(sqrt(s*(s-ia)*(s-ib)*(s-ic)));
        cout<<"area: "<<area<<endl<<"perimeter: "<<peri<<endl;


    }

};
 
int main()
{
    triangle object1(3,4,5);
     
    return 0;
 
}