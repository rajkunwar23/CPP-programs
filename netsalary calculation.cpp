#include <iostream>
using namespace std;

class employee
{
    private:int tenure;
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

class salary:private employee
{
    float da,bonus,pf,tds,gs,gd,ns;

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

int main()
{
    employee e;
    salary s;

    s.calculate_salary();

    return 0;
}

