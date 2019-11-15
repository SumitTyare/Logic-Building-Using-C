/* 3. Write a program which accept string from user and display below pattern
Input : Sumit Tyare
Output : 
S	
S	u	
S	u	m	
S	u	m	i	
S	u	m	i	t	
S	u	m	i	t	 	
S	u	m	i	t	 	T	
S	u	m	i	t	 	T	y	
S	u	m	i	t	 	T	y	a	
S	u	m	i	t	 	T	y	a	r	
S	u	m	i	t	 	T	y	a	r	e	

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
      
      while((chString[iIndex] != '\0') && (iIndex < iCounter))
	{
	  printf("%c\t", chString[iIndex]);

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
