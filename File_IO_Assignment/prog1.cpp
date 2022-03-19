#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main ()
{
  fstream fin;
  fin.open ("data.txt");
  int count = 0;
 
  char word[15];
  if (!fin)
 
    {
      cout << "file didn't open" << endl;
    }
  else
    {
      while (!fin.eof ())
	{
	  fin >> word;	
      if(!strcmp(word,"the"))
            count++;
	}
    }
  cout << "Total 'the' words: " << count << endl;

   fin.close();
}

