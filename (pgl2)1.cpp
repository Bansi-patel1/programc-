//write a c++ program to access global variable using scope resolution operator without using class.//
#include<iostream>
using namespace std;
int a=10;
int main()
{
	int a=20;
	cout<<"The local variable is ::"<<a<<endl;
	cout<<"The global variable is ::"<<::a<<endl;
	
	return 0;
}
