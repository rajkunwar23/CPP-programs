#include <iostream>
using namespace std;

class node
{
    public:int num;
           node *next;
};

class linkedlist
{
    public:node *head;

           linkedlist()
           {
             head=NULL;
           }

           void add_at_begin(int);
           void add_at_end(int);
           void add_at_mid(int,int);
           void node_traversal();
           void del_at_begin();
           void del_at_end();
           void del_at_mid(int);

           node *createnode(int data)
           {
               node *newnode;
               newnode=new node;

               newnode->num=data;
               newnode->next=NULL;

               return newnode;
           }
};
