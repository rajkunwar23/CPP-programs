#include <iostream>
using namespace std;

class employee
{
    protected:int tenure;
    protected:int bsal;
    public:string employee_name;
          void basevalues()
          {
              cout<<"\n enter the tenure:=";
              cin>>tenure;

              cout<<"\n enter the basic salary:=";
              cin>>bsal;

              cout<<"\n enter employee name:=";
              getline(cin.ignore(),employee_name);
          }
};

class salary:protected employee
{
    public:float da,bonus,pf,tds,gs,gd,ns;

    public:void calculate_salary()
           {
               basevalues();
               da=0.1f*bsal;
               bonus=0.2f*bsal;
               pf=0.09f*bsal;
               tds=0.13f*bsal;
               gs=bsal+da+bonus;
               gd=pf+tds;
               ns=gs-gd;

               cout<<"\n net salary of the employee:="<<ns;
           }
};

class loan:private salary
{
    float eligible_amount;
    float required_amount,ans;

   public:void Loan()
        {
        calculate_salary();
        cout<<"\n enter your required amount:=";
        cin>>required_amount;

        if(tenure>2)
        {
            ans=ns*12;
            cout<<ans;
        if(ans<=100000)
        {
            eligible_amount=ans*0.5f;
        }
        else if(ans>1,00,000&&2,80,000)
        {
            eligible_amount=ans*0.4f;
        }
        else if(ans>2,50,000)
        {
            eligible_amount=ans*0.3f;
        }
        cout<<"\n eligible amount is:="<<eligible_amount;
        if(eligible_amount>=required_amount)
        {
            cout<<"\n your loan is accepted";
        }
        else
        {
            cout<<"\n your loan is rejected";
        }
        }
        else
        {
            cout<<"\n your loan is rejected";
        }
        }

};


int main()
{
    employee e;
    salary s;
    loan l;

    l.Loan();

    return 0;
}

