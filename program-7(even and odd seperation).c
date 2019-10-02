void main()
{
int size;
printf("please enter the size of an array\n");
scanf("%d",&size);
int a[size];
printf("please enter the elements in the array\n");
for(int i=0;i<size;i++)
{scanf("%d",&a[i]);}
int even_count=even(a,size);
int odd_count=odd(a,size);
int eve[even_count],od[odd_count];
even_array(a,eve,size,even_count);
odd_array(a,od,size,odd_count);
}

int even(int*p,int n)
{
int count=0;
for(int i=0;i<n;i++)
{
if(*(p+i)%2==0)
{count++;}}
printf("even are %d \n",count);
return(count);
}
int odd(int*p,int n)
{
int count=0;
for(int i=0;i<n;i++)
{
if(*(p+i)%2!=0)
count++;}
printf("odd are %d \n",count);
return(count);

}


void even_array(int*p,int*q,int n,int m)
{
int c=0;
for(int i=0;i<n;i++)
{
if(*(p+i)%2==0)
{
*(q+c)=*(p+i);
c++;
}}
printf("the even array\n");
for(int i=0;i<m;i++)
{printf("%d",*(q+i));}
}

void odd_array(int*p,int*q,int n,int m)
{
int c=0;
for(int i=0;i<n;i++)
{
if(*(p+i)%2!=0)
{
*(q+c)=*(p+i);
c++;
}}
printf("the odd array\n");
for(int i=0;i<m;i++)
{printf("%d",*(q+i));}
}






