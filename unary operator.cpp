#include <iostream>
using namespace std;

class unary
{
    private:int num1;

    public:  unary()
             {
              num1=4;
             }

             void operator++()
             {
                 int sum;

                 sum=++num1+num1++;
                 cout<<"\n sum of data:="<<sum;
                 cout<<"\n value of num1:="<<num1;
             }
};

int main()
{
    unary u1,u2;

    ++u1;
    ++u2;

    return 0;
}
