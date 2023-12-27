#include<stdio.h>
int main()
{
int array [10],i,n;
int *ptr=array;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements into array(n)");
for(i=0;i<n;i++)
{
scanf("%d",ptr+i);
}
for (i=0;i<n;i++)
{
printf("%d",*(ptr+i));
}
return 0;
}
