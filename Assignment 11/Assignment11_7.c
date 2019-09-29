/* 7. Accept array of characters from user and return difference between frequency of capital and frequency of small characters. */

#include<stdio.h>
#include<malloc.h>

int CaseFreqDiff(char []);

int CaseFreqDiff(char chArr[])
{  
  int iCnt = 0, iDiff = 0, iSmall = 0, iCap = 0;

  while(chArr[iCnt] != '\0')
    {
      if((chArr[iCnt] >= 'A') && (chArr[iCnt] <= 'Z'))
	{
	  iCap++;
	}
      else if((chArr[iCnt] >= 'a') && (chArr[iCnt] <= 'z'))
	{
	  iSmall++;
	}
      
      iCnt++;
    }

  iDiff = iCap - iSmall;

  if(iDiff < 0)
    {
      iDiff = -(iDiff);
    }
  
  return iDiff;
}


int main(int argc, char* argv[])
{
  char chArr[100];
  int iDiff = 0;
  
  printf("\nENTER STRING : ");
  scanf("%[^'\n']c", chArr);

  iDiff = CaseFreqDiff(chArr);

  printf("\nDIFFERENCE BETWEEN FREQUENCY OF CAPITAL CASE & SMALL CASE CHARACTERS IN GIVEN STRING IS : %d\n", iDiff);

  return 0;
}
