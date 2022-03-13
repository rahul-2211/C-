//even thogh base is inherited with private from derived 1 and derived 2 then still not acess in the main
#include<iostream>
using namespace std;

class base
{

protected:
int i,j;
public:
void set(int a,int b)
{
i=a;
j=b;
}
void show()
{
	cout<<i<<" "<<j<<endl;
};

class derived1 : protected base
{
	int k;
public:
void setk()
{
k=i*j;
}
void showk();
{
	cout<<k<<endl;
}
};

class derived2 : derived1
{
	int m;
public:
void setm(){m=i-j;}//error
void showm(){cout<<m<<endl;}

};



int main()
{
	derived1 obj1;
	derived2 obj2;
	obj1.setk(1,2);
	obj1.showk();
	obj1.setk(3,4);
	obj2.showk();
	return 0;

}











