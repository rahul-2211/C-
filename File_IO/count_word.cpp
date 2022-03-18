#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
  fstream fin;
  fin.open ("data.txt");
  int count = 0;
  char word[30];
  if (!fin)
    {
      cout << "file didn't open" << endl;
    }
  else
    {
      while (!fin.eof ())
	{
	  fin >> word;		//input is redirect the cursor in to txt file 
	  count++;
	}
    }
  cout << "Total words: " << count << endl;

   fin.close();
}

