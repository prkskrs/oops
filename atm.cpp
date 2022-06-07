#include<iostream>
#include<string>
int dcount=4;
int acount=4;
int ccount=4;
int chcount=4;
 
using namespace std;
class Customer
{
    int pin;
    float amount;
    char name[10];
    public:

    void set()
    {
        pin=0;
        amount=0;

    }

    void menu()
    {
        cout<<endl<<"Select An Option"<<endl;
        cout<<"2:Deposit"<<endl;
        cout<<"3:Withdraw"<<endl;
        cout<<"4:Check Balance"<<endl;
        cout<<"5:Check Account Details"<<endl;
        cout<<"6:exit"<<endl<<endl;
    

    }

    void create_account(Customer sbi[])
    {

        char iname[10];
        int ipin;
        // cout<<"Enter Your Name:";
        // cin>>iname;
        // cout<<"Create Your New Pin:";
        // cin>>ipin;
        

    FILE *atm;
    atm = fopen("atm.txt","r");
    
    if (atm== NULL)
    {
    printf("can not open file \n");
    
    }


    for (int i = 1; i <=10; i++)
    {
            fscanf(atm,"%d",&sbi[i].pin);
            fscanf(atm,"%s",sbi[i].name);
            fscanf(atm,"%f",&sbi[i].amount);
        
    }

    
    }

    void deposit()
    {
        int temp; 
        float new_balance; 
        cout<<"Enter Your Pin:"<<endl;
        cin>>temp;
        
        if(pin==temp)
        {
            cout<<"Enter Amount To Deposit:"<<endl;
            cin>>new_balance;
            amount=amount+new_balance;
            cout<<"Amount Deposited Successfully"<<endl;
        }

        else
        {
            dcount--;
            cout<<"You've entered the wrong pin. ("<<dcount<<")attempts left"<<endl;
        }
         
        
    }

    void withdraw()
    { 
        FILE *an;
    an = fopen("atm.txt","rw");
    
    if (an== NULL)
    {
    printf("can not open file \n");
    
    }
        int temp;
        float new_withdraw;
        cout<<"Enter Your Pin:"<<endl;
        cin>>temp;
        
        if(pin==temp)
        {
            cout<<"Enter Amount To Withdraw:"<<endl;
            cin>>new_withdraw;
            amount=amount-new_withdraw;
            cout<<"Amount Withdrawn Successfully"<<endl;
            fprintf(an,"%f",amount);
            //fwrite(&sbi[id].amount,1,sizeof(float),an);
            // fwrite(&p,sizeof(f),1,fp);
             
        }
        

        else
        {
            acount--;
            cout<<"You've entered the wrong pin. ("<<acount<<")attempts left"<<endl;
        }
    }

       
       void check_balance()
       {
        int temp; 
        cout<<"Enter Your Pin:"<<endl;
        cin>>temp;
        if(pin==temp)
        {
            cout<<"Amount : Rs "<<amount<<"/-"<<endl;
            
        }

        else
        {
            ccount--;
            cout<<"You've entered the wrong pin. ("<<ccount<<")attempts left"<<endl;
        }
        
        
    }


    void account_detail()
    {
        int temp; 
        cout<<"Enter Your Pin:"<<endl;
        cin>>temp;
        if(pin==temp)
        {

            cout<<"Name : "<<name<<endl;
            cout<<"Amount : Rs "<<amount<<"/-"<<endl;
            
        }

        else
        {
            chcount--;
            cout<<"You've entered the wrong pin. ("<<chcount<<")attempts left"<<endl;
        }
        
    }

     void exit()
    {
        cout<<"Thank You!"<<endl;
    }
         
};


 
int main()
{
    Customer sbi[10];
   int ch,id;

    cout<<endl<<"Enter ur customer id:"<<endl;
    cin>>id;
    sbi[id].create_account(sbi);
    
    do
    {
        sbi->menu();
        cout<<"Enter Choice:";
        cin>>ch;
        
        switch (ch)
        {
        case 1:break;
       case 2: sbi[id].deposit();
       break;
       case 3: sbi[id].withdraw();
       break;
       case 4: sbi[id].check_balance();
       break;
       case 5: sbi[id].account_detail();
       break;
       case 6:sbi[id].exit();
       exit(0);
       break;
    
    default: cout<<"INVALID CHOICE !"<<endl;
        break;
    }}while(ch!=6);
            


   
   
   
         return 0;
 
}