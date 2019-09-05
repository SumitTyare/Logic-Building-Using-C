/* 10. Accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo". */

#include<stdio.h>

int main(int argc, char* argv[])
{
  int iNum = 0;
  
  printf("Enter The Number=> ");
  scanf("%d", &iNum);

  if(iNum < 10)
    {
      printf("HELLO...!!!\n");
    }
  else
    {
      printf("DEMO...!!!\n");
    }
  
  return 0;
}
