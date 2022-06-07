#include<iostream>
#include<string>
#include<stdio.h>
 
using namespace std;



class Date
{
    public:
    int dd;
    int mm;
    int yy;
    

    Date(int idd=0,int imm=0,int iyy=0)
    {
        dd=idd;
        mm=imm;
        yy=iyy;


    }
    




    void PrintDOB()
    {
        cout<<"DOB:"<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
     void PrintDOA()
    {
        cout<<"DOA:"<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
     void PrintDOG()
    {
        cout<<"DOG:"<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
    void PrintDOC()
    {
        cout<<"SOC:"<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }
      void PrintDOM()
    {
        cout<<"DOM:"<<dd<<"-"<<mm<<"-"<<yy<<endl;
    }

};



class Marks
{
    public:
    int isa1;
    int isa2;
    int esa;
    Date dom;

    Marks()
    {
        isa1=0;
        isa2=0;
        esa=0;
        dom=0;
    }

    Marks(int iisa1,int iisa2,int iesa,Date dom)
    {
        isa1=iisa1;
        isa2=iisa2;
        esa=iesa;
        dom.PrintDOM();
    }
    
    void PrintMarks()
    {
        cout<<"ISA1 : "<<isa1<<endl;
        cout<<"ISA2 : "<<isa2<<endl;
        cout<<"ESA : "<<esa<<endl;
    }
};



class Course
{
    public:
    string cname;
    Marks m;
    int credit;
    Date soc;
    static int CourseCount;

    Course()
    {
        cname="NaN";
        credit=0;
    }
    

    Course(string icname,int icredit,Marks m,Date soc)
    {
        cname=icname;
        credit=icredit;
        this->m=m;
    
        this->soc=soc;
        CourseCount++;

    }
    




    void PrintCourse()
    {
        cout<<endl<<"COURSE DETAIL:"<<endl;
        cout<<"Course Name : "<<cname<<endl;
        cout<<"Credit : "<<credit<<endl;
        soc.PrintDOC();
        m.PrintMarks(); 
        
        
        
        
        

    }

};









class Student
{
    string srn;
    string name;
    float total;
    Course c[3];
    Date dob;
    Date doa;
    Date dog;
    float sgp;
    public:
    static int StudentCount;


    
    Student()
    {
        srn="NaN";
        name="noname";
    }

    Student(string srn,string name, Course c[],Date dob,Date doa,Date dog)
    {
        this->srn=srn;
        this->name=name;
        this->dob=dob;
        this->doa=doa;
        this->dog=dog;
        for (int i = 0; i < 3; i++)
        {
            this->c[i]=c[i];
        }
        sgp=0;

        StudentCount++;

    }

    void CalSGP()
    {
        for (int i = 0; i < 3; i++)
    {
        float sgp=c[i].m.isa1+c[i].m.isa2+c[i].m.esa;

    }
    
    }

    
    void StudentDetail()
    {
        cout<<endl<<"STUDENT DETAIL:"<<endl;
        cout<<"SRN : "<<srn<<endl;
        cout<<"Name : "<<name<<endl;
        dob.PrintDOB();
        doa.PrintDOA();
        dog.PrintDOG();
        for (int i = 0; i < 3; i++)
        {
            c[i].PrintCourse();
        }

        
        //cout<<"SGPA : "<<sgp<<endl;
    }

    
   
};


int Student::StudentCount=0;
int Course::CourseCount=0;
 


int main()
{
    Student p; Course t;
    Date dom(12,05,2022),dob(22,11,2000),doa(01,01,2020),dog(01,06,2024),soc(12,05,2022);
    Marks m1(24,24,40,dom);
    Marks m2(25,25,45,dom);
    Marks m3(19,21,42,dom);
    Marks m4(18,15,40,dom);
   
Course c[3]={{"DSA",4,m1,soc},{"EDA",3,m2,soc},{"OSPP",5,m3,soc}};
    Course d[3]={{"POCD",3,m1,soc},{"EDA",3,m2,soc},{"OSPP",5,m3,soc}};
    Course e[3]={{"Networking",3,m1,soc},{"WebDev",3,m2,soc},{"OSPP",5,m3,soc}};
    Student s[3]={{"01fe20bcs304","MGumber",c,dob,doa,dog},{"01fe20bcs302","Prakash",d,dob,doa,dog},{"01fe20bcs212","Priyansh",e,dob,doa,dog}};
    for (int i = 0; i < 3; i++)
    {
    s[i].CalSGP();
    }
    
    for (int i = 0; i < 3; i++)
    {
       s[i].StudentDetail();  
       
    }

    cout<<"Total Courses Taken --> "<<t.CourseCount<<endl;
    cout<<"Total Students-->"<<p.StudentCount<<endl; 

   

     
     
    return 0;
 
}