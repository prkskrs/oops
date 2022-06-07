#include<iostream>
#include<string>
 
using namespace std;

class item
{
    public:
    int id;
    string itemname;
    float itemprice;
    item(){}
    item(int id,string itemname,float itemprice):id(id),itemname(itemname),itemprice(itemprice){}
};

class fooditem: public item
{
    public:
    string doe;
    float tax_per_food_item=0.10;
    fooditem(int id,string itemname,float itemprice,string doe):item(id,itemname,itemprice),doe(doe){}

};

class glassitem: public item
{
    public:
    string packing;
    float tax_per_glassitem=0.30;
    glassitem(int id,string itemname,float itemprice,string packing):item(id,itemname,itemprice),packing(packing){}

};

class customer
{
    public:
    string cname;
    int cid;
    float bill_receipt;
    item it[3];    
    customer(){}
    customer(string cname,int cid):cname(cname),cid(cid)
    {
       
        
    }

    void items_purchased()
    {
        for (int i = 0; i < 3; i++)
        {
            cout<<it[i].itemname<<"\t"<<it[i].itemprice<<endl;
        }
        cout<<"----------------"<<endl;
        cout<<"total: Rs "<<bill_receipt<<endl;
        cout<<"----------------"<<endl;
        
        
    }

};

class shop
{
    public:
    string sname;
    item its[5];
    customer *c;
    
    shop(string sname):sname(sname)
    {
        
    }

    void shop_items_detail()
    {
        cout<<"ID\t"<<"ITEMNAME\t"<<"ITEMPRICE"<<endl;
        
        for (int i = 0; i < 5; i++)
        {
            cout<<its[i].id<<"\t"<<its[i].itemname<<"\t\t"<<its[i].itemprice<<endl;
        }
        
        

    }
    

    void shopping()
    {
        int choice,no_of_item;
        cout<<"enter number of item u want to purchase: "<<endl;
        cin>>no_of_item;

        float bill=0;
        for (int i = 0; i < no_of_item; i++)
        {
            cout<<"enter item no (1 to 5) from above list :";
            cin>>choice;
            c->it[i]=its[choice-1];
            c->bill_receipt+=its[choice-1].itemprice;
        }
        
        

        

    }
};
 
int main()
{
    fooditem f(22,"Potato",249.99,"22-11-2023");
    glassitem g(28,"Flasks",1299.99,"Thermocol");
    glassitem g1(18,"Glass",549.99,"Paper");
    fooditem f1(9,"Banana",33.99,"22-08-2022");
    fooditem f2(25,"Wheat",499.99,"25-11-2022");
    //item i[3];
    //cout<<i[0].itemname<<endl;
    shop s("VMART");

    customer c("Prakash",1);
    s.c=&c;
    s.its[0]=f;
    s.its[1]=g;
    s.its[2]=f1;
    s.its[3]=g1;
    s.its[4]=f2;
    s.shop_items_detail();
    s.shopping();
    c.items_purchased();
    
     
     
    return 0;
 
}