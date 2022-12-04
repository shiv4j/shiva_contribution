#include<stdio.h>
void ptrfun();
int a,b,c=0;
void main()
{
	static int a=1;
	ptrfun();
	printf("%d%d",a,b);
}
void ptrfun()
{
static int a=2;
int b=1;
a+=++b;
printf("%d%d",a,b);
}






























//4210
