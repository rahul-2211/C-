#include <iostream>

using namespace std;

int main()
{
    int a=3;
    try
    {
        if(a==1)
            throw a;
        else if(a==2)
            throw 'A';
        
        else if(a==3)
            throw 4.5;
    }
    catch(int x)
    {
        cout<<"int val "<<x<<endl;
    }
    catch(char x)
    {
        cout<<"char val "<<x<<endl;
    }
    catch(double x)
    {
        cout<<"double val "<<x<<endl;
    }
    return 0;
}
//////////////////////////////////////////////////////
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int a = 3;
  try
  {
    if (a == 1)
      throw a;
    else if (a == 2)
      throw 'A';

    else if (a == 3)
      throw 4.5f;
  }
  catch (int x)
  {
    cout << "int val " << x << endl;
  }
  catch (char x)
  {
    cout << "char val " << x << endl;
  }
  catch (float x)
  {
    cout << "float val " << x << endl;
  }
  return 0;
}

