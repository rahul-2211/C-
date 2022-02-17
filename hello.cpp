#include<iostream>
using namespace std;

/*int main()
{
	int i;
	cout<<"enter a number:"<<endl;
	cin>>i;
	cout<<"square of "<<i<<" is : "<<i*i<<endl;
	return 0;


}*/

class calculator{
public:
	int in1;
	int in2;
	
	void setinp(int a,int b)
	{
	 in1=a;
	 in2=b;
	}
	int add()
	{
	return in1+in2;
	}
	
};


int main()
{
	calculator obj1;
	obj1.setinp(10,2);
	cout<<"the inputs are: "<<obj1.in1<<" "<<obj1.in2<<endl;
	cout<<"addition is  : "<<obj1.add();




}





