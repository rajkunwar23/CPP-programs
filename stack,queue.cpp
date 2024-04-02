#include <iostream>
using namespace std;

class node
{
    public:int num;
           struct node*link;
};

class linkedlist
{
     public:node *Top;
            linkedlist()
            {
                Top=NULL;
            }

            void push(int);
            int pop();
            void display();

            node*createnode(int data)
            {
            node*newnode;
            newnode=new node;

            newnode->num=data;
            newnode->link=NULL;

            return newnode;
            }
};

void linkedlist::push(int data)
{
    node*temp;
    temp=createnode(data);

    if(temp==NULL)
    {
        cout<<"\n node not created";
        return;
    }
    else
    {
        if(Top==NULL)
        {
            Top=temp;
        }
        else
        {
            temp->link=Top;
            Top=temp;
        }
    }
}

int linkedlist::pop()
{
    node*temp;
    int val;

    //if(Top==NULL)
    //{
        //cout<<"\n stack underflow";
        //return;
    //}
    //else
    //{

        temp=Top;
        Top=temp->link;
         val=temp->num;
    //}
    return val;
    delete temp;
}


void linkedlist::display()
{
    //if(Top==NULL)
    //{
        //cout<<"\n stack underflow";
        //return;
    //}
    //else
    //{
        cout<<"\n stack elements:=";
        while(Top!=NULL)
        {
            cout<<Top->num;
            cout<<"\n";
            Top=Top->link;
        }
    //}
}

class node1
{
    public:int num;
           node1 *link;
};

class Linkedlist
{
    public:node1 *Front,*rear;
            Linkedlist()
            {
                Front=NULL;
                rear=NULL;
            }

            node1*createnode(int data)
            {
                node1*newnode;

                newnode=new node1;

                newnode->num=data;
                newnode->link=NULL;

                return newnode;
            };

            void enqueue(int data)
            {
                node1*temp;
                temp=createnode(data);

                if(temp==NULL)
                {
                    cout<<"\n node not created";
                    return;
                }
                else
                {
                    if(Front==NULL&&rear==NULL)
                    {
                        Front=temp;
                        rear=temp;
                    }
                    else
                    {
                        rear->link=temp;
                        rear=temp;
                    }
                }
            }

            int dequeue()
            {
                node1*temp;
                int val;
                if(Front==NULL||rear==NULL)
                {
                    cout<<"\n queue underflow";
                    return 0;
                }
                else
                {
                    temp=Front;
                    val=Front->num;

                    if(Front==rear)
                    {
                        Front=NULL;
                        rear=NULL;
                    }
                    else
                    {
                        Front=temp->link;
                    }
                     delete temp;
                    return val;

                }
            }

            void display()
            {
                node1 *current;
                if(Front==NULL||rear==NULL)
                {
                    cout<<"\n queue underflow";
                }
                else
                {
                    current=Front;
                    cout<<"\n elements of queue:=";
                    while(current!=NULL)
                    {
                        cout<<current->num;
                        cout<<"\n";
                        current=current->link;
                    }
                }
            }
};

int main()
{
    int data,choice,choice1,choice2;
    linkedlist l;
    Linkedlist L;

        cout<<"\n1]stack";
        cout<<"\n2]queue";

        cout<<"\n enter your choice:=";
        cin>>choice;

        switch(choice)
        {
            case 1:while(1)
                  {
                   cout<<"\n list of operations";
                   cout<<"\n1]push";
                   cout<<"\n2]pop";
                   cout<<"\n3]display";
                   cout<<"\n4]close";

                   cout<<"\n enter your choice:=";
                   cin>>choice1;

                   switch(choice1)
                   {
                    case 1:cout<<"\n enter the data:=";
                    cin>>data;
                    l.push(data);
                    break;

                    case 2:cout<<"\n deleted value:="<<l.pop();
                    break;

                    case 3:l.display();
                    break;

                    case 4:exit(0);

                    default:cout<<"\n make proper selection";
                    }
                   }

              case 2:while(1)
                    {
                        cout<<"\n list of operations";
                        cout<<"\n1]enqueue";
                        cout<<"\n2]dequeue";
                        cout<<"\n3]display";
                        cout<<"\n4]close";

                        cout<<"\n enter your choice:=";
                        cin>>choice2;

                        switch(choice2)
                        {
                            case 1:cout<<"\n enter the data:=";
                                   cin>>data;
                                   L.enqueue(data);
                                   break;

                            case 2:data=L.dequeue();
                                   cout<<"\n deleted value:="<<data;
                                   break;

                            case 3:L.display();
                                   break;

                            case 4:exit(0);

                            default:cout<<"\n make proper selection";
                        }
                    }
        }
}
