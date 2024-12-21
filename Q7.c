#include<stdio.h>
int main()
{
int a=10,b=20,c=30,d;
d=++a,++b,++c,a+5;
printf("d is %d",d);
d=(++a,++b,++c,a+5);
printf("\nd is %d",d);
return 0;
}
