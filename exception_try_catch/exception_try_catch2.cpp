#include <iostream>

using namespace std;

int main()
{
    int a=1;
    try
    {
        try
        {
            throw a;
        }
        catch(int x)
        {
            cout<<"exception in inner tyr-catch block."<<endl;
            throw x;
        }
    }
    catch(int x)
        {
            cout<<"exception in outer tyr-catch block."<<endl;
           
        }

    return 0;
}

