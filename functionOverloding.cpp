//Function overloading
#include<iostream>
using namespace std;

//overloaded functions
int sum(int l, int w, int h)

	{
	return (l+w+h);	
	}

int sum(int l, float w, int h)

	{
	return (l+w+h);	
	}

int sum(int l, int w)

	{
	return (l+w);	
	}

int sum(int l, float  w)

	{
	return (l+w);	
	}

int sum(float  l,int w)

	{
	return (l+w);	
	}
float sum(float l, float  w)

	{
	return (l+w);	
	}
	
//main body
int main()
	{
	cout<<"sum is (5,5,5):"<<sum(5,5,5)<<endl;
	cout<<"sum is (5,5.5f,5):"<<sum(5,5.5f,5)<<endl;
	cout<<"sum is (5,5):"<<sum(5,5)<<endl;
	cout<<"sum is (5,5.5):"<<sum(5,5.5f)<<endl;
	cout<<"sum is (5,5.5):"<<sum(5.5f,5)<<endl;
	cout<<"sum is (5.5,5.5):"<<sum(5.5f,5.5f)<<endl;


	return 0;
	}
