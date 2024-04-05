#include <iostream>
using namespace std;

int stacks[5];
int top1=-1;
int top2=-1;

class stackfriend
{
    int arr[5];
    public:void init()
           {
               int i;
               top1=0;
               cout<<"\n enter elements of array:=";
               for(i=0;i<5;i++)
               {
                   cin>>arr[i];
               }
           }

           friend void push(stackfriend);
           friend int pop(stackfriend);
           friend void display(stackfriend);

};

void push(stackfriend s)
{
    if(top1==5)
    {
        cout<<"\n stack is full";
        return;
    }
    else
    {
        stacks[++top2]=s.arr[top1++];
    }

}

int pop(stackfriend s)
{
    int val;

    if(top2==-1)
    {
        cout<<"\n stack is empty";
        return 0;
    }
    else
    {
        val=stacks[top2--];
    }
    return val;
}

void display(stackfriend s)
{
    int j;
    if(top2==-1)
    {
        cout<<"\n stack is empty";
        return;
    }
    else
    {
        cout<<"\n elements of stack:=";
        for(j=top2;j>=0;j--)
        {
            cout<<stacks[j];
            cout<<"\n";
        }
    }
}

int main()
{
    stackfriend sf;
    int choice=0,data;
    int size;

    sf.init();

    while(choice<4)
    {
        cout<<"\n stack operations:=";
        cout<<"\n1]push";
        cout<<"\n2]pop";
        cout<<"\n3]display";
        cout<<"\n4]close";

        cout<<"\n enter your choice :=";
        cin>>choice;

        switch(choice)
        {
            case 1:push(sf);
                   break;

            case 2:cout<<"\n popped value is:="<<pop(sf);
                   break;

            case 3:display(sf);
                   break;

            default:cout<<"\n make proper selection";
        }
    }
    return 0;
}
