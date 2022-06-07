#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string name;
    int age;
    float salary;
    cin>>name>>age>>salary;
    try
    {
        if(name.length()>1 && age>0 && age<100 && salary>0)
        {
            throw name;
        }
        else
        {
            throw age;
        }

    }
    catch(string name)
    {
        cout << name <<age<<salary<< '\n';
    }
    catch(int age)
    {
        cout<<"sf";
    }

   
    
     
     
    return 0;
 
} 