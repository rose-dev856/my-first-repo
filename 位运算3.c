#include<stdio.h>
int main()
{
	unsigned value,n1,n2,value1,value2;
	scanf("%o%d,%d",&value,&n1,&n2);
	value1=value&((1<<(17-n1))-1);
	value2=value&((1<<(16-n2))-1);
	value=(value1&(~value2))>>(16-n2);
	printf("result:%o",value);
	return 0;
}