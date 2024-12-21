#include<stdio.h>
int main()
{
	int date,m,y,odd_day,days=0;
	printf("enter the date:");
	scanf("%d",&date);
	printf("1.January\n");
	printf("2. February\n");
	printf("3.March\n");
	printf("4.April\n");
	printf("5.May\n");
	printf("6.June\n");
	printf("7.July\n");
	printf("8.August\n");
	printf("9.September\n");
	printf("10.October\n");
	printf("11.November\n");
	printf("12.December\n");
	scanf("%d",&m);
	
	switch(m)
	{
		case 1:
			days=days+date;
			break;
		case 2:
			days=days+31+date;
		        break;
		case 3:
			days=days+31+28+date;
			break;
		case 4:
			days=days+31+28+31+date;
			break;
		case 5:
			days=days+31+28+31+30+date;
			break;
		case 6:
			days=days+31+28+31+30+31+date;
			break;
		case 7:
			days=days+31+28+31+30+31+30+date;
			break;
		case 8:
			days=days+31+28+31+30+31+30+31+date;
			break;
		case 9:
			days=days+31+28+31+30+31+30+31+31+date;
			break;
		case 10:
			days=days+31+28+31+30+31+30+31+31+30+date;
			break;
		case 11:
			days=days+31+28+31+30+31+30+31+31+30+31+date;
			break;
		case 12:
			days=days+31+28+31+30+31+30+31+31+30+31+30+date;
			break;
		default:
			printf("enter valid month");
	}
	
	printf("enter the year:");
	scanf("%d",&y);
	
	if(y>1970)
	{
		for(int i=1970;i<y;i++)
		{	
			if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			{
				days=days+366; 
			}
			else
			{
				days=days+365;
			}
		}
	
	}
  	if(((y%4==0 && y%100!=0 )||(y%400==0)) && m>2)
	{
		days=days+1;
		printf("%d\n",days);
	}
	odd_day=days%7;	
	if(odd_day==0)
	{
		printf("wednesday");
	}
	else if(odd_day==1)
	{
		printf("thursday");
	}
	else if(odd_day==2)
	{
		printf("friday");
	}
	else if(odd_day==3)
	{
		printf("saturday");
	}
	else if(odd_day==4)
	{
		printf("sunday");
	}
	else if(odd_day==5)
	{
		printf("monday");
	}
	else
	{
		printf("tuesday");
	}


	return 0;

}


