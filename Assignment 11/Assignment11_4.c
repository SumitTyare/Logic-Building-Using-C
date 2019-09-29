/* 4. Accept marks of N students from user and display class of each
student.
Less than 35 Fail
Less than 50 Pass class
Less than 60 Second class
Less than 70 First class
Greater than 70 First class with Distinction
*/


#include<stdio.h>
#include<malloc.h>

void ChkClass(float[], int);

void ChkClass(float fArr[], int iLength)
{
  int iCnt = 0;
  
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("\nCLASS OF STUDENT %d : ", (iCnt + 1));
      
      if(fArr[iCnt] < 35)
	{
	  printf("FAIL\n");
	}
      else if((fArr[iCnt] >= 35) && (fArr[iCnt] < 50))
	{
	  printf("PASS CLASS\n");
	}
      else if((fArr[iCnt] >= 50) && (fArr[iCnt] < 60))
	{
	  printf("SECOND CLASS\n");
	}
      else if((fArr[iCnt] >= 60) && (fArr[iCnt] < 70))
	{
	  printf("FIRST CLASS\n");
	}
      else if((fArr[iCnt] >= 70) && (fArr[iCnt] <=100))
	{
	  printf("FIRST CLASS WITH DISTINCTION\n");
	}
      else
	{
	  printf("ENTER VALID MARKS\n");
	}
    }
}

int main(int argc, char* argv[])
{
  int iLength = 0, iCnt = 0;
  float *fArr = NULL;
  
  printf("\nHOW MANY STUDENTS : ");
  scanf("%d", &iLength);
  fArr = (float *)malloc(iLength * sizeof(float));

  printf("\nENTER THE MARKS OF STUDENTS :\n");

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      printf("\nENTER MARKS OF STUDENT %d : ", (iCnt + 1));
      scanf("%f", &fArr[iCnt]);
    }

  ChkClass(fArr, iLength);

  return 0;
}
