#include <iostream>
using namespace std;

class geometry
{
    public://
           void area()
           {
               cout<<"hello i belong to area family";
           }

           int area(int side)
           {
               int area=side*side;
               cout<<"\n area of square:="<<area;
           }

           int area(int length,int breadth)
           {
               int area=length*breadth;
               cout<<"\n area of rectangle:="<<area;
           }

           float area(int radius,double pi)
           {
               float area=4*pi*radius*radius;
               cout<<"\n area of circle:="<<area;
           }

};

int main()
{
    geometry g;
    int side,length,breadth,radius;
    int choice=0;

    while(choice<4)
    {
        cout<<"\n list of areas";
        cout<<"\n 1]hello area message";
        cout<<"\n 2]area of square";
        cout<<"\n 3]area of rectangle";
        cout<<"\n 4]area of circle";
        cout<<"\n 5]close";

        cout<<"\n enter your choice:=";
        cin>>choice;

    switch(choice)
    {
        case 1:g.area();
               break;

        case 2:cout<<"\n enter the side of square:=";
               cin>>side;
               g.area(side);
               break;

        case 3:cout<<"\n enter the length:=";
               cin>>length;
               cout<<"\n enter the bre

               adth:=";
               cin>>breadth;
               g.area(length,breadth);
               break;

        case 4:cout<<"\n enter the radius of circle:=";
               cin>>radius;
               g.area(radius,3.14);
               break;

        default:cout<<"\n make proper selection";
    }
    }
    return 0;
}
