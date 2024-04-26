#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:string product;
       node *next;
};

class linkedlist
{
public:node *head;

       linkedlist()
       { 
        head=NULL;
       }


       node* createnode(string Product)
       {
        node *newnode;
        newnode=new node;
 
        newnode->product=Product;
        newnode->next=NULL;

        return newnode;
       }

       void add_at_end(string Product)
       {
        node *current;
        node *temp;
        temp=createnode(Product);

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

        void search(string Product)
        {
         node *current;
         current=head;
         char flag='n';

         while(current!=NULL)
        { 
         if(Product==(current->product))
         { 
          flag='y';
         }
         current=current->next;
        }
        if(flag=='y')

        {
        cout<<"\n product found";
        }
        else
        {
        cout<<"\n product not found";
        }
       }

       void remove(string Product)
       {
        node *temp=head;
        node *previous=NULL;

        while(temp!=NULL && temp->product!=Product)
        {
        previous=temp;
        temp=temp->next;
        }
        if(temp==NULL)
        {
        cout<<"\n product not found in the list";
        return;
        }
        if(previous==NULL)
        {
        head=temp->next;
        }
        else
        {
        previous->next=temp->next;
        }

        delete temp;
       }


       void display()
       {
       node *current;
       if(head==NULL)
       {
        cout<<"\n list is empty";
        return;
       }
       else
       {
        current=head;
        cout<<"\n list of items:=";
        while(current!=NULL)
        {
        cout<<current->product;
        cout<<"\n";
        current=current->next;
        }
       }
       }

};


int main()
{
linkedlist l;
int choice;
string Product;

while(1)
{
cout<<"\nlist of operations on product bill:";
cout<<"\n 1]insert";
cout<<"\n 2]delete";
cout<<"\n 3]search";
cout<<"\n 4]Display";
cout<<"\n 5]close";

cout<<"\n enter your choice:=";
cin>>choice;

switch(choice)
{
case 1:cout<<"\n enter your product name:=";
       cin>>Product;
      l.add_at_end(Product);
       break;

case 2:cout<<"\n enter the product you want to delete:=";
       cin>>Product;
       l.remove(Product);
       break;

case 3:cout<<"\n enter the product you want to search:=";
       cin>>Product;
       l.search(Product);
       break;

case 4:l.display();
       break;

case 5:exit(0);

default:cout<<"\n make proper selection";
}
}

return 0;

}

