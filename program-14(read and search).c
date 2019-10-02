
void main()
{
int size,num;
printf("please enter the size of the array \n");
scanf("%d",&size);

int a[size];
printf("enter the elements in array\n ");
for(int i=0;i<size;i++)
{scanf("%d",&a[i]);}

printf("enter the no. to be searched\n ");
scanf("%d",&num);

int c=0;
for(int i=0;i<size;i++)
{
if(a[i]==num)
{
printf("the no is found\n");
c++;
}
}
if(c==0)
{printf("the no. is not there \n");}
}
