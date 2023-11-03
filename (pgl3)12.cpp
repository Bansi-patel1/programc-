#include<iostream>
using namespace std;
class item
{
	private:
		int number,cost;

	public:
		void getdata()
		{
			cout<<"Enter Number of Items ::  ";
			cin>>number;

			cout<<"Enter Cost of Items :: ";
			cin>>cost;

		}
		void putdata()
		{

			cout<<"Number of Items is :: "<<number<<endl;

			cout<<"Cost of Items is :: "<<cost<<endl;

		}
}i1;
int main()
{

	i1.getdata();

	i1.putdata();

	return 0;
}
