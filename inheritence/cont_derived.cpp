//constructor and destructor in derived class //inheritance
#include<iostream>
using namespace std;
class base1{
	protected:
	int i;
	public:
	base1(int x)
	{
	i=x;
	cout<<"const of base 1"<<endl;

	}
	~base1()
	{

	cout<<"deconst of base 1"<<endl;

	}

};
class base2{
	protected:
	int k;
	public:
	base2(int x)
	{
	k=x;
	cout<<"const of base 2"<<endl;

	}
	~base2()
	{

	cout<<"deconst of base 2"<<endl;

	}

};

class derived: public base1,public base2
{
	int j;
	public:
	derived(int x,int y,int z):base1(y),base2(z)
	{
		j=x;
	cout<<"con derived"<<endl;

	}
	~derived()
	{
	cout<<"dest derived"<<endl;
	}
	void show()
	{
	cout<<i<<" " <<j<<" "<<k;
	}
};


int main()
{
	base1 b1;
	base2 b2;

	//derived d1;
	//d1.show();
}











