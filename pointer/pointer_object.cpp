#include<iostream>
using namespace std;

class demo
{
	public: 
	int i;
	demo(int x)
	{
		i=x;
	}
	int get()
	{
		return i;
	}

};
int main()
{
	demo p[3]={11,22,33};
	demo *ptr1;
ptr1=p;
for(int i=0;i<3;i++)
{
	cout<<ptr1->get()<<endl;
	ptr1++;
}
/*
demo d(22),*ptr;
ptr=&d;
d.get();
ptr->get();*/

}
