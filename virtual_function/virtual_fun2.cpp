#include<iostream>
using namespace std;

class convert
{
    protected:
    double var1;//initial value
    double var2;//converted value
    public:
    convert(double i)
    {
        var1 = i;
    }
    double getconv()
    {
        return var2;
    }
    double getinit()
    {
        return var1;
    }
    
    virtual void compute()=0;
};

//liter to gallon
class l_to_g:public convert
{
    public:
    l_to_g(double i): convert(i){};
    void compute()
    {
        var2=var1/3.7854;
    }
};

//fahrenheit to celsius
class f_to_c:public convert
{
    public:
    f_to_c(double i):convert(i){}
    void compute()
    {
        var2=(var1-32)/1.8;
    }
};

int main()
{
    convert *p;
    l_to_g lglob(4);
    f_to_c fcob(70);
    //use virtual function mechanism to convert
    p=&lglob;
    cout<<p->getinit()<<"liter is";
    p->compute();
    cout<<p->getconv()<<"gallon is"<<endl;
    
    p=&fcob;
    cout<<p->getinit()<<"inFerenheit is"<<endl;
    p->compute();
    cout<<p->getconv()<<"celsius is"<<endl;
    
    
}













