/* 4. Write a program which accept string from user and display below pattern
Input : SUMIT
Output : 
S	U	M	I	T	
S	*	*	*	T	
S	*	*	*	T	
S	*	*	*	T	
S	U	M	I	T	

*/

#include<stdio.h>

void DisplayPattern(char []);
int strlenX(char []);


int strlenX(char chString[])
{
  int iStringLen = 0, iIndex = 0;

  while(chString[iIndex] != '\0')
    {
      iStringLen++;
      iIndex++;
    }

  return iStringLen;
}


void DisplayPattern(char chString[])
{
  int iStringLen = 0, iIndex = 0, iCounter = 0;

  iStringLen = strlenX(chString);

  iCounter = 1;
  while(iCounter <= iStringLen)
    {
      iIndex = 0;
      
      while((chString[iIndex] != '\0'))
	{
	  if((iIndex == 0) || (iIndex == (iStringLen - 1)) || (iCounter == iStringLen) || (iCounter == 1))
	    {
	      printf("%c\t", chString[iIndex]);
	    }
	  else
	    {
	      printf("*\t");
	    }

	  iIndex++;
	}

      printf("\n");

      iCounter++;
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  char chString[100];
  
  printf("\nENTER STRING : ");
  scanf("%[^'\n']s", chString);

  DisplayPattern(chString);
  
  return 0;
}
