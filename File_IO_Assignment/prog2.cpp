//prog.2 :count the number of words that has'a' character.
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main ()
{
  fstream fin;
  fin.open ("data.txt");
  int count = 0;
 
  char word[20];
  if (!fin)
 
    {
      cout << "file didn't open" << endl;
    }
  else
    {
      while (!fin.eof ())
	{
	  fin >> word;	
	  if(strlen(word)>1)
	  {
      for(int i=0;i<word[i];i++)
            if(word[i]=='a')
                count++;
                continue;
	
	      
	  }
	  else
	  {
	      continue;
	  }
	}
    }
  cout << "Total no of words that have character 'a': " << count << endl;

   fin.close();
}

