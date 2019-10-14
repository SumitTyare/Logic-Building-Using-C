/* 5. Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. (Application should be case insensitive) */

#include<stdio.h>

int ChkExamTime(char chChar)
{
  int iAns = 0;
  
  if((chChar == 'a') || (chChar == 'A'))
    {
      iAns = 1;
    }
  else if((chChar == 'b') || (chChar == 'B'))
    {
      iAns = 2;
    }
  else if((chChar == 'c') || (chChar == 'C'))
    {
      iAns = 3;
    }
  else if((chChar == 'd') || (chChar == 'D'))
    {
      iAns = 4;
    }
  else
    {
      iAns = -1;
    }
  
  return iAns;
}

int main(int argc, char* argv[])
{
  char chChar = '\0';
  int iAns = 0;

  printf("\nENTER THE CHARACTER : ");
  scanf("%c", &chChar);

  iAns = ChkExamTime(chChar);

  if(iAns == 1)
    {
      printf("\nEXAM TIME OF DIVISION %c IS : 07.00 AM \n", chChar);
    }
  else if(iAns == 2)
    {
      printf("\nEXAM TIME OF DIVISION %c IS : 08.30 AM \n", chChar);
    }
  else if(iAns == 3)
    {
      printf("\nEXAM TIME OF DIVISION %c IS : 09.20 AM \n", chChar);
    }
  else if(iAns == 4)
    {
      printf("\nEXAM TIME OF DIVISION %c IS : 10.30 AM \n", chChar);
    }
  else
    {
      printf("\nENTER CORRECT DIVISION...!!!\n");
    }
  
  return 0;
}
