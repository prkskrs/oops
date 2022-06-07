#include<iostream>
#include<string>
 
using namespace std;


class Flight
{
    protected:
    int flightid;
    public:
    Flight(){flightid=0;}
    Flight(int flightid):flightid(flightid){}
};

class PassengerFlight: public Flight
{
    public:
    string destination;
    int tot_passenger;
    int per_pass_rev=300;
    float prev=0;
    PassengerFlight(){destination="noname",tot_passenger=0;per_pass_rev=0;}
    PassengerFlight(int flightid,string destination,int tot_passenger):Flight(flightid),destination(destination),tot_passenger(tot_passenger){}
    
    void pflight_rev()
    {
        prev=tot_passenger*per_pass_rev;


    }


    void p_disp()
    {
        cout<<"\nFlightid: "<<flightid<<endl<<"Destination: "<<destination<<"\t"<<endl<<"Total passengers: "<<tot_passenger<<endl<<"Revenue of passennger flight: "<<prev<<endl;
}
};


class CargoFlight: public Flight
{
    public:
    int no_of_boxes;
    int per_box_rev=60;
    float crev=0;
    

    CargoFlight(){no_of_boxes=0;per_box_rev=0;crev=0;}

    CargoFlight(int flightid,int no_of_boxes):Flight(flightid),no_of_boxes(no_of_boxes){}
    
    void cflight_rev()
    {
        crev=no_of_boxes*per_box_rev;
    }

    void c_disp()
    {
        cout<<"\nflightid: "<<flightid<<endl<<"Total Boxes: "<<no_of_boxes<<"\t"<<endl<<"Revenue oF cargo flight: "<<crev<<endl;
    }
};



class FlighCompany
{
    public:
    string company_name;
    CargoFlight c[3];
    PassengerFlight p[3];
    float totrev=0;
    FlighCompany(string company_name,CargoFlight c[],PassengerFlight p[]):company_name(company_name)
    {
        for (int i = 0; i < 3; i++)
        {
            this->c[i]=c[i];
        }
        for (int i = 0; i < 3; i++)
        {
            this->p[i]=p[i];
        }
        

    }
    void Totalrev()
    {
        for (int i = 0; i < 3; i++)
        {
            totrev=totrev+c[i].crev+p[i].prev;
        }
        
    }

    void cf_display()
    {
        cout<<"CompanyName: "<<company_name<<endl<<"total revenue: "<<102302<<endl;
    }
};
 
int main()
{
    CargoFlight c[3]={{1,32},{2,33},{3,66}};
    // for (int i = 0; i < 3; i++)
    // {
    //     c[i].cflight_rev();
    //     c[i].c_disp();
    // }
    
    
    
    PassengerFlight p[3]={{05,"patna",220},{12,"hubbali",320},{8,"bangalore",160},};
    // for (int i = 0; i < 3; i++)
    // {
    //     p[i].pflight_rev();
    //     p[i].p_disp();
    // }

     FlighCompany fc("Air India",c,p);
     fc.Totalrev();
     fc.cf_display();

     
     
    return 0;
 
}