/* 10. Accept number from user and return its generic root.
Input : 7429
Output : 4 (7+4+2+9 -> 22 -> 2+2 -> 4 )
Input : 90281
Output : 2 (9+0+2+8+1 -> 20 -> 2+0 -> 2)
*/

#include<stdio.h>

int CalcGenRoot(int);

int CalcGenRoot(int iNo)
{
  int iTemp = 0, iSum = 0;
  
  iTemp = iNo;
  while(iTemp != 0)
    {
      iSum = iSum + (iTemp % 10) ;

      iTemp = (iTemp / 10);
    }

  if(iSum > 9)
    {
      CalcGenRoot(iSum);
    }
  else
    {
      return iSum;
    }
}


int main(int argc, char* argv[])
{
  int iNo = 0, iGenRoot = 0;
  
  printf("\nENTER THE NUMBER : ");
  scanf("%d", &iNo);

  iGenRoot = CalcGenRoot(iNo);

  printf("\nGENERIC ROOT OF THE NUMBER %d IS : %d\n", iNo, iGenRoot);
  
  return 0;
}
