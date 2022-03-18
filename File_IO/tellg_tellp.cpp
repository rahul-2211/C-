#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream file;
file.open("abc.txt");
file<<"this is my file"<<endl;
long pos=file.tellp();
file.seekp(pos+6);
file<<"again my file"<<endl;
file.close();
cout<<"done!!";
return 0;
}
