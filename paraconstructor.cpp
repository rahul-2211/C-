#include<iostream>
using namespace std;

class Distance
{	
	private:int feet,inch;

	public:
	
	Distance(int a,int b)
	{
	feet=a;
	inch=b;
	cout<<"constructor is called";
	}
	~Distance()
	{
	
	cout<<endl<<"destructor is called";
	}



};
int main()
{
Distance d1(4,5);
}
