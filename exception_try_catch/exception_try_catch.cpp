#include <iostream>

using namespace std;


int main ()
{
  int n1, n2, ans;

  cout << "enter n1 and n2: " << endl;
  cin >> n1 >> n2;

  try
  {
    if (n1 == n2)
      {
	throw n2;
      }
    else
      {
    	ans = n1 / n2;
    	cout << "Ans  " << ans<<endl;
    	if(ans<0)
    	{
    	    throw 'e';
    	}
    
      }
  }

  catch (int x)
  {
    cout << "can't divid same num:  " << x<<endl;

  }

  catch (char x)
  {
    cout << "Exception: div less than 0   " <<endl;

  }
   catch (...)
  {
    cout << "Exception: Unknown  " <<endl;

  }

  cout << "end of the program " << endl;



  return 0;
}

