//constructor in deriveded class ...
#include<iostream>
using namespace std;

class Base
{
	int x;
	public:
	Base()
	{
	cout<<"base default constructor"<<endl;
	}
	~Base()
	{
	cout<<"base default destructor"<<endl;
	}
};

class derived : public Base
{
	public:	
	derived()
	{
	cout<<"derived default constructor"<<endl;

	}
	~derived()
	{
	cout<<"derived default destructor"<<endl;

	}
	derived(int i)
	{
	cout<<"derived parameterized constructor"<<endl;

	}
};

int main()
{
	Base b;
	derived d1;
	derived d2(10);

}
