#include<iostream>
using namespace std;
class temp
{
	public :
		void display();
};
void temp::display()
{
	cout<<"Welcome to DSU.."<<endl;
}
int main()
{
	temp t1;
	t1.display();
	return 0;
}
