#include<iostream>
#include<string>
 
using namespace std;

class Student
{
    protected:
    string name="Prakash";
};

class Exam :virtual public Student
{
    protected:
    int mark=98;
    public:
    void display_mark()
    {
        cout<<"exam mark: "<<mark<<endl;

    }
};

class Project : public virtual Student
{
    protected:
    int p_mark=97;
    public:
    void display_proj_mark()
    {
        cout<<"exam mark: "<<p_mark<<endl;

    }
};

class Result : public Exam,public Project
{

    public:
    void display_result()
    {
        cout<<"result : "<<p_mark+mark<<endl;


    }
};


 
int main()
{
    Result r;
    r.display_mark();
    r.display_proj_mark();
    r.display_result();
    
     
     
    return 0;
 
}