#include<iostream>
using namespace std;
class max
{
	private:
		int num1,num2;
	public:
		void input()
		{
			cout<<"Enter the value of Number 1 :: ";
			cin>>num1;

			cout<<"Enter the value of Number 2 :: ";
			cin>>num2;
		}

		void display()
		{
			cout<<"Value of Number 1 :: "<<num1<<endl;

			cout<<"Value of Number 2 :: "<<num2<<endl;
		}

		void largest()
		{
			if(num1>num2)
			{
				cout<<"Large between two Number is :: "<<num1<<endl;
			}
			else
			{
				cout<<"Large between two Number is :: "<<num2<<endl;
			}
		}

}m1;
int main()
{


	m1.input();

	m1.display();

	m1.largest();
	

}
