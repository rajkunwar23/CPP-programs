#include <iostream>
using namespace std;

class data
{
    public:virtual void process(int num1,int num2)=0;
           //{
               //cout<<"\n first variable value:="<<num1;
               //cout<<"\n second variable value:="<<num2;
           //}
};

class addition:public data
{
    public:virtual void process(int num1,int num2)
           {
               int sum=num1+num2;
               cout<<"\n sum of two variables:="<<sum;
           }
};

class substraction:public data
{
    public:void process(int num1,int num2)
           {
               int sub=num1-num2;
               cout<<"\n difference of two variables:="<<sub;
           }
};

int main()
{
    data *d;
    addition a;
    d=&a;
    d->process(20,22);

    substraction s;
    d=&s;
    d->process(23,20);

    return 0;
}
