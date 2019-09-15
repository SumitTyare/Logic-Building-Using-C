/* 9. Write a program which accept 5 numbers from user and return smallest number from them. */

#include<stdio.h>
#include<malloc.h>

int SmallestNum(int *, int);

int SmallestNum(int *iArr, int iNo)
{
  int iCnt = 0, iMin = 0;
  int *iTemp = NULL;

  iTemp = iArr;
  iMin = *iTemp;
  while(iCnt != iNo)
    {
      if(*iTemp < iMin)
	{
	  iMin = *iTemp;
	}

      iCnt++;
      iTemp++;
    }
  
  return iMin;
}

int main(int argc, char* argv[])
{
  int iNo = 0, iCnt = 0, iMin = 0;
  int *iArr = NULL;
  
  printf("\nHOW MANY ELEMENTS : ");
  scanf("%d", &iNo);

  iArr = (int *)malloc(iNo * sizeof(int));

  printf("\nENTER THE ELEMENTS :\n");

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      printf("\nENTER ELEMENT %d : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  iMin = SmallestNum(iArr, iNo);

  printf("\nSMALLEST NUMBER FROM ARRAY IS : %d\n", iMin);
  
  return 0;
}
