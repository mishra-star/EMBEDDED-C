#include<stdio.h>
int main()
{
int k,i=1,x=1,y;
float p=4,q;
k=i++;
printf("Post increment %d",k);
k=++i;
printf("\nPre increment %d",k);
y=x++*10;
printf("\nPost increment %d",y);
y=++x*10;
printf("\nPre increment %d",y);
q=p--/3;
printf("\nPost Decrement %f",q);
q=--p/3;
printf("\nPre Decrement %f",q);
return 0;
}
