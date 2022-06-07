// Consider a Publication company publishes the Publication{price, title, yearOfPublish, publicationType}, the work of a university faculty in the form video lecture and ebook. The video is described by unit of time (duration of play) and ebook is by numberOfPages. The publication company manages the initial list of publications, later the price of ebook is dropped by 10% due to the special offer given.
// Perform the following:

// i.  Identify objects and relationships and draw a class diagram.
// ii. It is said that, the price of the ebook is dropped by 10%, so the
//     program has to update the ebook’s price from the list.
// iii. Write a function to display the count of ebook and video from the list
//      and the total panrice of publications.
// iv. Identify at least two exceptions and manage them by applying user
//     defined exceptions

// Note: Assume missing data and functions if any to complete the scenario
#include<iostream>
#include<string>
 
 using namespace std;


class Publication
{
    public:
    string title;
    int year;
    string pubType;
    float price;
    float discount;
    Publication(){}
    Publication(string title,int year,string pubType,float price):title(title),year(year),pubType(pubType),price(price){}
    
};

class Ebook: public Publication
{
    public:
    int pages;
    Ebook(){}
    Ebook(string title,int year,string pubType,float price,int pages):Publication(title,year,pubType,price),pages(pages){}
};

class VideoLecture: public Publication
{
    public:
    int duration;
    VideoLecture(){}
    VideoLecture(string title,int year,string pubType,float price,int duration):Publication(title,year,pubType,price),duration(duration){}
};


class PublicationCompany
{
    public:
    string comName;
    string location;
    float totalPrice;
    Publication p[8];
    static int countEbook;
    static int countVideo;
    PublicationCompany(){}
    PublicationCompany(string comName,string location):comName(comName),location(location){}
    void PublicationDetails()
    {
        
        for (int i = 0; i < 8; i++)
        {
            cout<<p[i].title<<"\t"<<p[i].year<<"\t"<<p[i].pubType<<"\t\t"<<p[i].price<<endl;
        }
        
        
    }

    void DiscountUpdate()
    {
        for (int i = 0; i < 8; i++)
        {
            try
            {
                if(p[i].pubType=="Ebook")
                {
                    p[i].price=p[i].price-0.1*p[i].price;
                }
                else
                {
                    throw(10);
                }
            }
            catch(const int x)
            {
                cout<<"";
            }
            
        }
        
        

    }
    void count()
    {
    
            try
            {
                for (int i = 0; i < 8; i++)
                {
                    if(p[i].pubType=="Ebook")
                     {
                        ++countEbook;

                     }
            }
                throw(countEbook);
            }
            catch(const int eb)
            {
                cout<<"\nTotal Ebooks Count "<<eb<<endl;
            }
            
            try
            {
                for (int i = 0; i < 8; i++)
                {
                    if(p[i].pubType=="Video")
                     {
                        ++countVideo;

                     }
            }
                throw(countVideo);
            }
            catch(const int eb)
            {
                cout<<"Total Video Count "<<eb<<endl;
            }
            
        }

    void totalprice()
    {
        totalPrice=0;
        for (int i = 0; i < 8; i++)
        {
            totalPrice+=p[i].price;
            
        }
        cout<<"\nTotal Price: Rs "<<totalPrice<<endl;
    

        
    }

    void displayEBook()
    {
        cout<<"\n\n-----------------------Total Ebooks-----------------------"<<endl;
        for (int i = 0; i < 8; i++)
        {
            try
            {
                if(p[i].pubType=="Ebook")
                {
                    cout<<p[i].title<<"\t"<<p[i].year<<"\t"<<p[i].pubType<<"\t\t"<<p[i].price<<endl;
                }
                else
                {
                    throw (0);
                }
            }
            catch(const int e)
            {
                cout<<"";
            }
            
        }
        
    }
        
        

    };


int PublicationCompany::countEbook=0;
int PublicationCompany::countVideo=0;

void header(PublicationCompany pc)
{
    cout<<"Publication Company Name: "<<pc.comName<<endl;
    cout<<"Address:"<<pc.location<<endl;
    cout<<"\nTITLE\t\t\t"<<"Year\t"<<"PubType\t"<<"\tPrice(Rs)\t"<<endl;
}
 
int main()
{
    Ebook p1("The Wolf of the street",1998,"Ebook",1299,456);
    Ebook p2("Gulliver's trade",2002,"Ebook",3999,896);
    Ebook p3("man with loopholes",2004,"Ebook",1599,299);
    Ebook p4("who are you and why?",2006,"Ebook",999,888);
    Ebook p5("atomic world inside",1995,"Ebook",1999,1200);
    VideoLecture p6("Bengal gazeete news",1976,"Video",1000,5);
    VideoLecture p7("forbes Magazine 2022",2022,"Video",1999,8);
    VideoLecture p8("my grandmother is best",2012,"Video",3599,10);
    Publication *pt[8]={&p7,&p6,&p1,&p4,&p5,&p3,&p7,&p2};
    PublicationCompany pc("'Penguin Random House'"," London,NewYork");
    pc.p[0]=*pt[0];
    pc.p[1]=*pt[1];
    pc.p[2]=*pt[2];
    pc.p[3]=*pt[3];
    pc.p[4]=*pt[4];
    pc.p[5]=*pt[5];
    pc.p[6]=*pt[6];
    pc.p[7]=*pt[7];
    cout<<"\n\n----------------------BEFORE DISCOUNT----------------------"<<endl;
     header(pc);
    pc.PublicationDetails();
    pc.totalprice();
    cout<<"\n\n-------------UPDATED PRICE OF EBOOK AFTER 10% DISCOUNT-------------"<<endl;
    pc.DiscountUpdate();
    header(pc);
    pc.PublicationDetails();
    cout<<"\n****Price after Discount****";
    pc.totalprice();
    //Ebook Display
    pc.displayEBook();
    //Count of EBook and Video
    pc.count();
     
     
    return 0;
 
}