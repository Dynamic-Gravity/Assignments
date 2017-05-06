/*************************
*Joseph Barton
*CPSC 1021-004, F16
*PA-1
*jbarto3
**************************/

#ifndef WORDFIND_H
#define WORDFIND_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int printInstruction(int numAns, int numCorrect, char matrix[3][3],
                    int *answer, bool *correct, char *ans[]);


void printGame(int numAns, int numCorrect, char matrix[3][3], int *answer,
               bool *correct, char *ans[]);


void printWords(bool *correct, char *ans[]);


bool isCorrectAnswer (int numAns, bool *correct, int numCorrect,
                      int *answer, int a, char matrix[3][3], char **ans);



void updateMatrix(int numAns, int numCorrect, char matrix[3][3], int *answer,
               bool *correct,int a, char *ans[]);

#endif
