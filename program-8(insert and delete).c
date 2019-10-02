void main()
{
int n,v;
printf("please enter the size of the array\n");
scanf("%d",&n);
int a[n],b[n-1],c[n+1];
printf("please enter the elements\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter 1 for insertion and 2 for deletion");
scanf("%d",&v);
if(v==1)
{insert(a,n);}
//if(v==2)
//{delete_ele(a,n);}
}

void insert(int*p,int size)
{
int b[size+1],pos,num;
printf("please enter the index no. where you have to insert the element \n");
scanf("%d",&pos);
printf("enter the number \n");
scanf("%d",&num);
for(int i=0;i<num;i++)
{
b[i]=*(p+i);
}
b[pos]=num;
for(int i=pos+1;i<size+1;i++)
{b[i]=*(p+i-1);}
printf("the required array is \n");
for(int i=0;i<size+1;i++)
printf("%d \n",b[i]);
}






