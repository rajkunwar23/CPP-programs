#include <iostream>
using namespace std;

class person
{
protected:string name;
         int age;
};

class Employee:virtual public person
{
protected:string employee_id;
         int salary;
};

class Customer:virtual public person
{
protected:string customer_id;
	string feedback;

};

class EmployeeCustomer:public Employee,public Customer
{
public:void getdetails()
      {
       cout<<"\n enter name of person:=";
       getline(cin,name);

	cout<<"\n enter age of person:=";
	cin>>age;

	cout<<"\n enter the employee id:=";
	cin>>employee_id;

	cout<<"\n enter the employee salary:=";
	cin>>salary;

	cout<<"\n enter the customer id:=";
	cin.ignore( )>>customer_id;

	cout<<"\n enter the customer feedback:=";
	cin>>feedback;
      }

      void display()
      {
       cout<<"\n person name:="<<name;
       cout<<"\nperson age:="<<age;
       cout<<"\n employee id:="<<employee_id;
       cout<<"\n employee salary:="<<salary;
       cout<<"\n customer id:="<<customer_id;
       cout<<"\n customer feedback:="<<feedback;
      }
};


int main()
{
EmployeeCustomer ec;

ec.getdetails();
ec.display();

return 0;
}

