
void main()
{
int size,size1,size2;

printf("please enter the size of the array no.1\n");
scanf("%d",&size1);
int a[size1];
printf("enter the elements in the array\n \n");
for(int i=0;i<size1;i++)
{scanf("%d",&a[i]);}

printf("please enter the size of the array no.2\n");
scanf("%d",&size2);
int b[size2];
printf("enter the elements in the array\n \n");
for(int i=0;i<size2;i++)
{scanf("%d",&b[i]);}

size=size1+size2;

int c[size];

for(int i=0;i<size1;i++)
{
c[i]=a[i];
}
for(int i=size1;i<size;i++)
{
c[i]=b[i-size1];
}
printf("the merged array is \n");
for(int i=0;i<size;i++)
{printf("%d\n",c[i]);}
sort(c,size);
}

void sort(int*p,int n)
{
int temp;
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<+n-1;j++)
{
if(*(p+j)>=*(p+i))
{
temp=*(p+i);
*(p+i)=*(p+j);
*(p+j)=temp;
}}}
printf(" the sorted array is \n");
for(int i=0;i<n;i++)
{printf("%d\n",*(p+i));}
}

