void main()
{
int size,i;
printf("please enter the size of the array\n ");
scanf("%d",&size);
int a[size];

printf("please enter the elements of the array \n");
for(i=0;i<size;i++)
{scanf("%d",&a[i]);}

sort(a,size);
printf("the sorted array is \n");
for(i=0;i<size;i++)
{printf("%d",a[i]);}
binary(a,size);
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
temp=*(p+i);
*(p+i)=*(p+j);
*(p+j)=temp;
}}}}

void binary(int*p,int n)
{
int num,start,end,mid;
printf("please enter the no. u want to search\n");
scanf("%d",&num);
if(num>*(p))
{printf("the number is not there\n\n");}

start=0,end=n-1,mid=(start+end)/2;
for(int i=start;i<=end;i++)
{
mid=(start+end)/2;
if(num>*(p+mid))
end=mid-1;
if(num==*(p+mid))
{
printf(" the number is found at index %d\n",mid);
break;
}
if(num<*(p+mid))
start=mid+1;
}}
















