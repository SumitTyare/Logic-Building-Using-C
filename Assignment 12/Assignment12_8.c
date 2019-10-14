/* 8. Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly. */

#include<stdio.h>

void CharOperations(char *);

void CharOperations(char *chChar)
{
  int iCnt = 0;

  printf("\nDISPLAYING THE CHARACTERS AFTER OPERATIONS :\n");
  
  if((*chChar >= 'a') && (*chChar <= 'z'))
    {
      for(iCnt = (*chChar); iCnt >= 'a'; iCnt--)
	{
	  printf("%c\t", iCnt);
	}
    }
  else if((*chChar >= 'A') && (*chChar <= 'Z'))
    {
      for(iCnt = (*chChar); iCnt <= 'Z'; iCnt++)
	{
	  printf("%c\t", iCnt);
	}
    }

  printf("\n");
}


int main(int argc, char* argv[])
{
  char chChar = '\0';
  
  printf("\nENTER CHARACTER : ");
  scanf("%c", &chChar);

  CharOperations(&chChar);

  return 0;
}

