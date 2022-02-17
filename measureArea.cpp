#include<iostream>

using namespace std;
class Measure
{
   public:
   	
   	   int in1,in2,in3;
   	   int area()
   	   {
   	   	int a=2*(in1*in2+in2*in3+in1*in3);
   	   	return a;
   	   
   	   }
   	   
   	   void setInput(int h, int l,int w)
   	   {
   	   	in1=h;
   	   	in2=l;
   	   	in3=w;
   	   } 
   	    
   	   int volume()
   	   {
		int v=in1*in2*in3;
		return v;
   	   	
   	   }


};


int main()
{
	Measure m1,m2;
	int a,b,c;
	cout<<"enter height,length and width for object 1: "<<endl;
	cin>>a>>b>>c;
	m1.setInput(a,b,c);
	cout<<"object 1 area is: "<<m1.area()<<" and volume is : "<<m1.volume()<<endl;
	//int a,b,c;
	cout<<"enter height,length and width for object 2: "<<endl;
	cin>>a>>b>>c;
	m2.setInput(a,b,c);
	cout<<"object 2 area is: "<<m2.area()<<" and volume is : "<<m2.volume()<<endl;



}
