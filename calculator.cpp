//calculator program.
#include<iostream>
using namespace std;

class calculator{
public:

	int in1;
	int in2;
	//class functions---
	//set inputs of class variable
	void setinp(int a,int b)
	{
	 in1=a;
	 in2=b;
	}
	
	//to addition of numbers
	calculator add(calculator obj1,calculator obj2)
	{
		calculator obj3;
		obj3.in1=(obj1.in1+obj2.in1);
		obj3.in2=(obj1.in2+obj2.in2);
		return (obj3);
	}
	
	//subtraction
	int sub()
	{
		return in1-in2;
	}
	
	//multiplication
	int mul()
	{
		return in1*in2;
	}
	
	//division
	int div()
	{
		return in1/in2;
	}
	
	//power
	int pow()
	{
	
		int p=1;
		for(int i=in2;i>0;i--)
		{
			p=in1*p;
		}
		return p;
	
	}
	
	//factorial
	int fact()
	{
		int f=1;
		if(in1==0 || in1==1)
			return 1;
		for(int i=1;i<=in1;i++)
			f*=i;
			in1--;
		return f;
	}
};

//main body
int main()
{
	//object declaration
	calculator obj1,obj2,temp;
	while(1)
	{
		cout<<endl<<"1.addition"<<endl;
		cout<<"2.subtraction"<<endl;
		cout<<"3.multiplication"<<endl;
		cout<<"4.division"<<endl;
		cout<<"5.power"<<endl;
		cout<<"6.factorial"<<endl;
		cout<<"7.Quit"<<endl;
		int ch;
		cout<<"enter your choice: "<<endl;	
		cin>>ch;
	switch(ch)
	{
	int a,b;
	
		case 1 :
		cout<<"enter a and b: "<<endl;
		cin>>a>>b;
		obj1.setinp(a,b); 
		obj2.setinp(a,b);
		temp=obj1.add(obj1,obj2);
		cout<<"addtion is "<<temp.in1<<" and "<<temp.in2<<endl;
		break;
		
		case 2 :
		cout<<"enter a and b: "<<endl;
		cin>>a>>b;
		obj1.setinp(a,b); 
		cout<<"subtraction of"<<obj1.in1<<"and"<<obj1.in2<<" is: "<< obj1.sub()<<endl;
		break;
		
		case 3 :
		cout<<"enter a and b: "<<endl;
		cin>>a>>b;
		obj1.setinp(a,b); 
		cout<<"multiplication of"<<obj1.in1<<"and"<<obj1.in2<<" is: "<< obj1.mul()<<endl;
		break;
		
		case 4 :
		cout<<"enter a and b: "<<endl;
		cin>>a>>b;
		obj1.setinp(a,b); 
		cout<<"division of"<<obj1.in1<<"and"<<obj1.in2<<" is: "<< obj1.div()<<endl;
		break;
		
		case 5 :
		cout<<"enter a and b: "<<endl;
		cin>>a>>b;
		obj1.setinp(a,b); 
		cout<<"power of"<<obj1.in1<<"and"<<obj1.in2<<" is: "<< obj1.pow()<<endl;
		break;

		case 6 :
		cout<<"enter a: "<<endl;
		cin>>a;
		obj1.setinp(a,0); 
		cout<<"factorial of"<<obj1.in1<<" is: "<< obj1.fact()<<endl;
		break;
		
		case 7 :
		exit(1);
		break;


}
}
}

