#include<iostream>
using namespace std;
class product
{
	private:
		int p_id,unit_price;
		char p_name[20];

	public:
		void getdata()
		{
			cout<<"Enter Product Name :: ";
			cin>>p_name;

			cout<<"Enter Product id :: ";
			cin>>p_id;

			cout<<"Enter Unit Price :: ";
			cin>>unit_price;

		}
		void putdata()
		{

			cout<<"Product Name is :: "<<p_name<<endl;

			cout<<"Product Id is :: "<<p_id<<endl;

			cout<<"Unit Price is :: "<<unit_price<<endl;

		}
}p1;
int main()
{

	p1.getdata();

	p1.putdata();

	return 0;
}
