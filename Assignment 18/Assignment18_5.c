/* 5. Write a program which accept number from user and display below pattern
Input : 12345
Output :
5	4	3	2	1	
5	0	0	0	1	
5	0	0	0	1	
5	0	0	0	1	
5	4	3	2	1	

*/

#include<stdio.h>

void DisplayPattern(int);
int NumLen(int);

int NumLen(int iNum)
{
  int iNumLen = 0, iTemp = 0;

  iTemp = iNum;

  while(iTemp != 0)
    {
      iNumLen++;
      
      iTemp = (iTemp / 10);
    }
  
  return iNumLen;
}


void DisplayPattern(int iNum)
{
  int iTemp = 0, iCnt = 0, iNumLen = 0, iCounter = 0;

  iTemp = iNum;

  iNumLen = NumLen(iTemp);
  
  for(iCnt = 1; iCnt <= iNumLen; iCnt++)
    {
      iTemp = iNum;

      iCounter = 1;
      
      while(iTemp != 0)
	{
	  if((iCounter == 1) || (iCounter == iNumLen) || (iCnt == 1) || (iCnt == iNumLen))
	    {
	      printf("%d\t", (iTemp % 10));
	    }
	  else
	    {
	      printf("0\t");
	    }
	  
	  iTemp = (iTemp / 10);

	  iCounter++;
	}
      
      printf("\n");
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  int iNum = 0;
  
  printf("\nENTER NUMBER : ");
  scanf("%d", &iNum);

  DisplayPattern(iNum);
  
  return 0;
}
