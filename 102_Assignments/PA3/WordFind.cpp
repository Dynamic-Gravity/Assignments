#include "WordFind.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;
/*Default constructor*/
WordFind::WordFind()
{
		matrix = 0;
		matSize = 0;
		numAns = 0;
		answer = 0;
		numCorrect = 0;
}

/*Regular constructor*/
WordFind::WordFind(int matSize, int numAns, string *ans, int *answer, char **matrix)
{

	/*initializes the size for the matrix (matSize)*/
		this->matSize = matSize;


	/*initializes the size for the number of answers (numAns)*/
		this->numAns = numAns;

  /*Allocate memory for the correct bools*/


	/*Now lets initialize the array for the strings for the answers also
	 *initialize the correct to false*/


	/*Allocates memory for the numbers that represents the combination
	 *of integers that represent the answer*/


	/*initializes the answer*/
		this->answer = answer;


	/*This allocates memory for the 2d Array.*/
	int** arrayInt = new int*[matSize];
		for(int i = 0; i < matSize; ++i)
			arrayInt[i] = new int[matSize];


	/*Now lets fill the array*/
		for(int i = 0; i < matSize; i++)
				for(int j = 0; j < matSize; i++)
				{
						int count = 1;
						arrayInt[i][j] = count;
						count ++;
					}


}

/*Destructor*/
WordFind::~WordFind()
{

    /*Call Delete on all the dynamically allocated memory*/


}

void WordFind::setMatrix(char **mat)
{


}

void WordFind::setMatSize(int size)
{
	 	matSize = size;

}

void WordFind::setNumAns(int nAns)
{
		numAns = nAns;

}

void WordFind::setAns(string *ans)
{
	this->ans = ans;

}

void WordFind::setAns(int *answers)
{
	answer = answers;

}


/*prints the instructions for the game.  This will also ask the user
 *if they want to play they should enter a 1 for yes 0 for no.
 *Return their answer.*/
int WordFind::printInstruction()
{
return 1;
}

/*prints the game board */
void WordFind::printGame()
{


}

void WordFind::printWords(int c)
{



}

/*this is the actual driver of the game.  This is called by main.  */
void WordFind::start()
{
	//cout << matSize << endl;

}

/*This function checks the players answer with all possible answers in the
 *array.    If the answer is incorrect return false.  */
bool WordFind::isCorrectAnswer(int a)
{

	return true;
}


/*When the player returns a correct word the characters in the matrix are
 *replaced with spaces and the word is printed below the matrix.  */
void WordFind::updateMatrix(int a)
{
     /*strip out each digit of 'a' then use that number to determine
		 *which subscript needs to replaced with a space */



}
