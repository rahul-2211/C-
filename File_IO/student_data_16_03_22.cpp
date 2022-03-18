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
     stu.getdata();
    f.open("student.dat",ios::app|ios::binary);
    f.write((char*)&stu,sizeof(stu));
    f.close();
}
void display()
{
    fstream f; student stu;
    f.open("student.dat",ios::in|ios::binary);
while(!f.eof())
{ 
   f.read((char*)&stu,sizeof(stu));
    cout<<" Roll "<<stu.roll<<" name  "<<stu.name<<" marks: "<<stu.marks<<endl;
} 
   f.close();
}
};
int main()
{
    student s;
    // s.getdata();
    s.AddRecord();
    s.display();
}

// };
// int main()
// {
//     student s;
//     // s.getdata();
//     s.AddRecord();
    
//     char ch='n';
//     do{
//         s.AddRecord();
//         cout<<"want add more?(y/n)"<<endl;
//         cin>>ch;
//     }while(ch=='y' || ch=='n');
// }

