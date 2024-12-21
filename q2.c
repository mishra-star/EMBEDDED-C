#include<stdio.h>
float tax(float);
int main()
{
	char  gender;
	int age;
	float salary,tax_salary1;
	printf("enter your gender");
        scanf("%c",&gender);
	printf("enter your age");
        scanf("%d",&age);
	printf("enter your salary (in lakhs)");
        scanf("%f",&salary);
	tax_salary1= tax(salary);
	if(age>=60)
	{
	 if(gender=='f'||gender=='F')
	 {
          tax_salary1=tax_salary1-(0.1*tax_salary1);	 
	 }
	 else
	 {
	  tax_salary1=tax_salary1-(0.05*tax_salary1);	 
	 }
	}
	else
	{
	 if(gender=='f'||gender=='F')
	 {
          tax_salary1=tax_salary1-(0.05*tax_salary1);	 
	 }
	 else
	 {
	 tax_salary1=tax_salary1;
	 }
	}
	printf("The tax =%f",tax_salary1);
	return 0;
}

      
float tax(float salary)
{
float tax_salary;
  if(salary<=2.5)
	{
          tax_salary=0;
	}
	else if(salary>2.5 && salary<=5)
	{
	 tax_salary=0.05* salary;
	}
	else if(salary>5 && salary<=7.5)
	{
	 tax_salary=0.125+((salary-5)*0.2);
	}
	else if(salary>7.5 && salary<=10)
	{
	 tax_salary=0.625+((salary-7.5)*0.2);
	}
	else if(salary>10 && salary<=12.5)
	{
	 tax_salary=1.125+((salary-10)*0.3);
	}
	else if(salary>12.5 && salary<=15)
	{
	 tax_salary=1.875 +((salary-12.5)*0.3);
	}
	else if(salary>15)
	{
	tax_salary=2.625+((salary-15)*0.3);
	}
	return tax_salary;
}
