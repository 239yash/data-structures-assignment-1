
void main()
{
int size;
printf("please enter the size of array\n");
scanf("%d",&size);

int a[size],dupl;
printf("enter the elements in the array\n");
for(int i=0;i<size;i++)
{scanf("%d",&a[i]);}

sort(a,size);
printf("\n");
dupl=duplicate(a,size);

copy(a,size,size-dupl);
}

void sort(int*p,int n)
{
int temp;
for(int i=0;i<n-1;i++)
{
for(int j=i;j<=n-1;j++)
{
if(*(p+j)>=*(p+i))
{
temp=*(p+j);
*(p+j)=*(p+i);
*(p+i)=temp;
}}}
printf("the sorted array is ");
for(int i=0;i<n;i++)
{printf("%d",*(p+i));}}

int duplicate(int*p,int n)
{
int count=0;
for(int i=0;i<n-1;i++)
{
if(*(p+i)==*(p+i+1))
count++;}
printf("the no. of duplicates are %d \n",count);
return(count);
}


void copy(int*p,int n1,int n2)
{
int c=0,b[n2];
for(int i=0;i<n1-1;i++)
{
if(*(p+i)!=*(p+i+1))
{
b[c]=*(p+i);
c++;
}}
if(*(p+n1)!=b[c])
b[c]=*(p+n1-1);
printf("new array is \n");
for(int i=0;i<n2;i++)
{printf("%d\n",b[i]);}
printf("the second largest no is %d and second smallest no. is  %d",b[1],b[n2-2]);
}
