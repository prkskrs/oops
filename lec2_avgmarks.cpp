#include<iostream>
#include<string>
 
using namespace std;

class StudentMarks
{
    private:
    int marks[5];
    public:
    void getmarks()
    {
        float sum=0;
        for (int i = 0; i < 5; i++)
        {
            cout<<"Enter Subject "<<i+1<<" Marks:" <<endl;
            scanf("%d",&marks[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            sum=sum+marks[i];
        }
        float avg=sum/5;
        cout<<"Average Marks : "<<avg<<endl;
        
    }
    


};
 
int main()
{
    StudentMarks s[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter Student "<<i+1<<" Marks:" <<endl;
        s[i].getmarks();
    }
    
     
     
    return 0;
 
}