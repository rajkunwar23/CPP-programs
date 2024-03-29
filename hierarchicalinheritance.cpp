#include <iostream>
using namespace std;

class base
{
    protected:int num1;

    public:void Insert()
           {
               cout<<"\n enter a base value:=";
               cin>>num1;
           }
};

class derived1:protected base
{
    int num2;

    public:void Insert()
    {
    void product()
    {
        int mul;

        mul=num1*num2;

        cout<<"\n product of base and derived value:="<<mul;
    }

};

    class derived2:public base
    {
        int num2;

        public:void getvalue()
        {
            cout<<"\n enter a derived value:=";
            cin>>num2;
        }

        void division()
        {
            int quo;

            quo=num1/num2;

            cout<<"\n quotient:="<<quo;
        }
    };

    int main()
    {
        derived1 d1;
        derived2 d2;

        d1.Insert();
        d1.product();

        d2.Insert();
        d2.getvalue();
        d2.division();

        return 0;
    }
