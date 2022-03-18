#include<iostream>
using namespace std;

template<typename T>
T sum(T n1,T n2)
{
    T rs;
    rs=n1+n2;
    return rs;
}
int main()
{
int A=a,B=33,C;
long a=11,b=22,c;
C=sum (A,B);
c=sum (a,b);

cout<<"long: "<<c<<endl;
cout<<"int : "<<C<<endl;
return 0;
}
