#include<iostream>
#include<fstream>
using namespace std;
class student
{
  public:
  int roll;
  char name[25];
  float marks;


void getdata()
{
    cout<<"enter rollno ane name"<<endl;
    cin>>roll >>name;
    cout<<"marks"<<endl;
    cin>>marks;
    
}

void AddRecord()
{
    fstream f;
    student stu;
    f.open("student.dat",ios::app|ios::binary);
    stu.getdata();
    f.write((char*)&stu,sizeof(stu));
    f.close();
}
};
int main()
{
    student s;
    // s.getdata();
    char ch='n';
    do{
        s.AddRecord();
        cout<<"want add more?(y/n)"<<endl;
        cin>>ch;
    }while(ch=='y');
}

