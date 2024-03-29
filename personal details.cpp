#include <iostream>
using namespace std;

class Tenth
{
    string schoolname;
    float spercentage;

    public:Tenth(string sn,float sp)
           {
               this->schoolname=sn;
               this->spercentage=sp;
           }

           string getschoolname();
           float getschoolper();
};

class Twelveth
{
    string clg_name,trade;
    float cpercentage;

    public:Twelveth(string cn,string t,float cp)
           {
               this->clg_name=cn;
               this->trade=t;
               this->cpercentage=cp;
           }

           string getclgname();
           string gettrade();
           float getclgper();
};

class personal:public Tenth,public Twelveth
{
    string name,address,hobby;
    int age;

    public:personal(string n,string A,string h,int a,string sn,float sp,string cn,string t,float cp):Tenth(sn,sp),Twelveth(cn,t,cp)
           {
               this->name=n;
               this->address=A;
               this->hobby=h;
               this->age=a;
           }

           string getname();
           string getaddress();
           string gethobby();
           int getage();
};

int main()
{
    string n,A,h,sn,cn,t;
    int a;
    float sp,cp;

    cout<<"\n enter your full name:=";
    getline(cin,n);

    cout<<"\n enter your address:=";
    getline(cin,A);

    cout<<"\n enter your hobby:=";
    getline(cin,h);

    cout<<"\n enter your age:=";
    cin>>a;

    cout<<"\n enter your school name:=";
    getline(cin.ignore(),sn);

    cout<<"\n enter your percentage:=";
    cin>>sp;

    cout<<"\n enter your college name:=";
    getline(cin.ignore(),cn);

    cout<<"\n enter your trade:=";
    getline(cin,t);

    cout<<"\n enter your percentage:=";
    cin>>cp;


    personal p(n,A,h,a,sn,sp,cn,t,cp);

               cout<<"\n Personal details\n";
               cout<<"\n Name:="<<p.getname();
               cout<<"\n Address:="<<p.getaddress();
               cout<<"\n\n Other details\n";
               cout<<"\n Hobby:="<<p.gethobby();
               cout<<"\n Age:="<<p.getage();
               cout<<"\n\n Educational Qualification\n";
               cout<<"\n School Name:="<<p.getschoolname();
               cout<<"\n Percentage:="<<p.getschoolper();
               cout<<"\n College Name:="<<p.getclgname();
               cout<<"\n Percentage:="<<p.getclgper();
               cout<<"\n Trade:="<<p.gettrade();

    return 0;
}

string Tenth::getschoolname()
{
    return schoolname;
}

float Tenth::getschoolper()
{
    return spercentage;
}

string Twelveth::getclgname()
{
    return clg_name;
}

string Twelveth::gettrade()
{
    return trade;
}

float Twelveth::getclgper()
{
    return cpercentage;
}

string personal::getname()
{
    return name;
}

string personal::getaddress()
{
    return address;
}

string personal::gethobby()
{
    return hobby;
}

int personal::getage()
{
    return age;
}
