#include<iostream>
#include<string>
 
using namespace std;

class BroadBand
{
    public:
    string memberscustomerName;
    int id;
    float planAmount;


    BroadBand()
    {
        memberscustomerName="noname";
        id=0;
        planAmount=0.0;
    }
    
    BroadBand(string memberscustomerName, int id,float planAmount)
    {
        this->memberscustomerName=memberscustomerName;
        this->id=id;
        this->planAmount=planAmount;
    }


    void displaybb()
    {
        cout<<"CustomerName : "<<memberscustomerName<<endl;
        cout<<"Id : "<<id<<endl;
        cout<<"PlanAMount : "<<planAmount<<endl;
    }


};

class DTH
{
    public:
    long customerMobileNumber;
    int channelList;
    float balance;

    DTH()
    {
        customerMobileNumber=0000;
        balance=0.0;
    }
    
    DTH(long customerMobileNumber, int channelList,float balance)
    {
        this->customerMobileNumber=customerMobileNumber;
    
        this->channelList=channelList;
        
        this->balance=balance;
    }

    void displaydth()
    {
        cout<<"CustomerMobileNumber : "<<customerMobileNumber<<endl;
        
        cout<<"Id : "<<channelList<<endl;
        
        
        cout<<"Balance : "<<balance<<endl;
    }
};


class NetworkProvider
{
    public:
    BroadBand bbarray[3];
    DTH dtharray[3];
    static int bbcount;
    static int dthcount;


    NetworkProvider(BroadBand bbarray[],DTH dtharray[])
    {
        for (int i = 0; i < 3; i++)
        {
            this->bbarray[i]=bbarray[i];
            bbcount++;
        }
        
        for (int i = 0; i < 3; i++)
        {
            this->dtharray[i]=dtharray[i];
            dthcount++;
        }
        
        

    }

    void registernewbb(BroadBand bbarray[])
    {
        for (int i = 0; i < 1; i++)
        {
            cout<<"Enter customer name:";
            cin>>bbarray->memberscustomerName;

            cout<<"Enter customer id:";
            cin>>bbarray->id;


            cout<<"Enter plan amount:";
            cin>>bbarray->planAmount;
        }
        

    }


    void registernewdth(DTH dtharray[])
    {
        for (int i = 0; i < 1; i++)
        {
            cout<<"Enter customer mobilenumber:";
            cin>>dtharray->customerMobileNumber;


            
            cout<<"Enter channel list:";
            cin>>dtharray->channelList;
        
            cout<<"Enter amount:";
            cin>>dtharray->balance;
            
        }
        

    }


    void displayconnection()
    {
        for (int i = 0; i < 3; i++)
        {
            bbarray[i].displaybb();
            cout<<endl;
        }
        
        for (int i = 0; i < 3; i++)
        {
            dtharray[i].displaydth();
            cout<<endl;
        }
    
        cout<<"total DTH connections:"<<dthcount<<endl;

        cout<<"total Broadband connections:"<<bbcount<<endl;
        

    }

};


int NetworkProvider::bbcount=0;
int NetworkProvider::dthcount=0;

 
int main()
{

    BroadBand bb[4]={{"Prakash",01,299.99},{"Anusha",02,2399.99},{"Priyansh",03,399.99}};
    DTH dth[4]={{74809,200,1299.90},{89617,300,2909.99},{96613,400,1299.99}};
    NetworkProvider nn(bb,dth);
    nn.displayconnection();
    return 0;
 
}