/* 2. Write a program which accept principle amount, time and rate of
interest from user and calculate simple intrest.
SimpleIntrest = PrincipleAmount * Time * RateOfIntrest / 100 */

#include<stdio.h>

float CalSimpleInterest(int, int, float);

int main(int argc, char* argv[])
{
	int iAmt = 0, iTime = 0;
	float fRoI = 0.0, fSimpInt = 0.0;
	
	printf("\nEnter Amount=> ");
	scanf("%d", &iAmt);
	printf("\nEnter Time=> ");
	scanf("%d", &iTime);
	printf("\nEnter Rate of Interest=> ");
	scanf("%f", &fRoI);
	
	fSimpInt = CalSimpleInterest(iAmt, iTime, fRoI);
	
	printf("\nSimple Interest of Amount %d for Time of %d Years is %f\n\n", iAmt, iTime, fSimpInt);
	
	return 0;
}

float CalSimpleInterest(int iAmt, int iTime, float fRoI)
{
	float fAns = 0.0;
	
	fAns = (iAmt * iTime) * (fRoI / 100);
	
	return fAns;
}
