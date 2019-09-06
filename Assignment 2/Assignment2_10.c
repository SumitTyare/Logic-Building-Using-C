/* 10. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not. */

#include<stdio.h>               
                                
int ChkVowel(char *);              
                                
int ChkVowel(char *chptrLet)          
{
  int iRet = 0;
  
  if((*chptrLet == 'A') || (*chptrLet == 'a') ||
     (*chptrLet == 'E') || (*chptrLet == 'e') ||
     (*chptrLet == 'I') || (*chptrLet == 'i') ||
     (*chptrLet == 'O') || (*chptrLet == 'o') ||
     (*chptrLet == 'U') || (*chptrLet == 'u'))
    {
      iRet = 1;
    }

  return iRet;
}                               
                                
int main(int argc, char* argv[])
{                               
  char chLet = '\0';                 
  int iAns = 0;
  
  printf("Enter Character => ");   
  scanf("%c", &chLet);           
                                
  iAns = ChkVowel(&chLet);                

  if(iAns == 1)
    {
      printf("It is VOWEL...!!!");
    }
  else
    {
      printf("It is NOT VOWEL...!!!");
    }
  
  return 0;                     
}                               
