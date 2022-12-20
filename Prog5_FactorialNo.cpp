#include<stdio.h>
main()
{
	int NO,fact=1;
	printf("\n enter NO");
	scanf("%d",&NO);
	for (int i= 1; i<=NO; i++)
	{
	  fact = fact * i;
	}
	printf(" Factorial  =%d",fact);
}