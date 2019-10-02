void main()
{
int size,index;

printf("please enter the size of the array \n");
scanf("%d",&size);

int a[size],b[size];
printf("enter the elements in the array\n \n");
for(int i=0;i<size;i++)
{scanf("%d",&a[i]);}

printf("please enter the index from where u want to split the array\n");
scanf("%d",&index);


//if(size%2==0)

for(int i=0;i<size-index-1;i++)
{
b[i]=a[index+1+i];}
for(int j=size-index-1,i=0;i<=index&&j<size;i++,j++){
b[j]=a[i];
}
printf("the new array is\n");
for(int i=0;i<size;i++)
{printf("%d\n",b[i]);}







/*else
for(int i=0;i<size-index-1;i++)
{b[i]=a[index+i+1];}
for(int i=0;i<size;i++)
{b[i]=a[i-index];}
printf("the new array is\n");
for(int i=0;i<size;i++)
{printf("%d\n",b[i]);}
}*/
}


