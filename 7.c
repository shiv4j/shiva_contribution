#include<stdio.h>
void main()
{
int a[5]={10,20,30,40,50};
printf("%d",f(a,5));
}
int f(int *p,int n)
{
if(n<=0)
return 1;
if(*p%2==0)
return *p+f(p+1,n-1);
else
return *p-f(p+1,n-1);
}




















//151
