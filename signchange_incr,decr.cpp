#include <iostream>
using namespace std;


class signchange
{
    private:int num1;
            int num2;

    public:void getdata()
           {
               cout<<"\n enter an integer value:=";
               cin>>num1;
           }

           void operator ++()
           {
               num1=num1*-1;
               cout<<"\n num1 value after signchange:="<<num1;

               if(num1>0)
               {
                   num1++;
               }
               else
               {
                   num1--;
               }

               cout<<"\n num1 after increment or decrement:="<<num1;
           }

};

int main()
{
    signchange s1;

    s1.getdata();
    ++s1;

    return 0;
}
