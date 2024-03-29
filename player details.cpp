#include <iostream>
using namespace std;

class player
{
    protected:string player_name;
              int no_of_matches;

    public:void Insert()
           {
               cout<<"\n enter player name:=";
               getline(cin.ignore(),player_name);

               cout<<"\n enter no. of matches:=";
               cin>>no_of_matches;
           }
};

class cricket:protected player
{
    string type;
    int wickets,runs;

    public:void Insert()
           {
               player::Insert();

               cout<<"\n enter the type of cricket player:=";
               getline(cin.ignore(),type);

               if(type=="batsman")
               {
                   cout<<"\n enter the no. of runs:=";
                   cin>>runs;
               }
               else if(type=="bowler")
               {
                   cout<<"\n enter the no. of wickets:=";
                   cin>>wickets;
               }
               else if(type=="allrounder")
               {
                   cout<<"\n enter the no. of runs:=";
                   cin>>runs;

                   cout<<"\n enter the no. of wickets:=";
                   cin>>wickets;
               }
           }

           void display()
           {
               cout<<"\ncricket player name:="<<player_name;
               if(type=="batsman")
               {
                   cout<<"\nno.of runs scored:="<<runs;
               }
               else if(type=="bowler")
               {
                   cout<<"\nno. of wickets taken:="<<wickets;
               }
               else if(type=="allrounder")
               {
                   cout<<"\nno.of runs scored:="<<runs;
                   cout<<"\nno. of wickets taken:="<<wickets;
               }

           }
};

class football:protected player
{
    string type;
    int goals_saved,goals_scored;

    public:void Insert()
           {
               player::Insert();

               cout<<"\n enter the type of football player:=";
               getline(cin.ignore(),type);

               if(type=="goalkeeper")
               {
                   cout<<"\n enter the no. of goals saved:=";
                   cin>>goals_saved;
               }
               else if(type=="nongoalkeeper")
               {
                   cout<<"\n enter the no. of goals scored:=";
                   cin>>goals_scored;
               }
           }

           void display()
           {
               cout<<"\nfootball player name:="<<player_name;
               if(type=="goalkeeper")
               {
                   cout<<"\nno.of goals saved:="<<goals_saved;
               }
               else if(type=="nongoalkeeper")
               {
                   cout<<"\nno.of goals scored:="<<goals_scored;
               }

           }
};

int main()
{
    cricket c;
    football f;
    int choice;

    while(choice<2)
    {
        cout<<"\n1]cricket"<<endl;
        cout<<"2]football"<<endl;
        cout<<"3]close";

        cout<<"\n enter your choice:=";
        cin>>choice;

        switch(choice)
        {
            case 1:c.Insert();
                   c.display();
                   break;

            case 2:f.Insert();
                   f.display();
                   break;

            default:cout<<"\n make proper selection";
        }
    }
    return 0;
}
