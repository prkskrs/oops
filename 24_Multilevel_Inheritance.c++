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

class Total : public Rate
{
    float sum;
    public:
    void add()
    {
        sum=rate1+rate2;
    }
    void display()
    {
        cout<<"----List----"<<endl;
        cout<<"Food \tPrice"<<endl;
        cout<<name<<" \t"<<rate1<<endl;
        cout<<name1<<" \t"<<rate2<<endl;
        cout<<"--------------------"<<endl;
        cout<<"SUM:\t"<<sum<<endl;
    }
};
 
int main()
{
    Total foods;
    foods.GetFoodName();
    foods.GetRate();
    foods.add();
    foods.display();
     
     
    return 0;
 
}