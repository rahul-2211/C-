//Operator overloading : same operator behaving deifferent in environment
//operator overloding demo program
#include<iostream>
using namespace std;

//class creation
class Complex
{
	//class properites
	int real,img;
	public:
		//simple constructor
		Complex()
		{
			real=0;
			img=0;
		}
		//parameterised constructor
		Complex(int x, int y)
		{
			real=x;
			img=y;
		}
		//printing member variables
		void display()
		{
			cout<<"real-part: "<<real<<" imaginary-part: "<<img<<endl<<endl;
		
		
		}
//friend function-for calling function from outside the class		
friend Complex operator+(Complex ob1,Complex ob2);//addition	
friend Complex operator-(Complex ob1,Complex ob2);//subtraction
friend Complex operator*(Complex ob1,Complex ob2);//multilocation
friend Complex operator/(Complex ob1,Complex ob2);//division
friend Complex operator%(Complex ob1,Complex ob2);//modulas
friend Complex operator<<(Complex ob1,Complex ob2);//multiply by 2^n//shift left
friend Complex operator~(Complex ob1);//invert
friend Complex operator&(Complex ob1,Complex ob2);//bitwise AND
friend Complex operator|(Complex ob1,Complex ob2);//bitwise OR
friend Complex operator&&(Complex ob1,Complex ob2);//logical AND
friend Complex operator||(Complex ob1,Complex ob2);//logical OR

};//end of the class


//functions start from here
	
//addition	
Complex operator + (Complex ob1,Complex ob2)
{
	Complex temp;
	temp.real=ob1.real+ob2.real;
	temp.img=ob1.img+ob2.img;
	return temp;
}

//subtraction
Complex operator - (Complex ob1,Complex ob2)
{
	Complex temp;
	temp.real=ob1.real-ob2.real;
	temp.img=ob1.img-ob2.img;
	return temp;
}

//multiplication
Complex operator * (Complex ob1,Complex ob2)
{
	Complex temp;
	temp.real=ob1.real*ob2.real;
	temp.img=ob1.img*ob2.img;
	return temp;
}

//division
Complex operator / (Complex ob1,Complex ob2)
{
	Complex temp;
	temp.real=ob1.real/ob2.real;
	temp.img=ob1.img/ob2.img;
	return temp;
}

//modulas
Complex operator%(Complex ob1,Complex ob2)
{
	Complex temp;
	temp.real=ob1.real%ob2.real;
	temp.img=ob1.img%ob2.img;
	return temp;
}

//left insertion
Complex operator<<(Complex ob1,Complex ob2)
{
	Complex temp;
	temp.real=ob1.real<<ob2.real;
	temp.img=ob1.img<<ob2.img;
	return temp;
}

//invert
Complex operator~(Complex ob1)
{
	Complex temp;
	temp.real=~ob1.real;
	temp.img=~ob1.img;
	return temp;
}

//bitwise AND
Complex operator&(Complex ob1,Complex ob2)
{
	Complex temp;
	temp.real=ob1.real&ob2.real;
	temp.img=ob1.img&ob2.img;
	return temp;
}

//bitwise OR
Complex operator|(Complex ob1,Complex ob2)
{
	Complex temp;
	temp.real=ob1.real|ob2.real;
	temp.img=ob1.img|ob2.img;
	return temp;
}

//logical AND
Complex operator&&(Complex ob1,Complex ob2)
{	
	ob1.real=0;
	Complex temp;
	temp.real=ob1.real && ob2.real;
	temp.img=ob1.img && ob2.img;
	return temp;
}

//logical OR
Complex operator||(Complex ob1,Complex ob2)
{	
	ob1.real=0;
	Complex temp;
	temp.real=ob1.real || ob2.real;
	temp.img=ob1.img || ob2.img;
	return temp;
}

//main body
int main()
{
	//object declaration
	Complex c1(1,1),c2(5,10);
	Complex c3;
	c1.display();
	c2.display();
	c3.display();
	
	
	cout<<"action is strat here: "<<endl<<endl;
	cout<<"addition"<<endl;
	c3=c1+c2;
	c3.display();
	
	cout<<"subtration:"<<endl;
	c3=c1-c2;
	c3.display();
	
	cout<<"multiplication:"<<endl;
	c3=c1*c2;
	c3.display();
	
	cout<<"division:"<<endl;
	c3=c1/c2;
	c3.display();
	
	cout<<"modulas:"<<endl;
	c3=c1%c2;
	c3.display();
	
	cout<<"left Insertion:"<<endl;
	c3=c1<<c2;
	c3.display();
	
	cout<<"invert:"<<endl;
	c3=~c1;
	c3.display();
	
	cout<<"invert:"<<endl;
	c3=~c2;
	c3.display();
	
	cout<<"bitwise AND:"<<endl;
	c3=c1&c2;
	c3.display();
	
	cout<<"bitwise OR:"<<endl;
	c3=c1|c2;
	c3.display();
	
	cout<<"logical AND:"<<endl;
	c3=c1&&c2;
	c3.display();
	
	cout<<"logical OR:"<<endl;
	c3=c1||c2;
	c3.display();
	//c3=c1.operator +  (c2);//second way
return 0;




}
















