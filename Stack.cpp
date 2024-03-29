#include <iostream>
using namespace std;

class stackoperation
{
    private:int num[5];
            int top=-1;

    public:void operator ++()
           {
               int data;

               cout<<"\n enter your data:=";
               cin>>data;

               if(top==43)
               {
                   cout<<"\n stack overflow";
                   return ;
               }
               else
               {
                   num[++top]=data;
               }
           }

           void operator --()
           {
               int val;

               if(top==-1)
               {
                   cout<<"\n stack underflow";
                   return ;
               }
               else
               {
                   val=num[top--];
               }
               cout<<"\n popped value:="<<val;
           }

           void display()
           {
               int i;

               if(top==-1)
               {
                   cout<<"\n stack underflow";
                   return;
               }
               else
               {
                   cout<<"\n stack elements:=";
                   for(i=top;i>=0;--i)
                   {
                       cout<<num[i];
                       cout<<"\n";
                   }
               }

           }
};

int main()
{
    stackoperation s;
    int choice=0,data;

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
            case 1:++s;
                   break;

            case 2:--s;
                   break;

            case 3:s.display();
                   break;

            default:cout<<"\n make proper selection";
        }
    }
    return 0;
}

