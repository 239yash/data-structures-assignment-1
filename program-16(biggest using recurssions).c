
void main()
{
int size;
printf("please enter the size\n");
scanf("%d",&size);

int a[size];
printf("Enter the elements of the array \n");
for(int i=0;i<size;i++)
{scanf("%d",&a[size]);}

int biggest=big(a,size);
}


int big(int a[],int n)
{
if(n==0)
return(a[0]);
if(a[n]>=big(a[],n-1))
return(a[n]);
}
