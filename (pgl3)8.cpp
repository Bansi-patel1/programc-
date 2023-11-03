#include<iostream>
using namespace std;
class account
{
	public:
		int no,balance,branch_code;

		void display_account();

}a1;
int main()
{

	a1.display_account();

	return 0;

}

void account :: display_account()
{

	no=12345;
	balance=2300;
	branch_code=0123;

	cout<<"Account Number is  :: "<<no<<endl;

	cout<<"Account Balance is :: "<<balance<<endl;

	cout<<"Branch code is     :: "<<branch_code<<endl;

}
