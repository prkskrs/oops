#include<iostream>
#include<string>
#include<stdio.h>

 
using namespace std;

struct student
{
    int id;
    char name[30];

    void getstudent()
    {
        scanf("%d",&id);
        scanf("%s",name);
    }

    void showstudent()
    {
        printf("%d\n",id);
        printf("%s\n",name);
    }
};

 
int main()
{
    struct student s1;
    s1.getstudent();
    s1.showstudent();
    s1.showstudent();
     
     
    return 0;
 
}
/*dasd*/