void main()
{
int n;
printf("please enter the size");
scanf("%d",&n);
int a[n],temp,i,j;
printf("enter the elements\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n-1;i++)
{
for(j=i;j<=n-1;j++)
{
if(a[i]>=a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}}
printf("the sorted array \n");
for(i=0;i<n;i++)
{printf("%d\n",a[i]);}
printf("the smallest no. is %d  \n",a[0]);
printf("the biggest no. is %d  \n",a[n-1]);
}
