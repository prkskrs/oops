#include<iostream>
#include<string>
 
using namespace std;


class Point{
private:
int x;
int y;

public:
    void setX(int a)
    {
    x=a;
    }
    void setY(int b){
    y=b;
    }
    int getX(){
    return x;
    }
    int getY()
    {
        return y;
    }
    void setPoint(int a,int b){
    x=a;
    y=b;
    }

    void movePoint(int a,int b)
    {
        x+=a;
        y+=b;
    }
};
int main()
{
    Point p1;
    p1.setX(10);
    p1.setY(10);

    cout<<p1.getX()<<":"<<p1.getY()<<endl;
    p1.movePoint(10,20);
    //p1.x=10;
    cout<<"After moving"<<endl;
    cout<<p1.getX()<<":"<<p1.getY()<<endl;
    //x=100;

return 0;
}