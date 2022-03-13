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




};//base class

//derived class
class doctor:public person
{
	public:	
	void walk()
	{
		cout<<"you are inside the walk"<<endl;
		cout<<"weight:"<<weight<<endl;
	}
};


//main body
int main()
{
	//object creation
	person *ptr;
//	person p1;
	doctor d1;
	
//	ptr=&p1;
	ptr=&d1;
//	d1.height=150;
	//d1.weight=50;
	//function call from derived class
//	ptr->talk();
	((doctor*)ptr)->walk();

}
























































