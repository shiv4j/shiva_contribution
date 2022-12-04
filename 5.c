#include<stdio.h>
void f1(int a,int b);
void f2(int *a,int *b);
int main()
{
int a=4,b=5,c=6;
printf("\na=%db=%dc=%d",a,b,c);
f1(a,b);
f2(&b,&c);
printf("\na=%db=%dc=%d",a,b,c);
printf("%d",c-a-b);
}
void f1(int a,int b)
{
int c;
c=a;
a=b;
b=c;
}
void f2(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}





//-5;
