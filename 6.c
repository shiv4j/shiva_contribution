#include<stdio.h>
void main()
{
int i=20,j=30;
int *p,**q;
p=&i;
q=&p;
printf("%d%d",*p,**q);
p=&j;
printf("%d%d",*p,**q);
}



































//2020
//3030
