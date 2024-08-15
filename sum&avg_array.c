#include<stdio.h>
int main(){
int arr[100],n,i,sum=0;
float avg;
printf("Enter the number of element you want to insert:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element %d : ",i+1);
scanf("%d",&arr[i]);
sum+=arr[i];
}
avg=(float)sum/n;
printf("\nThe sum of array is: %d",sum);
printf("\nThe avg of array is: %f",avg);
return 0;
}