#include <iostream>
using namespace std;

class complex
{
float r,i;

public:void getvalue();
      complex operator+(complex c3);
      complex operator-(complex c3);
      void display();
      void operator-();
      void operator ++();
      void operator++(int);
};

      void complex:: getvalue()
      {
	cout<<"\n enter the real value:=";
	cin>>r;

	cout<<"\n enter the imaginery value:=";
	cin>>i;
      }

      complex complex:: operator +(complex c3)
      {
      complex t;

      t.r=r+c3.r;
      t.i=i+c3.i;
      
      return (t);

      }

     complex complex:: operator -(complex c3)
      {
       complex t;

      t.r=r-c3.r;
      t.i=i-c3.i;
      
      return (t);
      }

      void complex::display()
      {
      cout<<r<<"+"<<i<<"i"<<endl;
      }

      void complex::operator-()
      {
       r=-r;
       i=-i;
      }

      void complex::operator++()
      {
       ++r;
       ++i;
      }

      void complex::operator++(int)
      {
       r++;
       i++;
      }

int main()
{
complex c1,c2,result,result1;

c1.getvalue();
c2.getvalue();

cout<<"\n input values:=";
c1.display();
c2.display();

result=c1+c2;
result1=c1-c2;

cout<<"\n addition:=";
result.display();
cout<<"\n substraction:=";
result1.display();

++c1;
c2++;

cout<<"\n after increment:=";
c1.display();
c2.display();

-c1;
-c2;
cout<<"\n after negation:=";
c1.display();
c2.display();
return 0;
}

