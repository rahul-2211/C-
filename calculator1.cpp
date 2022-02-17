#include<iostream>

using namespace std;

class calculator{
//public:
//protected:
private:

	int in1;
	int in2;
	
//private:
public:
//protected:
	void setinp(int a,int b)
	{
	 in1=a;
	 in2=b;
	}

	int sub()
	{
	cout<<"subtraction of"<<obj1.in1<<"and"<<obj1.in2<<" is: "<< obj1.sub()<<endl;
		//return in1-in2;
	}
	
	int mul()
	{
	cout<<"multiplication of"<<obj1.in1<<"and"<<obj1.in2<<" is: "<< obj1.mul()<<endl;
		//return in1*in2;
	}
	
	
};
	
int main()
	{
		//int a,b;
		calculator obj1;
		//cout<<"enter a and b: "<<endl;
		//cin>>a>>b;
		obj1.setinp(4,5); 
		cout<<"subtraction of"<<obj1.in1<<"and"<<obj1.in2<<" is: "<< obj1.sub()<<endl;
		
		
		
		//cout<<"enter a and b: "<<endl;
		//cin>>a>>b;
		obj1.setinp(4,5); 
		//cout<<"multiplication of"<<obj1.in1<<"and"<<obj1.in2<<" is: "<< obj1.mul()<<endl;
		
	
	
	}
