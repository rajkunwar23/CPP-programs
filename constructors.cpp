#include <iostream>
using namespace std;

class book
{
    private:string bookname;
            int bookprice;

    public:book()
    {
        bookname="c";
        bookprice=200;
    }

    book(string name,int price)
    {
        bookname=name;
        bookprice=price;
    }

    book(int price,string name)
    {
        bookname=name;
        bookprice=price;
    }

    book(book &b5)
    {
        bookname=b5.bookname;
        bookprice=b5.bookprice;
    }

void putdata()
{
    cout<<endl<<"book name:="<<bookname;
    cout<<endl<<"book price:="<<bookprice;
}

};


int main()
{
    book b1;
    b1.putdata();

    book b2("cpp",200);
         b2.putdata();

    string bookname;
    int bookprice;

    cout<<endl<<"enter the book name:=";
    getline(cin,bookname);

    cout<<endl<<"enter book price:=";
    cin>>bookprice;

    book b3(bookprice,bookname);
    b3.putdata();

    book b4=b2;
    b4.putdata();

    return 0;
}
