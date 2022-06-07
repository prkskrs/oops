#include<iostream>
#include<string>
 
using namespace std;


int count_serviced_vehicle=0;


class servicing
{
    public:
    string servicetype;
    float servicecharge;
    servicing(){}
    servicing(string servicetype,float servicecharge):servicetype(servicetype),servicecharge(servicecharge)
    {
    }


};

class oil_servicing:public servicing
{
    public:
    string oil_type;
    float charge_per_litre=90;
    oil_servicing(){}
    oil_servicing(string servicetype,float servicecharge,string oil_type):servicing(servicetype,servicecharge),oil_type(oil_type){}



};

class full_servicing:public servicing
{
    public:
    full_servicing(){}
    full_servicing(string servicetype,float servicecharge):servicing(servicetype,servicecharge){}


};

class painting:public servicing
{
    public:
    painting(){}
    painting(string servicetype,float servicecharge):servicing(servicetype,servicecharge){}

};












class vehicle
{
    public:
    int vehno;
    string vehtype;
    int wheel;
    servicing *sv;
    vehicle(){}
    vehicle(int vehno, string vehtype,int wheel):vehno(vehno),vehtype(vehtype),wheel(wheel){}


};

class two_wheel:public vehicle
{
    public:
    string model;
    two_wheel(int vehno, string vehtype,int wheel,string model):vehicle(vehno,vehtype,wheel),model(model){}
    void t_detail()
    {
        cout<<endl<<vehno<<"\t"<<vehtype<<"\t"<<wheel<<"\t"<<model<<endl;
         cout<<"SevicingTYpe: "<<sv->servicetype<<endl;
    }


};

class three_wheel:public vehicle
{
    public:
    string model;
    three_wheel(int vehno, string vehtype,int wheel,string model):vehicle(vehno,vehtype,wheel),model(model){}
    void th_detail()
    {
        cout<<endl<<vehno<<"\t"<<vehtype<<"\t"<<wheel<<"\t"<<model<<endl;
         cout<<"SevicingTYpe: "<<sv->servicetype<<endl;
    }


};

class four_wheel:public vehicle
{
    public:
    string model;
    four_wheel(int vehno, string vehtype,int wheel,string model):vehicle(vehno,vehtype,wheel),model(model){}
   void f_detail()
    {
        cout<<endl<<vehno<<"\t"<<vehtype<<"\t"<<wheel<<"\t"<<model<<endl;
         cout<<"SevicingTYpe: "<<sv->servicetype<<endl;
    }


};


class vehicle_service_center
{
    public:
    vehicle vsc[3];
    servicing s;
    string service_center_name;
    float total_earning;
    vehicle_service_center(){}
    vehicle_service_center(string service_center_name):service_center_name(service_center_name){
       }
    void franchise_detail()
    {
        cout<<endl<<"Franchise Name : "<<service_center_name<<endl;
    }
    void vehicles()
    {
        cout<<"---------Vehicles for servicing in this franchise---------:"<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout<<vsc[i].vehno<<"\t"<<vsc[i].vehtype<<"\t"<<vsc[i].wheel<<endl;
             count_serviced_vehicle++;
           
        }
        
    }

    void totalEarned()
    {
        total_earning=0;
        for (int i = 0; i < 3; i++)
        {
            total_earning+=vsc[i].sv->servicecharge;
        }
        cout<<"total earning: "<<total_earning<<endl;
        
    }

    

};

void maxprofitable(vehicle_service_center vsc[])
{
    int l=0;
    float max=0;
    for (int i = 0; i < 2; i++)
    {
        max=vsc[0].total_earning;
        if (vsc[i].total_earning>max)
        {
            max=vsc[i].total_earning;
            l=i;
        }
        
    }
    cout<<"\n---------Total Profitable Franchise---------"<<endl;
    cout<<"Franchise Name: "<<vsc[l].service_center_name<<endl;
    cout<<"Total Earnings: "<<max<<endl;
    
}


 
int main()
{
    vehicle_service_center v[2]={{"prakash Automobiles"},{"priyansh automobiles"}};
    oil_servicing os("oiling",890.99,"petrol");
    full_servicing fs("fullserv",9990.99);
    painting pt("painting",10000.99);

    two_wheel t(123,"bike",2,"ninja");
    three_wheel th(789,"auto-rickshaw",3,"piaggio");
    four_wheel f(533,"car",4,"fortuner");

    two_wheel t1(123,"bike",2,"ninja");
    two_wheel th1(9,"bike",2,"hayabusa");
    four_wheel f1(533,"car",4,"fortuner");
    t.sv=&os;
    th.sv=&fs;
    f.sv=&pt;
    t1.sv=&os;
    th1.sv=&os;
    f1.sv=&pt;
    
    v[0].vsc[0]=t;
    v[0].vsc[1]=th;
    v[0].vsc[2]=f;
    v[1].vsc[0]=t1;
    v[1].vsc[1]=th1;
    v[1].vsc[2]=f1;
    
    t.t_detail();
    th.th_detail();
    f.f_detail();
    v[0].franchise_detail();

    v[0].vehicles();

    v[0].totalEarned();
    
    v[1].franchise_detail();
    v[1].vehicles();

    v[1].totalEarned();
    cout<<"Total Vehicles Serviced :"<<count_serviced_vehicle<<endl;
    maxprofitable(v);
     
    return 0;
 
}