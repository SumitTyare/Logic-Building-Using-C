/* 7. Accept one number from user and print that number of * on screen. */

#include<stdio.h>                                                          
                                                                           
void Display(int);                                                
                                                                           
void Display(int iNum)                                       
{
  int iCnt = iNum;
  
  while(iCnt != 0)
    {
      printf("*\t");
      iCnt--;
    }

  printf("\n");
} 
                                                                           
int main(int argc, char* argv[])                                           
{                                                                          
  int iNum = 0;
                                                                           
  printf("Enter Number => ");                                            
  scanf("%d", &iNum);                                                                                                          
                                                                           
  Display(iNum);                                                 
                                                                           
  return 0;                                                                
}                                                                          
