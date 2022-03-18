#include<iostream>
using namespace std;

template<class T,class U>

void multiply(T num1,U num2)
{
    cout<<"result"<<num1*num2<<endl;
}

int main()
{
int x='A',y='B';
double a=11.99,b=22;
multiply(x,y);
multiply(a,b);
multiply(a,y);

cout<<char(64);
cout<<int('a');
return 0;
}


