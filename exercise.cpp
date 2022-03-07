//date:03/07/2022-->derived class exercise
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

//class creation
//parent class1 
class student
{
	public:
	string name;
	int roll_no;
	
	void data()
	{
		
		cout<<"enter name and roll no: "<<endl;
		getline(cin,name);
		cin>>roll_no;
		cout<<"Name: "<<name<<" RollNo: "<<roll_no<<endl;		
	}
	
};

//parent class2
class test
{	public:
	int marks[5];
};

//derived class
class result:public test,public student
{
	public:
	int total_marks=0;
	float percentage=0;
	void res()
	{	
		
		for(int i=0;i<5;i++)
		{
			cout << "enter the "<< i+1 <<" subject marks:"<<endl;
			cin>>marks[i];
			total_marks=total_marks+marks[i];
		}
		
		percentage=total_marks/5;
		cout<<"total marks is: "<<total_marks<<endl;
		cout<<"percentage is: "<<percentage<<"%"<<endl;
	}	
	
};

//main body
int main()
{
	result r1;
	r1.data();
	r1.res();
	return 0;
}

