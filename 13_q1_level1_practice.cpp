// Assign and print the roll number, phone number and address of two students having names 
// "Sam" and "John" respectively by creating two objects of the class 'Student'.

#include<iostream>
#include<string>
 
using namespace std;
class student{
    
    private:
    string name;
    int rollno;
    string address;
    int phn;
    public:

    student(string iname,int irollno,string iaddress,int iphn)
    {
        name=iname;
        rollno=irollno;
        address=iaddress;
        phn=iphn;
        cout<<"first function is here in student constructor"<<endl;
        

    }
     void display()
     {
         cout<<name<<endl<<rollno<<endl<<address<<endl<<phn<<endl;

         

         
     }

};
int main()
{
    student prakash("prakash",8,"hajipur",232323);
    prakash.display();



     
     
    return 0;
 
}