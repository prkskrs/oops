#include<iostream>
#include<string>
 
using namespace std;
int paid=0;
class item
{
    public:
    string itemname;
    float price;
    item(){}
    item(string itemname,float price):itemname(itemname),price(price){}

}; 


class debitcard
{
    public:
    int cardno;
    float balance;
    debitcard(){}
    debitcard(int cardno,float balance):cardno(cardno),balance(balance){}
    
}; 


class customer
{
    public:
    int custid;
    string name;
    item *ii;
    item it[3];
    debitcard *db;
    float billamt;
    customer(){}
    customer(int custid,string name,item it[],debitcard *db):custid(custid),name(name)
    {
        this->custid=custid;
        this->name=name;
        for (int i = 0; i < 3; i++)
        {
            this->it[i].itemname=it[i].itemname;
            this->it[i].price=it[i].price;
        }
        this->db=db;
        
    }

    void billing_amount()
    {
        for (int i = 0; i < 3; i++)
        {
            billamt+=it[i].price;
        }
        cout<<"Sir, your total bill amount is Rs."<<billamt<<endl;
        
    }

    void printDetail()
    {
        cout<<"\n-------------Details Of Customer-------------"<<endl;
        cout<<"Customer ID :"<<custid<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Card No: "<<db->cardno<<endl;
        cout<<"Available Balance: Rs."<<db->balance<<endl;
        cout<<"\n------Items Purchased------"<<endl;
        cout<<"Item\t"<<"ItemName\t"<<"ItemPrice"<<endl;
        for (int i = 0; i < 3; i++)
        {

            cout<<i+1<<"\t"<<it[i].itemname<<"\t\t"<<it[i].price<<endl;
        }
        cout<<"Your total Bill Amount: Rs."<<billamt<<endl;
        
    }

    void PayBill()
    {
        if(db->balance>=billamt)
        {
            db->balance=db->balance-billamt;
            billamt=0;
            paid=1;
        }
        else
        {
            cout<<"Sorry ! Your Account Balance is not sufficient to pay the bills."<<endl;
        }
    }
};
int main()
{
    item it[3]={{"Tv",19990.33},{"Cooker",9990.33},{"Fridge",8123}};
    debitcard db(7480954,88000.45);
    customer c1(229,"anusha",it,&db);

    c1.billing_amount();
    cout<<endl<<"-------------------Detail of customer before paying bills-------------------"<<endl;
    c1.printDetail();
    c1.PayBill();
    cout<<endl<<"-------------------Detail of customer after paying bills-------------------"<<endl;
    c1.printDetail();
    if(paid==1)
    {
        cout<<"----------[[[[BILL PAID]]]]------------"<<endl;
    }
    else
    {

        cout<<"----------[[[[BILL NOT PAID ]]]]------------"<<endl;
    }
     
    return 0;
 
}