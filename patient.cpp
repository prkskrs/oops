//#include"stdc++.h"
#include<iostream>
using namespace std;

class patient
{
    public:
    string name;
    int id;
    int ph;
    static int counter;
    
patient(string iname,int iph)
{
   name=iname;
   ph=iph;
   id=++counter;
}   
void display()
    {
        cout<<name<<"\t"<<id<<"\t"<<ph<<endl;

}
};

int patient::counter=0;


void search(patient a[])
{
    int r;
    cout<<"\nenter phone num:"<<endl;
    cin>>r;
    for (int i = 0; i < 5; i++)
    {
       if (a[i].ph==r)
       {
             cout<<a[i].name<<"\t"<<a[i].ph<<"\t"<<a[i].counter<<endl;
       }
       
}
    
} 


int main()
{
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

    patient a[5]={{"xxx",123456},{"yyy",201530},{"zzz",301523},{"uuu",981530},{"vvv",987654}};
   cout<<"NAME"<<"\t"<<"PH\t"<<"COUNTER\t"<<endl; 
for (int i = 0; i < 5; i++)
{
    cout<<a[i].name<<"\t   "<<a[i].ph<<"\t"<<a[i].id<<endl;


}

search(a);

    return 0;
}