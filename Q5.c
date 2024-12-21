#include<stdio.h>
int hmstos(int,int,int);
int stohms(int);
int main()
{
int h,s,m,seconds,option;
printf("1.Convert from hh:mm:ss to seconds");
printf("\n2.Convert from seconds to hh:mm:ss");
printf("\nEnter the choice");
scanf("%d",&option);
switch(option)
{
case 1:printf("Enter the time in hh:mm:ss");
      scanf("%d %d %d",&h,&m,&s);
      seconds=hmstos(h,m,s);
      printf("The time in seconds is %d",seconds);
      break;
case 2:printf("Enter time in seconds");
       scanf("%d",&seconds);
       stohms(seconds);
       break;
default:
       printf("Enter again");
       break;
}       
return 0;
}
int hmstos(int x,int y,int z)
{
 int seconds;	
 seconds=(x*3600)+(y*60)+z;
 return seconds;
}
int stohms(int x)
{
 int h,m,s;
h=x/3600;
m=(x%3600)/60;
s=(x%3600)%60;
printf("\nThe time in hh:mm:ss is %d:%d:%d",h,m,s);
return 0;
}
