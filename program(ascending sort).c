void main()
{
int size;
printf("please enter the size of array\n");
scanf("%d",&size);

int a[size];
printf(" enter the elements in array\n");
for(int i=0;i<size;i++)
{scanf("%d",&a[i]);}

asc_sort(a,size);
}

void asc_sort(int*p,int n)
{
int temp;
for(int i=0;i<n-1;i++)
{
for(int j=i;j<=n-1;j++)
{
if(*(p+j)<=*(p+i))
{
temp=*(p+j);
*(p+j)=*(p+i);
*(p+i)=temp;
}
}}
printf("the sorted array\n ");
for(int i=0;i<n;i++)
{printf("%d",*(p+i));}
}
