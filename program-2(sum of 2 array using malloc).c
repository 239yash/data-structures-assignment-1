void main()
{
int n1,n2,s1=0,s2=0,sum;
int *p,*q;
printf("please enter the sizes of array");
scanf("%d%d",&n1,&n2);
p=malloc(n1*4);
q=malloc(n2*4);
printf("please enter the no.s in array 1");
for(int i=0;i<n1;i++)
{
scanf("%d",p+i);
s1=s1+*(p+i);
}
printf("please enter the no.s in array 2");
for(int i=0;i<n2;i++)
{
scanf("%d",q+i);

s2=s2+*(q+i);
}
sum=s1+s2;
printf("the total sum is %d",sum);
}






