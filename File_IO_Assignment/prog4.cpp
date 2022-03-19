//prog.4 :count the number of words that ends with 's' character.
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
  
            if(word[strlen(word)-1]=='s')
                count++;
              
	
	      
	  }
	  else
	  {
	      continue;
	  }
	}
    }
  cout << "Total no of words that have end character 's': " << count << endl;

   fin.close();
}

