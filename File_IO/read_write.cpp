#include <iostream>
#include <fstream>
//ios::ate "sets the stream's position indicator to the end of the stream on opening."


using namespace std;

int
main ()
{
  fstream fp;
  char buf[100];
  int pos;
  fp.open ("data.txt", ios::out | ios::ate);
  cout << "writing to a file " << endl;
  fp << "line one" << endl;
  fp << "line two" << endl;
  pos = fp.tellp ();
  cout << "current posintion:" << pos << endl;
  fp.seekp (-8, ios::cur);
  cout << endl << "random data";
  fp.seekp (8, ios::beg);

  fp << "hello world";
  fp.close ();
  cout << "done writing" << endl;
  fp.open ("data.txt");
  cout << "reading the file" << endl;
  fp.seekg (0);
  while (fp.getline (buf, 100))
    cout << buf << endl;
  pos = fp.tellg ();
  cout << "pos pointer is at :" << pos << endl;
  return 0;

  return 0;
}

