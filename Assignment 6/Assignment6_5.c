/* 5. Accept number from user and display below pattern as.
Input : 5
Output : A A A A A
*/


#include<stdio.h>

void DisplayPattern(int);

void DisplayPattern(int iNo)
{
  int iCnt = 0;
  
  while(iCnt < iNo)
    {
      printf("A\t");
      iCnt++;
    }

  printf("\n");
}

int main(int argc, char *argv[])
{
  int iNo = 0;
  
  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNo);

  DisplayPattern(iNo);
  
  return 0;
}
