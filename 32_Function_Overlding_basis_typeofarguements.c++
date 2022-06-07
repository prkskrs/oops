#include<iostream>
#include<string>
 
using namespace std;
int value(int);
double value(int,float);
char value(char);
int value(int,int);
float value(int,double);
 
int main()
{
    cout<<"Integer : "<<value(10)<<endl;
    cout<<"Double : "<<value(13,2.43)<<endl;
    cout<<"Character : "<< value('a')<<endl;
    cout<<"Integer : "<< value(10,30)<<endl;
    cout<<"Float : "<< value(30,20.3)<<endl;
     
     
    return 0;
 
}

int value(int m)
{
    return m;
}

double value(int n,float o)
{
    return (n+o);
}


char value(char k)
{
    return k;
}

int value(int l,int m)
{
    return (l*m);
}


float value(int i,double j)
{
    return (2*i+j-10.8);
}



