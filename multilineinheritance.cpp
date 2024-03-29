#include <iostream>
using namespace std;

class primary
{
    protected:int num1;
};

class secondary:protected primary
{
    protected:int num2;
};

class derived:private secondary
{
    public:void basevalues()
           {
               cout<<"\n enter a primary base value:=";
               cin>>num1;

               cout<<"\n enter a secondary base value:=";
               cin>>num2;
           }

           void compare()
           {
               if(num1==num2)
               {
                   cout<<"\n both the values are same";
               }
               else
               {
                   cout<<"\n both the values are different";
               }
           }
};

int main()
{
    derived d;

    d.basevalues();
    d.compare();

    return 0;
}
