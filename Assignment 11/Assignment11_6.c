/* 6. Accept array of characters from user and accept one character. 
   Return occurrence of that character without considering case. */

#include<stdio.h>
#include<malloc.h>

int LetterFreq(char [], char);

int LetterFreq(char chArr[], char chLett)
{
  char chConvertCase = '\0';
  int iCnt = 0, iOccCount = 0;

  if((chLett >= 'A') && (chLett <= 'Z'))
    {
      chConvertCase = chLett + 32;
    }
  else if((chLett >= 'a') && (chLett <= 'z'))
    {
      chConvertCase = chLett - 32;
    }
  
  while(chArr[iCnt] != '\0')
    {
      if((chArr[iCnt] == chLett) || (chArr[iCnt] == chConvertCase))
	{
	  iOccCount++;
	}
      
      iCnt++;
    }

  return iOccCount;
}


int main(int argc, char* argv[])
{
  char chArr[100], chLett = '\0';
  int iOccCount = 0;
  
  printf("\nENTER STRING : ");
  scanf("%[^'\n']c", chArr);

  printf("\nENTER THE LETTER YOU WANT TO SEARCH FOR OCCURANCE : ");
  scanf(" %c", &chLett);
  
  iOccCount = LetterFreq(chArr, chLett);

  printf("\nTOTAL OCCURANCE OF LETTER \'%c\' WITHOUT CONSIDERING CASE IN GIVEN STRING IS : %d\n", chLett, iOccCount);

  return 0;
}
