/*************************
*Joseph Barton
*CPSC 1021-004, F16
*PA-1
*jbarto3
**************************/

 #include "WordFind.h"
 #include <stdbool.h>
 #include <stdlib.h>
 #include <stdio.h>

int printInstruction(int numAns, int numCorrect, char matrix[3][3],
                    int *answer, bool *correct, char *ans[])
{
  int play; // variable to start the game or quit

/*Print the instructions the game and store a value to play or not */

  printf("Welcome to the WordFind program! "
          "You will be given a grid of characters.\n"
          "The grid has various words hidden in it.\n"
          "Your job is to find the hidden words.\n"
          "The letters to the words will be contigous.\n"
          "If you are ready for the challenge enter 1 or 0 to quit: ");
                scanf("%d",&play);
                if(play == 1)
                  printGame(numAns,numCorrect,matrix,answer,correct,ans);
                else
                {
                  printf("Thank you for playing!\n");
                  return 0;
                }
                return 0;
}

void printGame(int numAns, int numCorrect, char matrix[3][3], int *answer,
               bool *correct,  char *ans[])
{

    int a; //variable to hold answer

  /*Printing the game board and the corresponding letters */

  printf("\n\n");

  printf("The numbers in this grid map to letters in the "
          "wordFind grid below.\n");
  printf("There are %d words in the word grid. ", numAns);
  printf("Define the answer using the numbers in the first grid.\n");

  printf("\n\n\n");

  printf("+---+---+---+\n"
         "| 1 | 2 | 3 |\n"
         "+---+---+---+\n"
         "| 4 | 5 | 6 |\n"
         "+---+---+---+\n"
         "| 7 | 8 | 9 |\n"
         "+---+---+---+\n");

  printf("\n\n\n");

  printf("WORDFIND PUZZLE\n");

  printf("+---+---+---+\n"
         "| %c | %c | %c |\n",
    matrix[0][0],matrix[0][1],matrix[0][2]);
  printf("+---+---+---+\n"
         "| %c | %c | %c |\n",
    matrix[1][0],matrix[1][1],matrix[1][2]);
  printf("+---+---+---+\n"
         "| %c | %c | %c |\n",
   matrix[2][0],matrix[2][1],matrix[2][2]);
  printf("+---+---+---+\n");

  printf("\n\n\n");

    printWords(correct,ans);
    /*Total number of answers entered correctly
        print out final time*/
    if(numCorrect == numAns)
    {
      printf("Congratulations you found all the words!!!\n");
      exit(0);
    }
    printf("Enter your answer: ");
    scanf("%d",&a);
    isCorrectAnswer(numAns,correct,numCorrect,answer,a,matrix,ans);

}

void printWords(bool *correct, char *ans[])
{
  /* Determine string length of each of the words then prints out blanks
      for each word, if the user entered a correct answer it prints out
      the word instead of blanks*/
  int stringA, stringB, i;
  stringA = strlen(ans[0]);
  stringB = strlen(ans[1]);

  if(correct[0] == true)
    printf("%s", ans[0]);
  else
    for(i=0;i<stringA;i++)
      printf("_ ");

    printf("    ");
    if(correct[1] == true)
      printf("%s", ans[1]);
    else
        for(i=0;i<stringB;i++)
          printf("_ ");

    printf("\n\n");

}

bool isCorrectAnswer(int numAns, bool *correct, int numCorrect,
                      int *answer, int a, char matrix[3][3], char **ans)
{
    /*Checking the user entered value against corrected answers,
      updating the count for correct answers and then
      calling the updateMatrix to remove that answer*/

    if(a == answer[0])
        {
         if(correct[0] == false)
          {
            numCorrect = numCorrect + 1;
            correct[0] = true;
            updateMatrix(numAns,numCorrect,matrix,answer,correct,a,ans);
            return true;
          }
        }
    else if(a == answer[1])
    {
        if(correct[1] == false)
          numCorrect = numCorrect + 1;
          correct[1] = true;
          updateMatrix(numAns,numCorrect,matrix,answer,correct,a,ans);
          return true;
    }
    /*Incorrect answer entered, tell user and prompt re-entry */
    else
    {
      printf("Try Again.\n");
      printGame(numAns,numCorrect,matrix,answer,correct,ans);
      return false;
    }
    return false;
  }


/*When the player returns a correct word the characters in the matrix are
 replaced with spaces and the word is printed below the matrix.  */

 void updateMatrix(int numAns, int numCorrect, char matrix[3][3], int *answer,
               bool *correct,int a, char **ans)
{
    if(a == answer[0])
    {
      matrix[0][0] = ' ';
      matrix[1][0] = ' ';
      matrix[2][0] = ' ';
      matrix[0][1] = ' ';
      matrix[1][1] = ' ';
      printGame(numAns,numCorrect,matrix,answer,correct,ans);
    }
    else
    {
      matrix[0][2] = ' ';
      matrix[1][2] = ' ';
      matrix[2][1] = ' ';
      matrix[2][2] = ' ';
      printGame(numAns,numCorrect,matrix,answer,correct,ans);
    }
}
