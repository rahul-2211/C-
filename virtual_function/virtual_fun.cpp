#include<iostream>
using namespace std;

class Base
{
  public:
  virtual void show()
  {
      std::cout << "Base\n" << std::endl;
  }
};
class Der1 : public Base
{
    public:
    void show()
    {
        cout<<"der1\n";
    }
};

class Der2 : public Base
{
    public:
    void show()
    {
        cout<<"der2\n";
    }
};

int main()
{
    Der1 d1;
    Der2 d2;
    Base *ptr;
   // cout<<sizeof(d1);
    ptr=&d1;
    ptr->show();
    ptr=&d2;
    ptr->show();
}








///////////////////////////////

















#include<iostream>
using namespace std;
/*
class Base
{
  public:
  virtual void show()
  {
      std::cout << "Base\n" << std::endl;
  }
};*/

// class shape
// {
//     protected:
//     float x;
//   public:
//   virtual void getdata()
//   {
//       cout<<"enter value:"<<endl;
//       cin >> x;
//   }
//   virtual float calculateArea()=0;
// };

// class square : public shape
// {
//     public:
//     float calculateArea()
//     {
//         cout<< x*x;
//     }
// };

/*class Der1 : public Base
{
    public:
    void show()
    {
        cout<<"der1\n";
    }
};

class Der2 : public Base
{
    public:
    void show()
    {
        cout<<"der2\n";
    }
};*/

class Base
{
    public:
    virtual void function()
    {
        cout<<" base virtual"<<endl;
    }
};
class Der1 : public Base
{
    public:
    void function()
    {
        cout<<" derived virtual1"<<endl;
    }
};
class Der2 : public Base
{
    public:
    void display()
    {
        cout<<" derived virtual2"<<endl;
    }
};


int main()
{
   /* Der1 d1;
    Der2 d2;
    Base *ptr;
   // cout<<sizeof(d1);
    ptr=&d1;
    ptr->show();
    ptr=&d2;
    ptr->show();*/
    
//     shape *ptr;
//     square s1;
//   // ptr=&d2;
//     ptr=&s1;
//     ptr->getdata();
//     ptr->calculateArea();
    
    Der1 d1;
    Der2 d2;
    d2.function();
    
    
}



