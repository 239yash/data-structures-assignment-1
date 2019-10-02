void main ()
{
int n;
printf("please enter the size");
scanf("%d",&n);
int a[n],i,j;
printf("enter the elements\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
int sum1=0,sum2=a[0]+a[2],pos1,pos2;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<=n-1;j++)
{
sum1=a[i]+a[j];
if(sum1>=sum2)
{
pos1=i;
pos2=j;
sum2=sum1;
}
}
}
printf("the largest no. is %d \n",a[pos1]);
printf("the second largest no. is %d \n",a[pos2]);
}
