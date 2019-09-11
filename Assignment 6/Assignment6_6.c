/* 6. Accept numbered one character from user and display below
pattern as.
Input : 5 M
Output : M M M M M
*/

#include<stdio.h>

void DisplayPattern(int, char);

void DisplayPattern(int iNo, char chSamp)
{
  int iCnt = 0;
  
  while(iCnt < iNo)
    {
      printf("%c\t", chSamp);
      iCnt++;
    }

  printf("\n");
}

int main(int argc, char *argv[])
{
  int iNo = 0;
  char chSamp = '\0';
  
  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNo);
  
  printf("\nENTER THE CHARACTER : ");
  scanf(" %c", &chSamp);
  
  DisplayPattern(iNo, chSamp);
  
  return 0;
}
