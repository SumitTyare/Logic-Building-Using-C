/* 4. Accept one numbers from user and display the output as.
Input : 543
Output : Three Four Five */

#include<stdio.h>

typedef unsigned int UINT;

void DisplayDigitInWords(UINT);

void DisplayDigitInWords(UINT uiNo)
{
  UINT uiTemp = 0;
  int iDigit = 0;

  uiTemp = uiNo;
  while(uiTemp != 0)
    {
      iDigit = uiTemp % 10;
      uiTemp = uiTemp / 10;

      switch(iDigit)
	{

	case 0:
	  printf("ZERO\t");
	  break;
	
	case 1:
	  printf("ONE\t");
	  break;

	case 2:
	  printf("TWO\t");
	  break;

	case 3:
	  printf("THREE\t");
	  break;

	case 4:
	  printf("FOUR\t");
	  break;

	case 5:
	  printf("FIVE\t");
	  break;
	
	case 6:
	  printf("SIX\t");
	  break;

	case 7:
	  printf("SEVEN\t");
	  break;

	case 8:
	  printf("EIGHT\t");
	  break;

	case 9:
	  printf("NINE\t");
	  break;

	default :
	  exit(0);
	}
    }  
}

int main(int argc, char *argv[])
{
  UINT uiNum = 0;
  
  printf("Enter The Number => ");
  scanf("%u", &uiNum);

  DisplayDigitInWords(uiNum);

  return 0;
}
