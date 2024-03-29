#include <iostream>
using namespace std;

class result
{
    private:string Sname;
            int C,CPP,DSA;

    public:void setstudentname(string);
           void setstudentlang(int,int,int);

           string getstudentname();
           int getstudentlangc();
           int getstudentlangcpp();
           int getstudentlangdsa();
};

void result::setstudentname(string Name)
{
    Sname=Name;
}

void result::setstudentlang(int c,int cpp,int dsa)
{
    C=c;
    CPP=cpp;
    DSA=dsa;
}

string result::getstudentname()
{
    return Sname;
}

int result::getstudentlangc()
{
    return C;
}

int result::getstudentlangcpp()
{
    return CPP;
}

int result::getstudentlangdsa()
{
    return DSA;
}

int main()
{
    result r;
    string Name;
    int c,cpp,dsa;

    cout<<endl<<"enter the name of the student:=";
    getline(cin,Name);

    cout<<endl<<"enter the marks of c:=";
    cin>>c;

    cout<<endl<<"enter the marks of cpp:=";
    cin>>cpp;

    cout<<endl<<"enter the marks of dsa:=";
    cin>>dsa;

    r.setstudentname(Name);
    r.setstudentlang(c,cpp,dsa);

    if((r.getstudentlangc()>=40)&&(r.getstudentlangcpp()>=40)&&(r.getstudentlangdsa()>=40))
    {
        cout<<endl<<"result:=pass";
    }
    else if(((r.getstudentlangc()>=40)&&(r.getstudentlangcpp()>=40))||((r.getstudentlangc()>=40)&&(r.getstudentlangdsa()>=40))||((r.getstudentlangdsa()>=40)&&(r.getstudentlangcpp()>=40)))
    {
        cout<<endl<<"result:=ATKT";
    }

    return 0;
}

