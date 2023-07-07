#include<stdio.h>

int rec()
{
	int a;
	printf("Enter number: ");
	scanf("%d",&a);
	if(a<10)
	return a;
	else
	return (a%10 + rec(a/10));
}