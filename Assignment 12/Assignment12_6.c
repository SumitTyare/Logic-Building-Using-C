/* 6. Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255. */

#include<stdio.h>

void DisplayASCIITable();


void DisplayASCIITable()
{
  int iCnt = 0;

  printf("\nSYMBOL\t\tDECIMAL\t\tHEXADECIMAL\t\tOCTAL\n");
  
  for(iCnt = 0; iCnt <= 255; iCnt++ )
    {
      printf("\n%c\t\t%d\t\t%x\t\t%o", iCnt, iCnt, iCnt, iCnt);
    }

  printf("\n");
}



int main(int argc, char* argv[])
{
  DisplayASCIITable();
  
  return 0;
}
