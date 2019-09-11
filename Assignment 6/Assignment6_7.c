/* 7. Accept range from user and display below output.
Input : 5 12
Output : 5 6 7 8 9 10 11 12
*/

#include<stdio.h>

void DisplayRange(int, int);

void DisplayRange(int iStart, int iEnd)
{
  int iCnt = 0;

  iCnt = iStart;
  while(iCnt <= iEnd)
    {
      printf("%d\t", iCnt);
      iCnt++;
    }

  printf("\n");
}

int main(int argc, char *argv[])
{
  int iStart = 0, iEnd = 0;
  
  printf("\nENTER THE START : ");
  scanf("%d", &iStart);
  
  printf("\nENTER THE END : ");
  scanf("%d", &iEnd);
  
  DisplayRange(iStart, iEnd);
  
  return 0;
}
