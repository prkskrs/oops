#include<iostream>
#include<cmath>
#include<string>
 
using namespace std;

class DistancE
{
    int x1,y1;
    int x2,y2;

    public:

    void setpt()
    {
        cin>>x1>>y1>>x2>>y2;
    }
    void cald()
    {
        float dist;
        dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        cout<<dist<<endl;
    }

};
 
int main()
{
    DistancE d1;
    d1.setpt();
    d1.cald();
     
    return 0;
 
}