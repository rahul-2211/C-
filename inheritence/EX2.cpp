//exercise date 08/03/2022
#include<iostream>
using namespace std;
class base
{
	int i,j;
	public:
	void set (int a, int b)
	{
		i=a;
		j=b;
	}

};
class derived:public base//if here we take private then it gives error because the derived class variable and functions becomes private so if we call this derived class from the main then it can acess that private members of that class .
{
	int k;
	public:
	derived(int x)
	{
	k=x;}
	void showk()
	{
	cout<<k;
	}
};

int main()
{

	derived ob(3);
	ob.set(1,2);
	ob.showk();
	return 0;


}
