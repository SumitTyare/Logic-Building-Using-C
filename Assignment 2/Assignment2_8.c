/* 8. Accept one character from user and convert case of that character.
Input : A
Output : a
Input : D
Output : d */

#include<stdio.h>               
                                
void ConvertCase(char *);              
                                
void ConvertCase(char *chptrLet)          
{                               
  if((*chptrLet >= 'A') && (*chptrLet <= 'Z'))
    {
      *chptrLet = (*chptrLet) + 32;
    }
  else if((*chptrLet >= 'a') && (*chptrLet <= 'z'))
    {
      *chptrLet = (*chptrLet) - 32;
    }
}                               
                                
int main(int argc, char* argv[])
{                               
  char chLet = '\0';                 
                                
  printf("Enter Character => ");   
  scanf("%c", &chLet);           
                                
  ConvertCase(&chLet);                

  printf("After Case Converting => %c\n", chLet);
  
  return 0;                     
}                               
