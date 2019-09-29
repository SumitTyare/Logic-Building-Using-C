/* 8. Accept array from user and display below pattern.
Input : 7 2 3 4
Output :
* * * * * * *
* *
* * *
* * * *
*/

#include<stdio.h>
#include<malloc.h>

void DisplayPattern(int [], int);

void DisplayPattern(int iArr[], int iLength)
{  
  int iCnt1 = 0, iCnt2 = 0;

  for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
      for(iCnt2 = 1; iCnt2 <= iArr[iCnt1]; iCnt2++)
	{
	  printf("* ");
	}

      printf("\n");
    }
  
}


int main(int argc, char* argv[])
{
  int *iArr = NULL, iLength = 0, iCnt = 0;
  
  printf("\nHOW MANY ELEMENTS IN ARRAY : ");
  scanf("%d", &iLength);
  iArr = (int *)malloc(iLength * sizeof(int));

  printf("\nENTER THE ELEMENTS OF ARRAY :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("\nENTER %d ELEMENT : ", iCnt);
      scanf("%d", &iArr[iCnt]);
    }

  DisplayPattern(iArr, iLength);

  return 0;
}
