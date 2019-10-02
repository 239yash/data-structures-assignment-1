
void main()
{
int a[20];
int size,first=-1,last=size,n=1,num;
printf("enter the size of the stacks");
scanf("%d",&size);

while(n!=0)
{
printf("press 1 for insertion in stack 1\n");
printf("press 2 for insertion in stack 2\n");
printf("press 3 for deletion in stack 1\n");
printf("press 4 for deletion in stack 2\n");
printf("press 5 for printing stack 1\n");
printf("press 6 for printing stack 2\n");
printf("press 0 for do nothing case \n");
scanf("%d",&n);
switch(n)
{
case 1:
{
printf("insert the element in stack 1\n");
scanf("%d",&num);
if(first!=(last-1))
a[++first]=num;
else
printf("stck 1 Overflow\n");
break;
}
case 2:
{
printf("insert the element in stck 2\n");
scanf("%d",&num);
if(last!=(first+1))
a[--last]=num;
else
printf("stack 2 Overflow\n");
break;
}
case 3:
{
if(first==-1)
printf("Stack1 is in underflow condition\n");
else
{
num=a[first--];
printf("%d\n",num);
}
break;
}
case 4:
{
if(last==n)
printf("Stack 2 is in underflow condition \n");
else
{
num=a[last++];
printf("%d\n",num);
}
break;
}
case 5:
{
if(first==-1)
printf("Stack 1 is in underflow condition\n");
else
{
printf("Stack 1 is\n");
for(int i=0;i<=first;i++)
printf("%d ",a[i]);
}
break;
}
case 6:
{
if(last==n)
printf("Stack 2 is in underflow condition\n");
else
{
printf("Stack2 is\n");
for(int i=(n-1);i>=last;i--)
printf("%d ",a[i]);
printf("\n");
}
break;
}
case 0:
break;
}}}
