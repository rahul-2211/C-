//to find time difference.
#include<iostream>
#include<ctime>

using namespace std;
class timeclass
{	private:
		int hr,min,sec;
	 
	public:
		//set current time 
	  	timeclass setTime()
	  	{
	  		timeclass t1;
	  		int h;int m;int s;
	  		//to get current time
	  		time_t now=time(0);
	  		tm *ltm=localtime(&now);
	  		t1.hr=ltm->tm_hour;
	  		t1.min=ltm->tm_min;
	  		t1.sec=ltm->tm_sec;
	  		cout<<"current time: "<<t1.hr<<" : "<<t1.min<<" : "<<t1.sec<<endl;
	  		//it returns the current time
	  		return t1;
	  		
	  	}
	  	
	  	//to get time from the user
	  	timeclass getTime()
	  	{
	  		timeclass t2;
	  		cout<<"enter hour min and second: "<<endl;
	  		cin>>t2.hr>>t2.min>>t2.sec;
	  		return t2;
	  		//it return the user inputs
	  	
	  	}
	  	
	  	//difference between current time and user entered time
	  	void sleepTime(timeclass p1,timeclass p2)
	  	{	
	  		timeclass t3,t4,t6;
	  		t3=p1.setTime();
	  		t4=p2.getTime();
	  		t6.hr=t3.hr-t4.hr;
	  		t6.min=t3.min-t4.min;
	  		t6.sec=t3.sec-t4.sec;
	  		cout<<"hour: "<<t6.hr<<"\nmin: "<<t6.min<<"\nsec: "<<t6.sec;
		}

};//end of the class


int main()
{
	timeclass t1,t2;
	t1.sleepTime(t1,t2);//calling the sleepTime function.
	
}





