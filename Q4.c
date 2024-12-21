#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the numbers");
scanf("%d %d %d",&a,&b,&c);
(c>a&&c>b)?printf("\n %d is the largest",c):(b>a&&b>c)?printf("\n %d is the largest",b):printf("\n %d is the largest",a);
return 0;
}
