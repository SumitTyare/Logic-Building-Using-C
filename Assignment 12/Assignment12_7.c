/* 7. Accept two characters from user and swap its contents if both the characters are small or both the characters are capital. In other cases keep the contents as it is. */

#include<stdio.h>

void CharOperations(char *chChar1, char *chChar2)
{
  char chTemp = '\0';
  
  if((*chChar1 >= 'a') && (*chChar2 <= 'z'))
    {
      chTemp = (*chChar1);
      (*chChar1) = (*chChar2);
      (*chChar2) = chTemp;
    }
  else if((*chChar1 >= 'A') && (*chChar2 <= 'Z'))
    {
      chTemp = (*chChar1);
      (*chChar1) = (*chChar2);
      (*chChar2) = chTemp;
    }
}


int main(int argc, char* argv[])
{

  char chChar1 = '\0', chChar2 = '\0';
  
  printf("\nENTER CHARACTER 1 : ");
  scanf("%c", &chChar1);
  printf("\nENTER CHARACTER 2 : ");
  scanf(" %c", &chChar2);

  CharOperations(&chChar1, &chChar2);

  printf("\nCHARACTERS AFTER OPERATIONS :\n");
  printf("CHAR1 : %c\tCHAR2 : %c\n", chChar1, chChar2);
  
  return 0;
}

