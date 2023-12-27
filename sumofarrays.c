#include<stdio.h>
int main()
{
int n,*ptr,i,sum;
printf("enter the size n: ");
scanf("%d",&n);
int a[n];
printf("enter the elements of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
ptr=a;
printf("sum");
for(i=0;i<n;i++)
sum=sum+*(ptr+i);
printf("%d\n",sum);
return 0;
}
