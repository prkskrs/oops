#include<iostream>
#include<string>
 
using namespace std;
class area{
    private: int l;
    int b;
    public:
    int il,ib;
    void setdim(int il,int ib)
    {
         l=il;
         b=ib;

        


    }

    int getarea()
    {
        int area=l*b;
        return area;
    }
};


 
int main()
{
    area a1;
    printf("length:");
    scanf("%d",&a1.il);
    printf("breadth:");
    scanf("%d",&a1.ib);
    a1.setdim(a1.il,a1.ib);
    int ar=a1.getarea();
    cout<<"area: "<<ar<<endl;

    

     
     
    return 0;
 
}