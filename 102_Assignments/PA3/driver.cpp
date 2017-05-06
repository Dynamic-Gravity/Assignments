#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "WordFind.h"
#include <string>
#include <cstring>
using namespace std;

WordFind readData(ifstream&);
int main (int argc, char *argv[])
{
	ifstream input(argv[1]);
	if(input.fail())
	{
		cout << "Error opening file.";
		exit(1);
	}
		int size, totalans, play;
		string string1, string2;
		int count = 1;

		input >> size;
		input >> totalans;

			char** arrayC = new char*[size];
				for(int i = 0; i < size; ++i)
					arrayC[i] = new char[size];
			int** arrayI = new int*[size];
				for(int i = 0; i < size; ++i)
					arrayI[i] = new int[size];
		string*arrayW = new string[totalans];
		for(int i =0; i < totalans; i++)
				input >> arrayW[i];
			int*arrayNum = new int[totalans];
			for(int i = 0; i < totalans; i++)
				input >> arrayNum[i];
			for(int i = 0; i < size; i++)
					for(int j = 0; j < size; j++)
								input >> arrayC[i][j];

					cout << "Welcome to the WordFind program! "
								  "You will be given a grid of characters.\n"
								  "The grid has various words hidden in it.\n"
								  "Your job is to find the hidden words.\n"
								  "The letters to the words will be contigous.\n"
								  "If you are ready for the challenge enter 1 or 0 to quit: ";
								        cin >> play;
								      	if(play == 0)
													{
														cout << "Thank you for playing!\n";
														return 0;
													}
													else
													cout << "\n \n \n";
														cout << "The numbers in this grid map to letters in the "
														          "wordFind grid below.\n";
														  cout << "There are " << totalans << " words in the word grid. ";
														  cout << "Define the answer using the numbers in the first grid.\n";
																cout << "\n \n \n";
																cout << "+---+---+---+" << endl;
																 for(int i = 0; i <size; i++)
																 {
																		for(int j = 0; j <size; j++)
																		{
																				cout <<"| " << count << " ";
																					count ++;
																		}
																		cout << "|";
																		cout << endl;
																		cout << "+---+---+---+" << endl;
																	}
				cout << "\n \n \n";
				cout << " WORDFIND  PUZZLE " << endl;
				cout << "+---+---+---+" << endl;
				 for(int i = 0; i <size; i++)
				 {
						for(int j = 0; j <size; j++)
						{
								cout <<"| " << arrayC[i][j] << " ";
						}
						cout << "|";
						cout << endl;
						cout << "+---+---+---+" << endl;
					}
					string1 = arrayW[0];
					string2 = arrayW[1];
					int S1size, S2size, a;
					int totalc = 0;
					S1size = string1.length();
					S2size = string2.length();
					for(int i = 0; i < S1size; i++)
							cout << "_ ";

					cout << "     ";

					for(int i = 0; i < S2size; i++)
							cout << "_ ";

							cout << "\n \n";
							if(totalc == totalans)
							{
								cout << "Congratulations you found all the words!" << endl;
								exit(0);
							}
							else
							{
									cout << "Enter your answer: ";
									cin >> a;
							}

return 0;
}
