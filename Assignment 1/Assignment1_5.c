/* 5. Accept one number from user and print that number of * on screen. */

#include<stdio.h>

void Display(int);

void Display(int iNum)
{
  int iCnt = 0;
  
  for(iCnt = 0; iCnt < iNum; iCnt++)
    {
      printf("*");
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
