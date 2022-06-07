#include<iostream>
#include<string>
#include<cmath>
 
using namespace std;

class QuadrilateralShapes //pascal
{
    public:
    double length,breadth,height;

    void rectangle()
    {

        float area=length*breadth;
        cout<<"area : "<<area<<" sq.units"<<endl;

        float peri=2*(length+breadth);
        cout<<"perimeter : "<<peri<<" units"<<endl;

        float hypo=sqrt(length*length+breadth*breadth);
        cout<<"diagonal : "<<hypo<<" units"<<endl;
    }

    void square()
    {

        float area=length*breadth;
        cout<<"area : "<<area<<" sq.units"<<endl;

        float peri=4*(length);
        cout<<"perimeter : "<<peri<<" units"<<endl;

        float hypo=sqrt(length*length+breadth*breadth);
        cout<<"diagonal : "<<hypo<<" units"<<endl;
    }

    void parallelogram()
    {
        int angle,x;

        float height;
        cout<<"Enter height for parallelogram: ";
        cin>>height;
        cout<<"interior angles : ";
        cin>>angle;
        angle=angle*(3.1428/180);
        x=cos(angle);


        

        float area=length*height;
        cout<<"area : "<<area<<" sq.units"<<endl;

        float peri=2*(length+breadth);
        cout<<"perimeter : "<<peri<<" units"<<endl;

        float p=sqrt(pow(length,2) + pow(breadth,2) + 2*length*breadth*x);
        float q=sqrt(pow(length,2) + pow(breadth,2) - 2*length*breadth*x);
        cout<<"diagonals are : "<<p<<" , "<<q<<" units"<<endl;
    }

    

    

};
 
int main()
{
    QuadrilateralShapes shape1;
    shape1.length=4;
    shape1.breadth=4;
    shape1.parallelogram();
    return 0;
 
}