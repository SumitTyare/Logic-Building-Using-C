/* 6. Accept range from user and perform addition of all elements form that range.
Input : 2 5
Output : 14
*/

#include<stdio.h>

int CalcRangeSum(int, int);

int CalcRangeSum(int iStart, int iEnd)
{
  int iCnt = 0, iSum = 0;
  
  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
      iSum = iSum + iCnt;
    }

  return iSum;
}


int main(int argc, char* argv[])
{
  int iStart = 0, iEnd = 0, iSum = 0;
  
  printf("\nENTER START : ");
  scanf("%d", &iStart);
  printf("\nENTER END : ");
  scanf("%d", &iEnd);

  iSum = CalcRangeSum(iStart, iEnd);

  printf("\nSUM OF RANGE FROM %d TO %d IS : %d\n", iStart, iEnd, iSum);
  
  return 0;
}
