// //file handling I/O 

// #include <iostream>
// #include <fstream>


// using namespace std;

// int main()
// {

//     fstream myfile;
//     myfile.open("file.txt",ios::in);
//     if(!myfile)
//     {
//         cout<<"the file can't open"<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream input;string str;
    input.open("data.txt");
    if(!input)
    {
        cout<<"file didn't open"<<endl;
    }
    else
    {
        while(getline(input,str))
        {
            // input>>str;
            cout<<str<<" ";
        }
    }
  //  input.close("data.txt");
}









