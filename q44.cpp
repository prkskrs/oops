#include<iostream>
#include<string>
 
using namespace std;
class Addition
{
    public:
    int a,b;
    float x,y;
    double c,d;
    long int e,f;
    void addint()
    {
        int s1=a+b;
        cout<<"sum of int : "<<s1<<endl;
    }

    void floatint()
    {
        float s2=x+y;
        cout<<"sum of float : "<<s2<<endl;
    }

    void doubleint()
    {
        double s3=c+d;
        cout<<"sum of double : "<<s3<<endl;
    }

    void longint()
    {
        long int s4=e+f;
        cout<<"sum of long : "<<s4<<endl;
    }
};
 
int main()
{
    Addition a;
    a.a=2;
    a.b=2;
    a.addint();
    a.x=2.233213;
    a.y=2.312312;
    a.floatint();
    a.c=2.233213;
    a.d=2.312312;
    a.doubleint();
    a.e=2287313023;
    a.f=2213213232;
    a.longint();
     
     
    return 0;
 
}