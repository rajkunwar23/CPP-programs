#include "list.h"
using namespace std;


void linkedlist::add_at_begin(int data)
{
    node*temp;

    temp=createnode(data);

    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void linkedlist::add_at_end(int data)
{
    node *current;
    node *temp;

    temp=createnode(data);

    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        current=head;
        while(current->next!=NULL)
        {
    current=current->next;
        }
current->next=temp;
        }
    }


void linkedlist::add_at_mid(int data,int position)
{
    node*temp,*current;
    int count;

        temp=createnode(data);

        if(head==NULL)
        {
            head=temp;
        }
        else
        {
            current=head;
            for(count=0;count<position-1;++count)
            {
                if(current->next=NULL)
                {
                    puts("\n insufficient nodes");
                    return;
                }
                else
                    {
                current=current->next;
                    }
            }
            temp->next=current->next;
            current->next=temp;
        }
}

void linkedlist::node_traversal()
{
    node*current;
    if(head==NULL)
    {
        cout<<endl<<"list not created";
        return;
    }
    else
    {
        current=head;
        while(current!=NULL)
        {
            cout<<endl<<"node element:="<<current->num;
             current=current->next;
    }
    }
}

void linkedlist::del_at_begin()
{
    node *temp;

    if(head==NULL)
    {
        cout<<"\n node not created";
        return;
    }
    else
    {
        temp=head;
        head=temp->next;
    }
    delete temp;
}

void linkedlist::del_at_end()
{
    node *current,*previous;

    if(head==NULL)
    {
        cout<<"\n list not created";
        return;
    }
    else
    {
        current=head;
        while(current->next!=NULL)
        {
            previous=current;
            current=current->next;
        }
        previous->next=NULL;
    }
    delete current;
}

void linkedlist::del_at_mid(int position)
{
    node *current,*previous;
    int count;

    if(head==NULL)
    {
        cout<<"\n list not created";
        return;
    }
    else
    {
        current=head;
        for(count=0;count<=position-1;++count)
        {
            if(current->next==NULL)
            {
                cout<<"\n insufficient nodes";
                return;
            }
            else
            {
                previous=current;
                current=current->next;
            }
        }
        previous->next=current->next;
    }
    delete current;
}
