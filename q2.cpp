#include<iostream>
#include<string>
 
using namespace std;

class Box
{
    public:
    double depth;
    double width;
    double height;

    void volume()
    {
        float volume;
        volume=depth*width*height;
        cout<<"VOLUME: "<<volume<<endl;
    }

    void object_detail()
    {
        cout<<"depth "<<depth<<endl;
        cout<<"width "<<width<<endl;
        cout<<"height "<<height<<endl;
    }


    
};

 
int main()
{
    Box b1;
    b1.depth=20;
    b1.height=20;
    b1.width=20;
    b1.object_detail();
    b1.volume();
    
    return 0;
 
}