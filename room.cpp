#include "room.h"

using namespace std;

void room::getdetails()
{
    cout<<"enter the length of the room:=";
    cin>>length;

    cout<<endl<<"enter the width of the room:=";
    cin>>width;
}

void room::roomarea()
{
    int area;

    area=2*(length+width);

    cout<<"area of the room:="<<area<<endl;

}

void room::roomvolume()
{
    int vol=length*width;

    cout<<"volume of the room:="<<vol<<endl;
}
