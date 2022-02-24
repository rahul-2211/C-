#include<iostream>
using namespace std;
//class creation
class space
{
	//class properties
	int x,y,z;
	public:
	//simple constructor
	
		space()
		{
		x=y=z=0;
		}
		
		//parameterized constructor
		space(int a,int b, int c)
		{
			x=a;
			y=b;
			z=c;

		}
		//ptint the ouput
		void display()
		{
		cout<<"X: "<<x<<"Y: "<<y<<" Z: "<<z<<endl<<endl;
		}

		friend void operator -(space& s1);
		void operator --();
		space operator --(int);
};//end of the class


/*space operator -(space s1)
{
	space temp;
	temp.x=-(s1.x);
	temp.y=-(s1.y);
	temp.z=-(s1.z);
	return temp;

}*/

//'-' operator
void operator -(space& s1)
{

	s1.x=-s1.x;
	s1.y=-s1.y;
	s1.z=-s1.z;
	
}


//pre-decrement operator
void space :: operator --()
{
	x=--x;
	y=--y;
	z=--z;

}

//post decrement operator
space space :: operator --(int)
{
	space temp;
	temp.x=x--;
	temp.y=y--;
	temp.z=z--;
	return temp;
}

//main body
int main()

{

	space s2;
	space s1(5,3,4);
	s1.display();
	
	-s1;
	cout<<"- operator"<<endl;
	s1.display();
	
	--s1;
	cout<<"pre decrement operator"<<endl;
	s1.display();
	
	s2=s1--;
	cout<<"post decrement operator"<<endl;
	s2.display();
	
	s1;
	cout<<"after post decrement operator"<<endl;
	s1.display();


	return 0;

}













