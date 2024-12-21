#include<stdio.h>
int main()
{
 int n;
 float f;
 printf("Enter a number");
 scanf("%d",&n);
 printf("\nEnter a number");
 scanf("%f",&f);
printf("\n%5d",n);
printf("\n%05d",n);
printf("\n%-5d",n);
printf("\n%8.2f",f);
printf("\n%.2f",f);
return 0;
}
