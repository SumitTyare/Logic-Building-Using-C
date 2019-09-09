/* 5. Accept one numbers from user and return its reverse number.
Input : 543
Output : 345 */

#include<stdio.h>

typedef unsigned long int ULINT;

ULINT ReverseNum(ULINT);

ULINT ReverseNum(ULINT uliNo)
{
  ULINT uliTemp = 0, uliRev = 0;
  int iDigit = 0;

  uliTemp = uliNo;
  while(uliTemp != 0)
    {
      iDigit = uliTemp % 10;
      uliRev = (uliRev * 10) + iDigit;
      uliTemp = uliTemp / 10;
    }

  return uliRev;
}

int main(int argc, char *argv[])
{
  ULINT uliNum = 0, uliAns = 0;
  
  printf("Enter The Number => ");
  scanf("%lu", &uliNum);

  uliAns = ReverseNum(uliNum);

  printf("Reverse of %lu is %lu \n", uliNum, uliAns);

  return 0;
}

