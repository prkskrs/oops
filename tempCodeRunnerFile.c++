#include<iostream>
using namespace std;

class item{
    public:
    int id;
    string name;
    float price;

    item(int id,string name,float price){
        this->id=id;
        this->name=name;
        this->price=price;
    }

    item(){

    }

    void printitem(){
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<price<<endl;
    }


};

class fooditem:public item{
    public:

    string DOE;
    float food_tax=0.05;


    fooditem(int id,string name,float price,string DOE):item(id,name,price){
        this->DOE=DOE;
    }

   void printitem(){
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<price<<endl;
        cout<<DOE<<endl;
    }
};

class glassitem:public item{
    public:

    string packing;
    float glass_tax=0.18;

    glassitem(int id,string name,float price,string packing):item(id,name,price){

        this->packing=packing;
}

void printitem(){
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<price<<endl;
        cout<<packing<<endl;
    }

};

class customer{

 public:
    string name;
    int id;
    item ptr[2];

    customer(){
        name = "nan";
        id = 0;
    }

    customer(string name,int id):name(name),id(id){}

    void displaydata(){
        cout<<name<<endl;
        cout<<id<<endl;
    }

    void customer_items(){
        for(int i=0;i<2;i++){
            ptr[i].printitem();
        }
    }
};

class shop{
    public:
   customer *c;
   item shop_items[3];

   void printcustomer_details(){
       cout<<"shop has this customer"<<endl;
       c->displaydata();
       cout<<"customer has bought these items"<<endl;
       c->customer_items();
   }

   void shopping(){
       int choice;
       for(int i=0;i<2;i++){
           cout<<"enter the index items from 0 t0 2 that customer wants to buy"<<endl;
           cin>>choice;
           c->ptr[i]=shop_items[choice];
       }
   }

   void printshop_item_details(){
    cout<<"shop has these number of items"<<endl;
    
      for(int i=0;i<3;i++){
          shop_items[i].printitem();
      }
   }
};

int main(){

    fooditem f1(1,"parle-g",5,"20/12/2022");
    glassitem g1(11,"mirror",300,"paper");
    fooditem f2(2,"maggi",12,"12/08/2022");

    customer c1("Prakash Singh",23);
    shop s1;
    s1.c=&c1;
    s1.shop_items[0]=f1;
    s1.shop_items[1]=g1;
    s1.shop_items[2]=f2;

    s1.shopping();
    s1.printcustomer_details();
    s1.printshop_item_details();

    return 0;
}