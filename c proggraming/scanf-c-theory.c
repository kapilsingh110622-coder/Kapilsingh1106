#include<stdio.h>
int main(){
		int a;
		char b;
		float c;
		double d;
		printf("enter intiser no=");
		scanf("%d",&a);
		printf("enter character=");
		scanf(" %c",&b);
		printf("enter a decimal no");
		scanf("%f",&c);
		printf("enter a double no");
		scanf("%lf",&d);
		printf("given a intiser=%d\n",a);
		printf("given a character=%c\n",b);
		printf("given a decimal no=%f\n",c);
		printf("given a double no=%lf\n",d);
		return 0;
}

