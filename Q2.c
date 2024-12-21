#include<stdio.h>
int main()
{
int a=10,b=20,c;
c=a;
a=b;
b=c;
printf("Swapped nos with third variable is %d,%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("Swapped nos without third variable is %d,%d",a,b);
a=a^b^(b=a);
printf("Swapped nos using xor is %d,%d",a,b);
return 0;
}
