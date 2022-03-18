#include<iostream>
#include<string>
using namespace std;

template<class T,class U,class P>

T swap1(T *num1,U *num2)
{

    
    T temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

// void swap(int *num1,int *num2)
// {
    
//     int temp;
//     temp=*num1;
//     *num1=*num2;
//     *num2=temp;
// }

int main()
{
    int a=23;
    double b=32.57;
    
    cout<<"before swapping: "<<"a: "<<a<<" b: "<<b <<endl;
    swap1(&a,&b);
    
    cout<<"after swapping: "<<"a: "<<a<<" b: "<<b <<endl;
    
}
