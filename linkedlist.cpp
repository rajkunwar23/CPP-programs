#include "list.cpp"
using namespace std;

int main()
{
    linkedlist l;
    int num,choice,position;

    while(1)
    {
        cout<<endl<<"list of operations:=";
        cout<<endl<<"1]add at beginning";
        cout<<endl<<"2]add at end";
        cout<<endl<<"3]add at middle";
        cout<<endl<<"4]display";
        cout<<"\n5]delete at beginning";
        cout<<"\n 6]delete at end";
        cout<<"\n 7]delete at mid";
        cout<<endl<<"8]close";

    cout<<"\n enter your choice :=";
    cin>>choice;

    switch(choice)
    {
        case 1:cout<<"\n enter the num:=";
               cin>>num;
               l.add_at_begin(num);
               break;

        case 2:cout<<"\n enter the num:=";
               cin>>num;
               l.add_at_end(num);
               break;

        case 3:cout<<"\n enter the num:=";
               cin>>num;
               cout<<"\n enter the position:=";
               cin>>position;
               l.add_at_mid(num,position);
               break;

        case 4:l.node_traversal();
               break;

        case 5:l.del_at_begin();
               break;

        case 6:l.del_at_end();
               break;

        case 7:cout<<"\n enter the position:=";
               cin>>position;
               l.del_at_mid(position);
               break;


        case 8:exit(0);

        default :cout<<endl<<"make proper selection";
    }
    }
}
