#include<iostream>
#include<string>
 
using namespace std;

class KletuStudent
{
    public:
    string name;
    string srn;
    int rollno;
    int sem;
    static int sem_count3;

    static int sem_count4;
    int flag;


    KletuStudent()
    {
        name="noname";
        srn="Nan";
        rollno=0;
        sem=0;

    }
    KletuStudent(string name,string srn,int rollno,int sem)
    {
        this->name=name;
        this->srn=srn;
        this->rollno=rollno;
        this->sem=sem;
        flag=0;
    
    }

    KletuStudent( KletuStudent &p1)
    {
        name=p1.name;
        srn=p1.srn+"_t";
        rollno=p1.rollno;
        sem=p1.sem;
        flag=1;

    }
    
    void promote()
    {

        if(sem==3 && flag==0)
        {
            sem_count3++;
            sem++;
        }
        else if(sem==4 && flag==0)
        {
            sem_count4++;
            sem++;
        }
    }
    
    void StudentDetail()
    {
        cout<<"Name: "<<name<<"\t"<<"SRN: "<<srn<<"\t"<<"Roll No: "<<rollno<<"\t"<<"Semester: "<<sem<<endl;
        
        
    }
    void totalpromoted()
    {
    cout<<"Students Promoted From 4th to 5th semester are : "<<sem_count4<<endl;
    cout<<"Students Promoted From 3rd to 4th semester are : "<<sem_count3<<endl;
    }
    

};

int KletuStudent::sem_count3=0;

int KletuStudent::sem_count4=0;
 
int main()
{
    //KletuStudent k1("prakash","01fe20bcs302",539,4);
  //  k1.StudentDetail();
    //KletuStudent k2=k1;
    //k2.StudentDetail();
    KletuStudent t;
    KletuStudent k[6]={{"prakash","01fe20bcs302",539,4},{"mohit","01fe20bcs304",541,4},
    {"priyansh","01fe20bcs212",539,3},{"ritik","01fe20bcs301",540,3},{"vaibhav","01fe20bcs255",513,4},k[0]};
    for (int i = 0; i < 6; i++)
    {
        k[i].promote();
        k[i].StudentDetail();
    }
    t.totalpromoted();

    
    
     
     
    return 0;
 
}