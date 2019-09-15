/* 4. Write a program which accept 5 floats from user and display all such numbers which are greater than 8.9 */

#include<stdio.h>
#include<malloc.h>

#define CHECKNUM 8.9

void DisplayNums(float *, int);

void DisplayNums(float *fArr, int iNo)
{
  int iCnt = 0;
  float *fTemp = NULL;

  printf("\nDISPLAYING NUMBERS WHICH IS GREATER THAN : %f\n", CHECKNUM);
  
  for(iCnt = 0, fTemp = fArr; iCnt < iNo; iCnt++, fTemp++)
    {
      if(*fTemp > CHECKNUM)
	{
	  printf("%f\t", *fTemp);
	}
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  int iNo = 0, iCnt = 0;
  float *fArr = NULL;

  printf("\nHOW MANY ELEMENTS : ");
  scanf("%d", &iNo);

  fArr = (float *)malloc(iNo * sizeof(float));
  
  printf("\nENTER THE ELEMENTS :\n");

  for(iCnt = 0; iCnt < iNo; iCnt++)
    {
      printf("\nENTER ELEMENT %d : ", iCnt);
      scanf("%f", &fArr[iCnt]);
    }

  DisplayNums(fArr, iNo);

  return 0;
}
