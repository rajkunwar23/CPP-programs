#include <iostream>
#include <cmath>
using namespace std;

class interestcalculate
{
    public:int interest(int,int,int);
           double interest(int,float,int);
};

int interestcalculate::interest(int P,int R,int T)
{
    float SI=(P*R*T)/100;

    cout<<"\n simple interest amount is:="<<SI;
}

double interestcalculate::interest(int p,float r,int t)
{
    double CI,S,A;

    S=pow(1+r/100,t);
    A=p*S;
    CI=A-p;

    cout<<"\n compound interest amount is:="<<CI;

}

int main()
{
    interestcalculate I;
    int p,r,t;
    int choice=0;

    while(choice<2)
    {
    cout<<"\n types of interest:=";
    cout<<"\n 1]simple interest";
    cout<<"\n 2]compound interest";
    cout<<"\n 3]close";

    cout<<"\n enter your choice:=";
    cin>>choice;

    switch(choice)
    {
        case 1:cout<<"\n enter the principal amount:=";
               cin>>p;
               cout<<"\n enter the rate of ineterest in %:=";
               cin>>r;
               cout<<"\n enter the time as the no. of years:=";
               cin>>t;
               I.interest(p,r,t);
               break;

        case 2:cout<<"\n enter the principal amount:=";
               cin>>p;
               cout<<"\n enter the rate of interest in %:=";
               cin>>r;
               cout<<"\n enter the time in the no. of years:=";
               cin>>t;
               I.interest(p,r,t);
               break;

        default:cout<<"\n make proper selection";

    }
    }

    return 0;
}
