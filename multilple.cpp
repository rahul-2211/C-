//multiple inheritance

#include<iostream>
using namespace std;

//class creation
//parent class1
class person
{
	//data members and data functions
	public:
	int height,weight;
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
};

//parent class 2
class animal
{

public:

	void eat()
	{
		cout<<"you are inside the animal eat"<<endl;
	}

};

//child classes starts here..
class doctor:public person
{	
	public:	
};//derived class1

class footballer:public animal,public doctor
{	public:
	
};//multiple derived classes


//main body
int main()
{
	//derived class object creation
	footballer f1;
	
	
	f1.height=150;
	f1.weight=50;
	f1.talk();
	f1.walk();
	f1.eat();
}//end of main
