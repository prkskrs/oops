#include<iostream>
#include<string>
 
using namespace std;
class car
{
   public:
   string model;
   int wheels;
   int carno;

   car()
   {  cout<<"car of model "<<model<<endl;
       cout<<"car have wheels "<<wheels<<endl;
       cout<<"car number  "<<carno<<endl;
   }

   void car_detail()
   {
       cout<<"car of model "<<model<<endl;
       cout<<"car have wheels "<<wheels<<endl;
       cout<<"car number  "<<carno<<endl;
   }

   void speed()
   {
       float speedd;
       float distance,time;
       cout<<"Entr distance and time:"<<endl;
       cin>>distance>>time;
       speedd=distance*time;
       cout<<"Speed = %f"<<speedd<<endl;
   }

};
 
int main()
{
    car thar;
    // thar.model="23";
    // thar.carno=131;
    // thar.wheels=4;
    // thar.car_detail();
    // thar.speed();

     
     
    return 0;
 
}