/* 1.Write a program which accept one number from user and print that number of even numbers on screen. */

#include<stdio.h>

void DisplayEven(int);

void DisplayEven(int iNum)
{
  int iCnt = 0;
  
  if(iNum <= 0)
    {
      return;
    }

  for(iCnt = 1; iCnt <= iNum; iCnt++)
    {
      printf("%d\t", (iCnt * 2));
    }

  printf("\n");
}

int main(int argc, char* argv[])
{
  int iNum = 0;
  
  printf("Enter Number=> ");
  scanf("%d", &iNum);

  DisplayEven(iNum);

  return 0;
}
