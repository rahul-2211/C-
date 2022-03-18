
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input;string str,str2;
    input.open("data.txt", ios::out);
    if(!input)
    {
        cout<<"file didn't open"<<endl;
    }
    else
    {
        while(!input.eof())
        {
            input>>str>>str2;
            cout<<str<<'\t'<<str2<<endl;
        }
    input.close();
    }
}



