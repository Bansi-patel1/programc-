//write a c++ program to declare structure of employee with data members like emp_name,emp_code,emp_salary,emp_branch and also display contents/values of member variables.//
#include<iostream>
using namespace std;
struct empoyee{
	char name[30],branch[20];
	int code,salary;
}e1;
int main()
{
	cout<<"Enter the Employee name ::";
	cin>>e1.name;
	
	cout<<"Enter the Employee branch ::";
	cin>>e1.branch;
	
	cout<<"Enter the Employee Code ::";
	cin>>e1.code;
	
	cout<<"Enter the Employee Salary ::";
	cin>>e1.salary;
	
	cout<<"The Employee name ::"<<e1.name<<endl;
	cout<<"The Employee branch ::"<<e1.branch<<endl;
	cout<<"The Employee Code ::"<<e1.code<<endl;
	cout<<"The Employee Salary ::"<<e1.salary<<endl;
	
	return 0;
	
	
}
