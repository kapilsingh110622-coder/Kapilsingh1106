#include<stdio.h>
int main(){
	int i,a[10];
	printf("enter array element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array element are\n");
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
