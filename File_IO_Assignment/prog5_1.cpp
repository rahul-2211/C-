//prog.5 : student database operation using file IO operation
#include<iostream>
#include<fstream>
using namespace std;
//function prototype
void options();
void menu();
void search();
void add();

//class creation
class Student
{
     //attributes of class
     int ID;
     char name[20];
     char branch[20];
     char loc[20];
     
     public:
     void getdata();
     void display();
     int getno() {return ID;}
}s;//end of class

//to get the data from user/keyboard
void Student::getdata()
{
     cout<<"Enter ID : ";
     cin>>ID;
     cout<<"Enter Name     : ";
     cin>>name;
    
     cout<<"Enter Branch     : ";
     cin>>branch;
    
     cout<<"Enter Location     : ";
     cin>>loc;
     
     // cin.getline(name,20);
     // gets(name);

}

//display data of Student
void Student::display()
{
     cout<<"=================================================\n";
     cout<<"ID : "<<ID<<"\tName  : "<<name<<"\n";
     cout<<"Branch    : "<<branch <<"\tLocation : "<<loc<<"\n";
     cout<<"=================================================\n";
}

//main body
int main()
{
     int id;
     fstream fp("stud.dat",ios::in|ios::out|ios::binary);//IO stream creation
     //calling menu function
     menu();
    
     return 0;
}//end of main


//choices
void options()
{
     cout<<"\t1: enter Student detail\n";
     cout<<"\t2: find Student\n";
     cout<<"\nEnter Your Choice  : ";
}

//menu function starts here...
void menu()
{
     int ch;
     options();
     cin>>ch;
     while(ch)
     {
           switch(ch)
           {
                  case 1: 
                            add(); break;
                  case 2:
                            search(); break;
                  default:
                          //try-throw-catch
                            try
                            {
                                throw ch;
                            }
                            catch(int)
                            {
                                cout << "Caught an exception -- value is: ";
                                cout << ch << "\n";
                                cout<<"Wrong Input please enter the correct value...."<<endl;
                            }
           }
        
           options();
           cin>>ch;
     }
}

//search specfic Student data by using ID
void search()
{
     ifstream fin("stud.dat",ios::in|ios::binary);
     int ID,i=0;
     char found='n';
     cout<<"\nEnter ID to be searched : ";
     cin>>ID;
     //read from file
     while(fin.read((char*)&s,sizeof(s)))
     {
          if(s.getno()==ID)
          {
               s.display();
               found='y';
          }
          i++;
     }
     if(found=='n') cout<<"\nThe ID "<<ID<<" is not in the file...\n";
     fin.close();
}

//to add the student data into file
void add()
{
         char ch='y';
         ofstream fout("stud.dat",ios::out|ios::app|ios::binary);//out stream
         while(ch=='y'||ch=='Y')
         {
              s.getdata();
              fout.write((char*)&s,sizeof(s));
              cout<<"\nDo you want to add more : ";
              cin>>ch;
         }
         cout<<"\nData Appended and Transferred to file...\n";
         fout.close();
}
