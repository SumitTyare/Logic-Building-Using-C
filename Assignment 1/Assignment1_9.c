/* 9. Accept one number and return that number by subtracting 5 from it. */

#include<stdio.h>

int SubNum(int);

int SubNum(int iNum)
{
  return (iNum - 5);
}


int main(int argc, char* argv[])
{
  int iNum = 0, iAns = 0;
  
  printf("Enter The Number=> ");
  scanf("%d", &iNum);

  iAns = SubNum(iNum);

  printf("Number After Subtracting 5 From it is => %d \n", iAns);

  return 0;
}
