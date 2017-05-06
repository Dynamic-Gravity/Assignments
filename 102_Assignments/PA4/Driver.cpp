/*#includes go here*/
#include <iostream>
#include <fstream>
#include <vector>
#include "CpscCourse.h"
#include "Faculty.h"
#include "Student.h"
using namespace std;

void fillFaculty(ifstream&, vector<Faculty>&);
void fillStudents(ifstream&, vector<Student>&);
void fillCpscCourse(ifstream&, vector<CpscCourse>&);


int main(int argc, char* argv[])
{
    ifstream inStudent(argv[1]);
    ifstream inCourse(argv[2]);
    ifstream inFaculty(argv[3]);
    /*Use these to store the courses, students and faculty read from
     *the files. */
    vector <CpscCourse> courses;
    vector <Student> stu;
    vector <Faculty> fac;

    fillFaculty(inFaculty, fac);
    fillStudents(inStudent, stu);
    fillCpscCourse(inCourse, courses);

    inStudent.close();
    inCourse.close();
    inFaculty.close();

	return 0;
}

void fillFaculty(ifstream& inFaculty, vector<Faculty>& fac)
{
  int size;
  inFaculty >> size;
  Faculty teacher;
  string temp1, temp2, temp3, temp4;
  int location;
  inFaculty >> temp1;
  inFaculty >> temp2;
  inFaculty >> temp3;
  inFaculty >> location;
  inFaculty >> temp4;

  cout << temp3 << endl;
}

void fillStudents(ifstream& inStudent, vector<Student>& stu)
{
	/*Your code goes here*/

}

void fillCpscCourse(ifstream& in, vector <CpscCourse>& course)
{
	/*Your code goes here*/

}
