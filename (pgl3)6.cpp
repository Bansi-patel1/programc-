#include<iostream>
using namespace std;
class shape
{
	public:
		int height,base;

		void display_shape();
}s1;
int main()
{

	s1.display_shape();

	return 0;

}
void shape :: display_shape()
{
	height=90;
	base=9;

	cout<<"Given Height is :: "<<height<<endl;

	cout<<"Given Base is   :: "<<base<<endl;
}
