void main()
{
int n1,temp;
printf("enter the size of the array");
scanf("%d",&n1);
int a[n1],b[n1],c[n1];
printf("please enter the no.s in array");
for(int i=0;i<n1;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
c[i]=a[i];
}
int i,j,pos1,pos2;
for(i=0,j=1;i<n1-1,j<=n1-1;i++,j++)
{
if(b[i]>=b[j])
b[j]=b[i];
}
int max=b[i];
printf("max is %d",max);
for(i=0,j=1;i<n1-1,j<=n1-1;i++,j++)
{
if(c[i]==max||c[j]==max){}
else
{
if(c[i]>=c[j])
c[j]=c[i];
}
}
int max2=c[i];
printf(" the second largest no. is %d",max2);
for(int i=0;i<n1;i++)
{
if(a[i]==max){
pos1=i;}
if(a[i]==max2){
pos2=i;}
}
int sum=0;
for(i=pos1;i<=pos2;i++){
sum=sum+a[i];}
printf("the required sum is %d",sum);
}


