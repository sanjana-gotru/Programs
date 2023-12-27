#include <stdio.h>
int fact (int);
int main (){
int n;
printf("enter the value of n");
scanf("%d",&n);
int res=fact(n);
printf("%d",res);
return 0;
}
int fact (int n)
{
if (n==0||n==1)
return 1;
else
return n*fact(n-1);
}
