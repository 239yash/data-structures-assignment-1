#include<stdlib.h>
#include<stdio.h>

void main()
{
int n1,s=0;
printf("please enter the size of the array");
scanf("%d",&n1);
int a[n1];
printf("please enter the numbers in array a");
for(int i=0;i<=n1-1;i++)
scanf("%d",&a[i]);
for(int i=0;i<n1;i++)
s=s+a[i];
printf("sum is %d and the average is %d ",s,s/n1);
}
