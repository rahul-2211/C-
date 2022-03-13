//quiz problem of inheritance...
#include<iostream>
using namespace std;

//class creation
class A
{
	public:   
	void displayA()
	{
	    cout<<"class A"<<endl;
	}

};
class B
{
  	public: 
   	void displayB()
	{
	    cout<<"class B"<<endl;
	}
};
class C : public A 
{
        public: 
        void displayC()
	{
	    cout<<"class B"<<endl;
	}

};

class D: public A 
{
     public: 
     void displayD()
     {
	   cout<<"class D"<<endl;
     }

};

class E: public C,public D
{
     public: 
     void displayE()
     {
	   cout<<"class E"<<endl;
     }

};

class F: public E
{
     public: 
     void displayE()
     {
            cout<<"class F"<<endl;
     }

};



int main()
{
    
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;
    a.displayA();
    // b.displayA();
    // b.diplayB();
    // b.diplayC();
    // b.diplayD();

    // f.displayA();    
    // f.displayC();    
    // f.displayB();    
    // f.displayE();    
  
    // e.displayA();    
    // e.displayB();    
    // e.displayC();    
    
    

}

