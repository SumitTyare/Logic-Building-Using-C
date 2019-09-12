/* 8. Accept one character from user and depends on that character display its type.
Input : A
Output : It is Capital
Input : d
Output : It is Small
Input : 5
Output : It is Digit
*/

#include<stdio.h>

int ChkCharType(char);

int ChkCharType(char chSample)
{
  int iAns = 0;

  if((chSample >= 'A') && (chSample <= 'Z'))
    {
      iAns = 1;
    }
  else if((chSample >= 'a') && (chSample <= 'z'))
    {
      iAns = 2;
    }
  else if((chSample >= '0') && (chSample <= '9'))
    {
      iAns = 3;
    }
  
  return iAns;
}


int main(int argc, char* argv[])
{
  int iAns = 0;
  char chSample = '\0';
  
  printf("\nENTER THE CHARACTER : ");
  scanf("%c", &chSample);

  iAns = ChkCharType(chSample);

  if(iAns == 1)
    {
      printf("\nENTERED CHARACTER %c IS : CAPITAL\n", chSample);
    }
  else if(iAns == 2)
    {
      printf("\nENTERED CHARACTER %c IS : SMALL\n", chSample);
    }
  else if(iAns == 3)
    {
      printf("\nENTERED CHARACTER %c IS : DIGIT\n", chSample);
    }
  else
    {
      printf("\nENTERED CHARACTER %c IS : SYMBOL\n", chSample);
    }

  return 0;
}
