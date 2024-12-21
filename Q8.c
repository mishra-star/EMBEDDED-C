#include<stdio.h>
#define Max_Lim 50
int main()
{
 int arr[Max_Lim],i,sum=0,max_e,min_e;
 float avg,n;
 printf("Enter the number of elements in an array");
 scanf("%f",&n);
 for(i=0;i<n;i++)
 {
  printf("\nEnter the element %d:",i);
  scanf("%d",&arr[i]);
  sum+=arr[i];
  ;
 }
/* for(i=0;i<n;i++)
 {
  printf("\nElement %d:%d",(i+1),arr[i]);
 }*/	  
 avg=sum/n;
 max_e=arr[0];
 min_e=arr[0];
for(i=0;i<n;i++)
{
if(arr[i]>max_e)
{
max_e=arr[i];
}
if(arr[i]<min_e)
{
min_e=arr[i];
}
}
printf("\nSum of array is %d",sum);
printf("\nAverage of array is %f",avg);
printf("\nMin of array is %d",min_e);
printf("\nMax of array is %d",max_e);
return 0;
}
