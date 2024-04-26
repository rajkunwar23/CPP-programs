#include <iostream>
#include <string.h>

using namespace std;

class date
{
private:int day;
        int month;
        int year;
       string Month;

public:

        date()
        {
         day=0;
         month=0;
         year=0;
        }

        date(int d,int m,int y)
        {
         day=d;
         month=m;
         year=y;
        }
      
        date(int d,string mon,int y)
        {
        day=d;
        Month=mon;
        year=y;
        }

       void putdata()
       {
        cout<<"entered date is:=";
        cout<<day;
        cout<<-month;
        cout<<-year; 
       }

       void putdata1()
       {
       cout<<"\n entered date is:=";
       cout<<day;
       cout<<"/";
       cout<<month;
       cout<<"/";
       cout<<year;
       }

       void putdata2(int d,string mont,int year)
       {
       cout<<"\n entered date is:=";
       cout<<d;
       cout<<"-";
       cout<<mont;
       cout<<"-";
       cout<<year;
       }

};

int main()
{
date d1;

int d,m,y;

cout<<"\n enter the day:=";
cin>>d;

cout<<"enter the month:=";
cin>>m;

cout<<"enter the year:=";
cin>>y;

date d2(d,m,y);
d2.putdata();
d2.putdata1();

string mon;
cout<<"\n\nenter the month in characters:=";
cin>>mon;

date d3;
d3.putdata2(d,mon,y);
return 0;
}
       
