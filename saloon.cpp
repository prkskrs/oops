#include<iostream>
#include<string>
 
using namespace std;

class Customer
{
    public:
    int serial_no;
    string name;
    string service;
    double price;
    int avgtime;
    Customer(){}
    Customer(int serial_no,string name):serial_no(serial_no),name(name){}

}; 


class Saloon
{
    public:
    Customer c[6];
    static int totalcust;

    Saloon(Customer c[6])
    {
        for (int i = 0; i < 6; i++)
        {
            this->c[i]=c[i];
            totalcust++;
        }
        
        
    }

    void Services()
    {
        cout<<"Services\t\t"<<"Prices($)"<<endl;
        cout<<"Cut\t\t"<<"30.00"<<endl;
        cout<<"Shampoo\t\t"<<"15.00"<<endl;
        cout<<"Manicure\t\t"<<"50.00"<<endl;
        cout<<"Style\t\t"<<"48.00"<<endl;
        cout<<"Permanentt\t"<<"45.00"<<endl;
        cout<<"Trim\t\t"<<"20.00"<<endl;
        int ch;
        for (int i = 0; i < 6; i++)
        {cout<<"Enter Service for customer "<<i+1<<":";
        cin>>ch;
        
        switch (ch)
        {
        case 1:c[i].price=30;
               c[i].avgtime=15;
               c[i].service="cut";
            break;
        case 2:c[i].price=15;
               c[i].avgtime=10;
               c[i].service="shampoo";
               
            break;

        case 3:c[i].price=50;
               c[i].avgtime=40;
               c[i].service="manicure";
            break;

        case 4:c[i].price=48;
               c[i].avgtime=30;
               c[i].service="style";
            break;
            
        case 5:c[i].price=45;
               c[i].avgtime=35;
               c[i].service="permanent";
            break;
        
        case 6:c[i].price=20;
               c[i].avgtime=10;
               c[i].service="trim";
            break;
        

        
        default:
            break;
        }
        
    
    

        }
    }

    void printCustDetail()
    {
        cout<<"SI No\t"<<"Name\t"<<"Service\t"<<"Price($)t"<<"Time(mins)"<<endl;
        for (int i = 0; i < 6; i++)
        {
            cout<<c[i].serial_no<<"\t"<<c[i].name<<"\t"<<c[i].service<<"\t$"<<c[i].price<<"\t"<<c[i].avgtime<<"mins"<<endl;
        }
        
    }
        
    void totalcustomer()
    {
        cout<<"Total Customer Today : "<<totalcust<<endl;

    }

    void totalprice()
    {
        float sum=0;
        for (int i = 0; i < 6; i++)
        {
            sum+=c[i].price;

        }
        cout<<"Total earning today : $"<<sum<<endl;
        
    }
     void totaltime()
    {
        float timesum=0;
        for (int i = 0; i < 6; i++)
        {
            timesum+=c[i].avgtime;

        }
        cout<<"Total time taken at the end of the day : "<<timesum<<" mins"<<endl;
        
    }

};

int Saloon::totalcust=0;


int main()
{
    Customer c[6]={{1,"aman"},{2,"prakash"},{3,"anusha"},{4,"mohit"},{5,"ayushi"},{6,"priyansh"}};
    Saloon service(c);
    service.Services();
    service.printCustDetail();
    service.totalcustomer();
    service.totalprice();
    service.totaltime();

    
     
     
    return 0;
 
}