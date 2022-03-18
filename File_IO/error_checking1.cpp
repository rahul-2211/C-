#include<string>
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream input;string str;
    input.open("data.txt");
    if(!input)
    {
        cout<<"file didn't open"<<endl;
    }
    else
    {
        while(!input.eof())
        {
            input>>str;
            cout<<str<<" ";
        }
    }
input.close();
}









