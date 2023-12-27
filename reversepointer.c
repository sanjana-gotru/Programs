#include<stdio.h>
int main ()
{
int *ptr,n,i;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements of array");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
ptr=a;
printf("enter the rev elements");
for (i=n;i>0;i--)
printf("%5d",*(ptr+i));
return 0;
}
