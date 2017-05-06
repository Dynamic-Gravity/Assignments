/*************************
*Joseph Barton
*CPSC 1021-004, F16
*PA-2
*jbarto3
**************************/

#include <iostream>

using namespace std;

class Category
{
    private:

      string type;
      int numGrades;
      double grades[];
      int totalGrades;
      double percent;

    public:

      //Let C++ provide default constructor for me

      string getType();
      int getnumGrades();
      double getGrades();
      int getTotalGrades();
      double getPercent();

      void setType(string name);
      void setnumGrades(int number);
      void setGrades(double temp[]);
      void setTotalGrades(int total);
      void setPercent(double amount);

};
