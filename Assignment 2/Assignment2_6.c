/* 6. Accept two integers from user and swap contents of that two integers without using temporary variable. */

                                                                         
#include<stdio.h>                                                        
                                                                         
void SwapInt(int *, int *);                                         
                                                                         
void SwapInt(int *iNum1, int *iNum2)                              
{
  *iNum1 = *iNum1 + *iNum2;
  *iNum2 = *iNum1 - *iNum2;
  *iNum1 = *iNum1 - *iNum2;
}                                                                        
                                                                         
int main(int argc, char* argv[])                                         
{                                                                        
  int iNum1 = 0, iNum2 = 0;                                    
                                   
  printf("Enter Number 1 => ");                                          
  scanf("%d", &iNum1);                                                   
  printf("Enter Number 2 => ");                                          
  scanf("%d", &iNum2);                                                   
                                                                         
  SwapInt(&iNum1, &iNum2);                                
                                                                         
  printf("Integers After Swapping iNum1 = %d, iNum2 = %d\n", iNum1, iNum2);
                                                                         
  return 0;                                                              
}                                                                        
