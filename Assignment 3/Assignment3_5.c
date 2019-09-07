/* 5. Accept radius from user and return circumference of circle. */

#include<stdio.h>

#define PI 3.14

float CalculateCircumference(float);

int main(int argc, char* argv[])
{
	float fRad = 0.0, fAns = 0.0;
	
	printf("Enter Radius=> ");
	scanf("%f", &fRad);
	
	fAns = CalculateCircumference(fRad);
	
	printf("\nCircumference is %f\n", fAns);
	
	return 0;
}

float CalculateCircumference(float fRad)
{
	float fAns = 0.0;
	
	fAns = 2 * PI * fRad;	
	
	return fAns;
}
