#include<iostream>
using namespace std;
class employee
{
	private:
		char name[20],branch[20];
		int code,salary;
	public:
		void get_employee()
		{
			cout<<"Enter Employee Name   :: ";
			cin>>name;

			cout<<"Enter Employee Branch :: ";
			cin>>branch;

			cout<<"Enter Employee Code   :: ";
			cin>>code;

			cout<<"Enter Employee Salary :: ";
			cin>>salary;
		}

		void display_employee()
		{
			cout<<"Employee Name is   :: "<<name<<endl;

			cout<<"Employee Branch is :: "<<branch<<endl;

			cout<<"Employee Code is   :: "<<code<<endl;

			cout<<"Employee Salary is :: "<<salary<<endl;

		}
}e1;
int main()
{

	e1.get_employee();

	e1.display_employee();

	return 0;

}
