//write a c++ program to create class distance with private data members feet & inches.Member function are get_distance() & dispaly_distance(). Call both member functions using object of the class.//
#include<iostream>
using namespace std;
class distanance{
	private:
		int feet,inch;
	public:
		void get_distance()
		{
			cout<<"Enter the feet ::";
			cin>>feet;
			
			cout<<"Enter the inch ::";
			cin>>inch;
		}
		void display_distance()
		{
			cout<<"The feet is ::"<<feet<<endl;
			cout<<"The inch is ::"<<inch<<endl;
		}
}d1;
int main()
{
	d1.get_distance();
	d1.display_distance();
	return 0;
}
