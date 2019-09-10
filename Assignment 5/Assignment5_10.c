/* 10. Write a program which accept length of three sides of triangle and check whether it is Pythagorean triple or not.
Input : 3 4 5
Output : TRUE
Input : 9 2 8
Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkPythagoreanTriplet(int, int, int);


BOOL ChkPythagoreanTriplet(int Side1, int Side2, int Side3)
{
  int iHypo = 0, iSidesSquare = 0;
  BOOL bAns = FALSE;
  
  if((Side1 > Side2) && (Side1 > Side3))
    {
      iHypo = Side1 * Side1;
      iSidesSquare = (Side2 * Side2) + (Side3 * Side3);
    }
  else if((Side2 > Side1) && (Side2 > Side3))
    {
      iHypo = Side2 * Side2;
      iSidesSquare = (Side1 * Side1) + (Side3 * Side3);
    }
  else
    {
      iHypo = Side3 * Side3;
      iSidesSquare = (Side1 * Side1) + (Side2 * Side2);
    }

  if(iHypo == iSidesSquare)
    {
      bAns = TRUE;
    }

  return bAns;

}

  
int main(int argc, char *argv[])
{
  int iSide1 = 0, iSide2 = 0, iSide3 = 0;
  BOOL bAns = FALSE;
  
  printf("\nENTER THE SIDE 1 : ");
  scanf("%d", &iSide1);
  printf("\nENTER THE SIDE 2 : ");
  scanf("%d", &iSide2);
  printf("\nENTER THE SIDE 3 : ");
  scanf("%d", &iSide3);
  
  bAns = ChkPythagoreanTriplet(iSide1, iSide2, iSide3);

  if(bAns == TRUE)
    {
      printf("\nGIVEN TRIPLET IS PYTHAGOREAN\n");
    }
  else
    {
      printf("\nGIVEN TRIPLET IS NOT PYTHAGOREAN\n");
    }
  
  return 0;
}
