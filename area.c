#include<stdio.h>
void main()
{
	int area,perimeter,len,bre;
	printf("enter Length and Breadth");
	scanf("%d%d",&len,&bre);
	area=len*bre;
	perimeter=2*(len+bre);
	if(area>perimeter)
		printf("Area is greater than perimeter");
	else
		printf("Perimeter is greater than area");
}
