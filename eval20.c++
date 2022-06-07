#include<iostream>
#include<string>
 
using namespace std;

class PHC;
class WHO;

class Vaccine
{
    private:
    string vname;
    int vid;
    int count;
    string dosetype;
    public:
    friend class PHC;
    friend class WHO;
    Vaccine(){}
    Vaccine(string vname,string dosetype,int vid,int count):vname(vname),vid(vid),count(count),dosetype(dosetype){}

};

class firstdose :public Vaccine
{
    public:
    firstdose(string vname,string dosetype,int vid,int count):Vaccine(vname,dosetype,vid,count){}
};

class seconddose :public Vaccine
{
    public:
    seconddose(string vname,string dosetype,int vid,int count):Vaccine(vname,dosetype,vid,count){}
};

class PHC
{
    private:
    string name;
    string address;
    Vaccine *v[2];
    int vaccineused;
    public:
    PHC(){}
    PHC(string name,string address,Vaccine *v[2]):name(name),address(address)
    {
        for (int i = 0; i < 2; i++)
        {
            this->v[i]=v[i];
        }
        
    }
    void printde()
    {
        //cout<<v[1]->count<<endl;
    }
    friend class Vaccine;
    friend class WHO;
};


class WHO
{
   
    public:
    PHC *p[2];
    WHO(){}
    WHO(PHC *p[2])
    {
        for (int i = 0; i < 2; i++)
        {
            this->p[i]=p[i];
        }
        
    }
    void totalvaccineused()
    {
        int tot=0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                tot+=p[i]->v[j]->count;

            }
            
            
        }
        cout<<"TOTAL VACCINE USED: "<<tot<<endl;
        
        
        
    }
    void statsoffrstandseconddose()
    {
        int fc=0,sc=0;
        for (int i = 0; i < 2; i++)
        {

            for (int j = 0; j < 2; j++)
            {
                if (p[i]->v[j]->dosetype=="first")
                {
                    fc+=p[i]->v[j]->count;
                }
                else 
                {
                    sc+=p[i]->v[j]->count;
                }
                
            }
            
        }
        cout<<"FirstDose : "<<fc<<endl;
        cout<<"SecondDose : "<<sc<<endl;
        

    }
    friend class PHC;
};


int main()
{
    firstdose v1("covidshield","first",1,4000);
    seconddose v2("covaxin","second",2,2000);
     
    seconddose v3("covat","second",3,12000);
    seconddose v4("covi","second",4,8000);
    Vaccine *vp1[2]={&v1,&v2};
    Vaccine *vp2[2]={&v3,&v4};
    PHC p1("HEALTHCENTRE1","HUBLI",vp1);
    PHC p2("HEALTHCENTRE2","DHARWAD",vp2);
    PHC *p[2]={&p1,&p2};
    WHO w(p);
    w.totalvaccineused();
    w.statsoffrstandseconddose();

    //p1.printde();
    

     
    return 0;
 
}