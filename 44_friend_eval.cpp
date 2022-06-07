#include<iostream>
#include<string>
 
using namespace std;

class Teacher;

class Course
{
    public:
    string cname;
    int mark;
    Course(){}
    Course(string cname):cname(cname){}


};
class Student
{
    public:
    string name;
    string usn;
    Course c;
    string stype;
    Student(){}
    Student(string name,string usn,Course c, string stype):name(name),usn(usn),stype(stype)
    {
         this->c=c;
    }
    void detailStudent()
    {
        cout<<"marks of "<<name<<endl;
        cout<<name<<"\t"<<usn<<endl;
    }
    
};

class SchoolStudent:public Student
{
    public:
    SchoolStudent(string name,string usn,Course c,string stype):Student(name,usn,c,stype){}

    
};


class UGStudent:public Student
{
    public:
    UGStudent(string name,string usn,Course c,string stype):Student(name,usn,c,stype){}
    
    friend void givefeedback(Teacher t,Student );
};

class Teacher
{
   
    public:
     string feedback;
    int empid;
    string name;
    
    Student s;
    Course c;
    //Teacher(){}
    Teacher(int empid,string name,Course c,Student s):empid(empid),name(name)
    {
        this->c=c;
        this->s=s;

    }
    void detailTeacher()
    {
        cout<<empid<<"\t"<<name<<"\n"<<"course name"<<c.cname<<"\nfeedback:"<<feedback<<endl;
        
    }
    friend class Student;
    friend void giveMarks(SchoolStudent);
    friend void giveMarks(UGStudent );
    

    
    
};



class Parent
{
    public:
    string name;
    Student child;
    Parent(){}
    Parent(string name,Student child):name(name)
    {
        this->child=child;
    }
    void parentDetail()
    {
        cout<<"\nparent detail\n";
        cout<<"Parent name: "<<name<<"\n"<<"child name:"<<child.name<<endl;
    }

    friend class Teacher;

    void printTdata(Teacher t)
    {
      cout<<"\n------parent viewing teacher detail------\n\n"; 
      cout<<t.empid<<"\t"<<t.name<<"\n"<<"course name"<<t.c.cname<<"\nfeedback:"<<t.feedback<<endl;
    }

    void printSdata(Student s)
    {
     cout<<"\n------parent viewing child detail-------\n\n"; 
     cout<<"coursename and marks:\t"<<s.c.cname<<"\t"<<s.c.mark<<endl;
    }



};


void givefeedback(Teacher &t,Student &s)
{
    if (s.stype=="UG")
    {
        cout<<"give feedback here to "<<t.name<<":" ;
    cin>>t.feedback;
    }
    else
    {
       t.feedback="YOU CANNOT GIVE FEEDBACK";
    }
    }
    
    

void giveMarks(Student &c)
{
    cout<<"Enter mark: ";
    cin>>c.c.mark;
    
}




int main()
{
    Student s,t;
    Course c1("DSA");
    Course c2("OOPS");
    SchoolStudent s1("Prakash","01fe20bcs302",c1,"School");
    UGStudent s2("Mohit","01fe20bcs304",c2,"UG");
    s=s1;
    Teacher t1(22,"Somshekhar Sir",c1,s);
    t=s2;
    Teacher t2(23,"Mahesh Sir",c2,t);
    cout<<"---------Now, You re student give feedback---------"<<endl;
    givefeedback(t1,s);
    givefeedback(t2,t);
    
    cout<<"---------Now ,You re teacher give marks---------"<<endl;
    giveMarks(s1);
    giveMarks(s2);
    



    Parent p("manorama",s1);
    p.parentDetail();
    //parent viewing teacher and student data
    p.printTdata(t1);
    p.printSdata(s1);

    //2nd parent viewing teacher and student data
    Parent p2("sanjay",s2);
    p.printTdata(t2);
    p.printSdata(s2);
   

    
  

    return 0;
}