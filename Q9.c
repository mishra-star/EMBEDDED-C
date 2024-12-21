        
#include<stdio.h>
int main()
{
	int decimalNum,base,i=0,rem;
	char result[100],digit;
	printf("enter a value of decimalNum:");
	scanf("%d",&decimalNum);
	
	printf("enter a base(2|8|16):");
	scanf("%d",&base);
	
	if(base!=2&&base!=8&&base!=16)
	{
		printf("invalid base");
	}
	
	// to convert the number in different number systems
	while(decimalNum >0)
	{
	
		rem=decimalNum%base;
			
		
		
		if(rem<10)
		{
			digit='0'+rem;
		}
		else
		{
			digit='A'+rem-10;
		}
	
	result[i++]=digit;
	decimalNum/=base;
	}	
	

	for(int j=i-1;j>=0;j--)
	{
		printf("%c",result[j]);
	}
	printf("\n");
	return 0;
}






















