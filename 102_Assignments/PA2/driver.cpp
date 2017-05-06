/*************************
*Joseph Barton
*CPSC 1021-004, F16
*PA-2
*jbarto3
**************************/

#include <iostream>
#include <fstream>
#include <string>
#include "category.h"
using namespace std;

int main(int argc, char *argv[])
{
    string objects, t;
    int i, j, n;
    Category cat;

    ifstream in(argv[1]);
    if(in)
    {
      getline(in, objects);
      cout << objects;
      while(!in.eof())
      {
        for(i = 0; i < 3; i++)
        {

          getline(in,t);
          cat.setType(t);
          cout << cat.getType() << endl;
          getline(in, n);
          cat.setnumGrades(n);
          cout << cat.getnumGrades() << endl;
        }

      }
      in.close();
    }
    else
      cout << "***Failed to open file!***" << endl;

  return 0;
}
