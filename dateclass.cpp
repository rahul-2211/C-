//to find age of the user.
#include<iostream>
#include<ctime>

using namespace std;
class dateclass
{	public:
		//date,month,year public data member
		int dt,mon,yr;
		
	public:
		//member functions of class
		//to set current date
	  	dateclass setDate()
	  	{
	  		
	  		dateclass t1;
	  		time_t now=time(0);
	  		tm *ltm=localtime(&now);
	  		t1.yr=1900+ltm->tm_year;
	  		t1.mon=1+ltm->tm_mon;
	  		t1.dt=ltm->tm_mday;
	  		return t1;
	  		//it returns the current date 	
	  	
	  	}
	  	
	  	//to get current date in class variable
	  	dateclass getDate()
	  	{
	  		dateclass t2;
	  		t2.setDate();
	  		return t2;
	  	
	  	}
	  	
	  	//to get date of birth from user for find age
	  	dateclass setDoB(dateclass d1)
	  	{
	  		cout<<"enter date mon and yr"<<endl;
	  		cin>>d1.dt>>d1.mon>>d1.yr;
	  		return d1;
	  	}
	  	
	  	//to find age 
	  	dateclass findAge(dateclass p1)
	  	{	
	  		dateclass p2;
	  		dateclass t3,t4,t6;
	  		t3=p1.setDate();
	  		t4=p2.setDoB(p2);
	  		t6.yr=t3.yr-t4.yr;
	  		t6.mon=t3.mon-t4.mon;
	  		t6.dt=t3.dt-t4.dt;
	  		return t6;	
	  	}
	  	

};

//main body
int main()
{
	dateclass t1,t3;
	t3=t1.findAge(t1);//calling findAge() function
	cout<<"your age is: "<<t3.yr<<"years " <<t3.mon<<" months "<<t3.dt<<" day ";

}





