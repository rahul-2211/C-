//multilevel inheritance
#include<iostream>
using namespace std;

//parent class
class person
{
//member functions and member variables
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

//child classes
class doctor:public person
{	
	public:
	
};//derived class1

class footballer:public doctor
{	
	public:
	
};//derived class2

//main body
int main()
{
	
	footballer f1;
	
	
	f1.height=150;
	f1.weight=50;
	f1.talk();
	f1.walk();
}
