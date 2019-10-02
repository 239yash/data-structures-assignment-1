
void main()
{
int size;
printf("please enter the size of the array\n");
scanf("%d",&size);
int a[size];
printf("enter the elements in the array\n \n");
for(int i=0;i<size;i++)
{scanf("%d",&a[i]);}
perm(a,size);
}

void perm(int*p,int n)
{
int temp;
temp=*p;
*p=*(p+n-1);
*(p+n-1)=temp;
for(int i=0;i<n-2;i++)
{
temp=*(p+i);
*(p+i)=*(p+i+1);
*(p+i+1)=temp;
}
printf("the cyclically permuted array is \n");
for(int i=0;i<n;i++)
{printf("%d",*(p+i));}
}
