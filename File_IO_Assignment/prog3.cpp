//prog.3 :count the number of words that start with 'e' character.
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
  
            if(word[0]=='e')
                count++;
              
	
	      
	  }
	  else
	  {
	      continue;
	  }
	}
    }
  cout << "Total no of words that start with character 'e': " << count << endl;

   fin.close();
}

