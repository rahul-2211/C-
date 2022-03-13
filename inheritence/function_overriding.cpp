//function overriding
#include<iostream>
using namespace std;
//parent class
class ABC
{
	public:
	void display()
	{
	cout<<"this is the parent class"<<endl;
	}
};

//derived class
class XYZ:public ABC
{
	public:
	void display()
	{
		cout<<"\nthis is child class"<<endl;
	}

};

//main body
int main()
{
	XYZ x;
	x.display();
	x.ABC::display();
}

