/* 10. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format. */

#include<stdio.h>

void DisplayASCII(char);


void DisplayASCII(char chChar)
{
  printf("\nSYMBOL\t\tDECIMAL\t\tHEXADECIMAL\t\tOCTAL\n");

  printf("\n%c\t\t%d\t\t%x\t\t%o", chChar, chChar, chChar, chChar);
 
  printf("\n");
}



int main(int argc, char* argv[])
{
  char chChar = '\0';

  printf("\nENTER CHARACTER : ");
  scanf("%c", &chChar);
  
  DisplayASCII(chChar);
  
  return 0;
}
