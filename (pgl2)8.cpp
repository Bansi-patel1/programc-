#include<iostream>
using namespace std;
int main()
{
	float m,cm,km=12,f,in;
	
	m=km*1000;
	cm=m*100;
	in=km*39370.07814;
	f=km*3280.84;
	
	cout<<"Value of kilometer into meter ::"<<m<<endl;
	cout<<"Value of kilometer into centi-meter ::"<<cm<<endl;
	cout<<"Value of kilometer into inch ::"<<in<<endl;
	cout<<"Value of kilometer into feet ::"<<f<<endl;
	
	return 0;
	
}
