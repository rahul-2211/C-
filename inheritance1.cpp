//differnt operations using access modifoers in inherited class

#include<iostream>
using namespace std;

//parent class
class person
{
//class members

//public
public:
int height,weight;
void talk()
{
	cout<<"you are inside the public talk"<<endl;
	cout<<"height:"<<height<<endl;
	
}

void walk()
{
	cout<<"you are inside the public walk"<<endl;
	cout<<"weight:"<<weight<<endl;
}

//private
private:
int height,weight;
void talk()
{
	cout<<"you are inside the private talk"<<endl;
	cout<<"height:"<<height<<endl;
	
}

void walk()
{
	cout<<"you are inside the private walk"<<endl;
	cout<<"weight:"<<weight<<endl;
}

//protected
protected:
int height,weight;
void talk()
{
	cout<<"you are inside the protected talk"<<endl;
	cout<<"height:"<<height<<endl;
	
}

void walk()
{
	cout<<"you are inside the protected walk"<<endl;
	cout<<"weight:"<<weight<<endl;
}

};//base class

//child classes starts here

class doctor:public person
{	public:
	
};//derived class1

class footballer:private person
{	private:
	
};//derived class2

class runner:protected person
{	protected:
	
};//derived class3


//main body
int main()
{
	//child class object creation
	doctor d1;
	footballer f1;
	runner r1;
	
	d1.height=150;
	d1.weight=50;
	d1.talk();
	d1.walk();

	f1.height=150;
	f1.weight=50;
	f1.talk();
	f1.walk();

	r1.height=150;
	r1.weight=50;
	r1.talk();
	r1.walk();	

}//end of the main























































