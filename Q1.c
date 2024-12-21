#include<stdio.h>
long factorial(int);
long binom(int,int);
void pascal_triangle(int);
int main()
{
	int rows;
	printf("Enter number of rows");
	scanf("%d",&rows);
        pascal_triangle(rows);
        return 0;
}
long factorial(int n)
{
	long fact=1;
	if (n)
	{
	for(int i=1;i<=n;i++)
	{
	 fact*=i;
	}
	}
	else
	{
	fact=1;
	}
	return fact; 	 
}
long binom(int n,int k)
{
	return (factorial(n))/(factorial(k)*factorial(n-k));
}

void pascal_triangle(int n)
{
	int i,j,k;
	for(i=0;i<=n;i++)
	{
		
		for(j=0;j<=n-i-1;j++)
		{
			printf(" ");
		}
		
		for(k=0;k<=i;k++)
		{
			printf("%ld ",binom(i,k));
		}
		printf("\n");
	}
}
