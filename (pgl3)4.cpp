//write a c++ program to create class student with data members name & age.Member functions are get_details and display_details().Call both member functions use object of the class.//
#include<iostream>
using namespace std;
class student{
	private:
		int age;
		char name[30];
	public:
		void get_details()
		{
			cout<<"Enter the student name ::";
			cin>>name;
			
			cout<<"Enter the student age ::";
			cin>>age;
		} 
		void display_details()
		{
			cout<<"Student name is ::"<<name<<endl;
			cout<<"Student age is ::"<<age<<endl;
		}
};
int main()
{
	student s1;
	s1.get_details();
	s1.display_details();
	return 0;
}
