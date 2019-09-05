/* 7. Accept one number from user and print that number of * on screen. */

#include<stdio.h>

void Display(int);

void Display(int iNum)
{
  int iCnt = 0;

  iCnt = iNum;
  while(iCnt != 0)
    {
      printf("*");
      iCnt--;
    }

  printf("\n");
}

int main(int argc, char* argv[])
{
  int iNum = 0;
  
  printf("Enter The Number=> ");
  scanf("%d", &iNum);

  Display(iNum);
  
  return 0;
}
