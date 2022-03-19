/*#include <iostream>
#include <fstream>

using namespace std;

struct student
{
    char name[20],branch[20],loc[30];
    int ID;
};

int main()
{
    struct student s;
    ofstream out("student.txt");
    int i=1,ch,id;
    //char name[20],branch[20],loc[30];
    cout<<"enter your choice:";
    cin>>ch;
    while(1)
    {
	    cout<<"1: enter student detail"<<endl<<"2: find student"<<endl;
	    switch(ch)
	    {
		case 1:
			    char c='y';
		       do{
			cout<<"enter student ID name branch and Location of student "<<i<<endl;
		        cin>>s.ID>>s.name>>s.branch>>s.loc;
		        out<<s.ID<<" "<<s.name<<" "<<s.branch<<" "<<s.loc;
		        i++;
		      //  break;
	    
			cout<<"do you want ot enter more date?(y/n) ";
			cin>>c;
	    		 }while(c!='n');
			break;
		case 2:
		        cout<<"enter ID of the student :";
		        cin>>id;
		        if(id==s.ID)
		        {
		            cout<<s.ID<<" "<<s.name<<" "<<s.branch<<" "<<s.loc;
		        }
		        break;
	       }
      }   
    return 0;
}*/


#include <iostream>
#include <fstream>

using namespace std;

struct student
{
    char name[20],branch[20],loc[30];
    int ID;
};

int main()
{
    struct student s;
    ofstream out("student.txt");
    int i=1,ch,id;
    //char name[20],branch[20],loc[30];
    while(ch!=9)
    {
	    cout<<"1: enter student detail"<<endl<<"2: find student"<<endl;
    cout<<"enter your choice:";
    cin>>ch;
			 //   char c='y';
	    switch(ch)
	    {
		case 1:
		      // do{
			cout<<"enter student ID name branch and Location of student "<<i<<endl;
		        cin>>s.ID>>s.name>>s.branch>>s.loc;
		        out<<s.ID<<" "<<s.name<<" "<<s.branch<<" "<<s.loc<<endl;
		        i++;
		        break;
	    
			//cout<<"do you want ot enter more date?(y/n) ";
			//cin>>c;
	    		// }while(c!='n');
// 			break;
		
		case 2:
		        cout<<"enter ID of the student :";
		        cin>>id;
		        if(id==s.ID)
		        {
		            cout<<s.ID<<" "<<s.name<<" "<<s.branch<<" "<<s.loc<<endl;
		        }
		        break;
	       }
      }   
    return 0;
}



/*#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct student
{
    char name[20],branch[20],loc[30];
    int ID;
};

void display()
{
    fstream f; struct student stu;
    f.open("student.txt",ios::in|ios::binary);
    while(!f.eof())
    { 
       f.read((char*)&stu,sizeof(stu));
        cout<<" "<<stu.ID<<" "<<stu.name<<" "<<stu.branch<<" "<<stu.loc<<endl;
    } 
   f.close();
}


int main()
{
    struct student s;
    fstream out("student.txt");
    int i=1,ch,id;
    //char name[20],branch[20],loc[30];
    while(ch!=9)
    {
	    cout<<"1: enter student detail"<<endl<<"2: find student"<<endl;
    cout<<"enter your choice:";
    cin>>ch;
			 //   char c='y';
	    switch(ch)
	    {
		case 1:
		      // do{
			cout<<"enter student ID name branch and Location of student "<<i<<endl;
		        cin>>s.ID>>s.name>>s.branch>>s.loc;
		        out<<s.ID<<" "<<s.name<<" "<<s.branch<<" "<<s.loc<<endl;
		        i++;
		        break;
	    
			//cout<<"do you want ot enter more date?(y/n) ";
			//cin>>c;
	    		// }while(c!='n');
// 			break;
		
		case 2:
		      //  cout<<"enter ID of the student :";
		      //  cin>>id;
		      //  out>>id;
		      //  while(!out.eof())
		      //  {
		      ////  if(id==s.ID)
		      ////  {
		      ////      cout<<s.ID<<" "<<s.name<<" "<<s.branch<<" "<<s.loc<<endl;
		      ////  }
		      
		      //  }
		      display();
		        break;
	       }
      }   
      out.close();
    return 0;
}
*/
