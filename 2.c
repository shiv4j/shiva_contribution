int trial(int a,int b,int c)
{
	if((a>b)&&(c<b))
	return b;
	else if(a>=b)
	return trial(a,c,b);
	else
	return trial(b,a,c);
}
#include<stdio.h>
void main()
{
printf("%d",trial(6,5,7));
}













/*
6*/
