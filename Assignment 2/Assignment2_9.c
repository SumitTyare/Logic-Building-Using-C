/* 9. Accept one number and print that number of elements from Fibonacci series.
Input : 9
Output : 1 1 2 3 5 8 13 21 34 */

#include<stdio.h>                                                          
                                                                           
void DisplayFib(int);                                                
                                                                           
void DisplayFib(int iNum)                                       
{
  int iFib = 0, iStart = 0, iEnd = 1, iCnt = 0;
  
  while(iCnt <= iNum)
    {
      if(iStart == 0)
	{
	  printf("%d\t", iStart);
	  printf("%d\t", iEnd);
	  iCnt += 2;
	}
      
      iFib = iStart + iEnd;
      printf("%d\t", iFib);
      iStart = iEnd;
      iEnd = iFib;
      iFib = 0;
      iCnt++;
    }

  printf("\n");
} 
                                                                           
int main(int argc, char* argv[])                                           
{                                                                          
  int iNum = 0;
                                                                           
  printf("Enter Number => ");                                            
  scanf("%d", &iNum);                                                                                                          
                                                                           
  DisplayFib(iNum);                                                 
                                                                           
  return 0;                                                                
}                                                                          
