//file handling I/O 

#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    
    fstream myfile;
    myfile.open("file.txt",ios::in);
    if(!myfile)
    {
        cout<<"the file can't open"<<endl;
    }
    return 0;
}

