//Inheritance of classes

#include<iostream>
using namespace std;

//class defination
class person
{
	//class attributes
	public:
	int height,weight;
	//class function
	
	void talk()
	{
		cout<<"you are inside the talk"<<endl;
		cout<<"height:"<<height<<endl;
		
	}

	void walk()
	{
		cout<<"you are inside the walk"<<endl;
		cout<<"weight:"<<weight<<endl;
	}


};//base class

//derived class
class doctor:public person
{
	public:	
};

//derived class
class footballer:privare person
{	
	public:
};

//derived class
class runner:protected person
{	
	public:	
};

//main body
int main()
{
	//object creation
	doctor d1;
	d1.height=150;
	d1.weight=50;
	//function call from derived class
	d1.talk();
	d1.walk();

}
























































