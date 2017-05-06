/*************************
*Joseph Barton
*CPSC 1021-004, F16
*PA-2
*jbarto3
**************************/

#include <iostream>
#include "category.h"

string Category::getType()
{
   return type;
}

int Category::getnumGrades()
{
  return numGrades;
}

double Category::getGrades()
{
  return *grades;
}

int Category::getTotalGrades()
{
  return totalGrades;
}

double Category::getPercent()
{
  return percent;
}

void Category::setType(string n)
{
  type = n;
}

void Category::setnumGrades(int t)
{
  numGrades = t;
}

void Category::setGrades(double *temp)
{
  *grades = *temp;
}

void Category::setTotalGrades(int a)
{
  totalGrades = a;
}

void Category::setPercent(double p)
{
  percent = p;
}
