#include <iostream>
using namespace std;

class phonebill
{
    private:int no_of_calls;
            int totalbill;

    public:void phone_bill(int);
};

void phonebill::phone_bill(int no_of_calls)
{
    cout<<"\n no. of calls received:=";
    cin>>no_of_calls;

    float amount,total_amount;

    if(no_of_calls==50)
    {
        amount=0;
    }
    else if((no_of_calls>=51)&&(no_of_calls<=150))
    {
        amount=((no_of_calls-50)*1);

    }
    else if((no_of_calls>=151)&&(no_of_calls<=250))
    {
        amount=((no_of_calls-150)*1.50)+100;
    }
    else
    {
        amount=((no_of_calls-250)*2)+250;
    }
    total_amount=200+amount;
    cout<<"total bill :="<<total_amount;

}

int main()
{
    int no_of_calls;
    phonebill p;

    p.phone_bill(no_of_calls);

    return 0;

}
