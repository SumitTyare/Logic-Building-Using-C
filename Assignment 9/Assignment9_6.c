/* 6. Accept N numbers from user and print addition of digits of each number. */

#include<stdio.h>
#include<malloc.h>

void DisplayDigitSum(int [], int);
int DigitSum(int);

int DigitSum(int iNum)
{
  int iTemp = 0, iSum = 0;

  iTemp = iNum;
  while(iTemp != 0)
    {
      iSum = iSum + (iTemp % 10);

      iTemp = iTemp / 10;
    }

  return iSum;
}

void DisplayDigitSum(int iArr[], int iLength)
{
  int iCnt = 0, iSum = 0;

  printf("\nDISPLAYING SUM OF DIGIT OF EACH ELEMENT :\n");
  
  for(iCnt = 0; iCnt < iLength; iCnt++, iSum = 0)
    {
      iSum = DigitSum(iArr[iCnt]);

      printf("%d\t", iSum);
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  int *iArr = NULL;
  int iLength = 0, iCnt = 0;
  
  printf("\nHOW MANY ELEMENTS : ");
  scanf("%d", &iLength);

  iArr = (int *)malloc(iLength * sizeof(int));

  printf("\nENTER THE ELEMENTS :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  DisplayDigitSum(iArr, iLength);

  return 0;
}
