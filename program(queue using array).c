void main()
{
int size;
printf("please enter the size of the array");
scanf("%d",&size);

int a[size];
printf("please enter the elements in the array\n");
for(int i=0;i<size;i++)
{scanf("%d",&a[i]);}
for(int i=0;i<size;i++)
{printf("\n %d",a[i]);}

int num;
printf("enter the number to be added in the queue");
scanf("%d",&num);

for(int i=0,j=1;i<size-1,j<=size-1;i++,j++)
{
a[i]=a[j];
}
a[size-1]=num;

printf("the new queue formed is \n");
for(int i=0;i<size;i++)
{printf("%d \n",a[i]);}
}


