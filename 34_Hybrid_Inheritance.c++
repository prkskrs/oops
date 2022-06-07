#include<iostream>
#include<string>
 
using namespace std;

class Food
{
    protected:
    string name;
    string name1;
    public:
    void GetFoodName()
    {
        cout<<"enter food1 name "<<endl;
        cin>>name;
        cout<<"enter food2 name "<<endl;
        cin>>name1;
    }
};

class Rate : public Food
{
    protected:
    float rate1;
    float rate2;
    public:
    void GetRate()
    {
        cout<<"enter rate of "<<name<<":"<<endl;
        cin>>rate1;
        cout<<"enter rate of "<<name1<<":"<<endl;
        cin>>rate2;
    }
};

class Order
{
    protected:
    int ord1;
    int ord2;
    public:
    void GetOrder()
    {
        cout<<"No. Of Orders of food1:";
        cin>>ord1;
        cout<<"No. Of Orders of food2:";
        cin>>ord2;
    }
};

class Total : public Rate,public Order
{
    float sum;
    public:
    void add()
    {
        sum=rate1*ord1+rate2*ord2;
    }
    void display()
    {
        cout<<"\n---------ListOfFood-----------"<<endl;
        cout<<"Food \tNo.OfOrders\tPrice"<<endl;
        cout<<name<<" \t"<<ord1<<"\t\t"<<rate1<<endl;
        cout<<name1<<" \t"<<ord2<<"\t\t"<<rate2<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"\t\t   Total:"<<sum<<endl;
    }
};
 
int main()
{
    Total foods;
    foods.GetFoodName();
    foods.GetRate();
    foods.GetOrder();
    foods.add();
    foods.display();
     
     
    return 0;
 
}