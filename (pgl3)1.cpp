//write a c++ program that declares student structure with data members name,std,percentage.Take value for these data members and display it.
#include<iostream>
using namespace std;
struct student{
	char name[30];
	int std;
	float per;
}s1;
int main()
{
	cout<<"Enter your name ::";
	cin>>s1.name;
	
	cout<<"Enter your standard ::";
	cin>>s1.std;
	
	cout<<"Enter your percentage ::";
	cin>>s1.per;
	
	cout<<"your name is ::"<<s1.name<<endl;
	cout<<"your Standard is ::"<<s1.std<<endl;
	cout<<"your Percentage is ::"<<s1.per<<endl;
	
	return 0;
}
