#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter a Number : ");
	scanf("%d%d%d",&a,&b,&c);
    int sum;
	sum=(a + b + c) / 3;
	printf("%d",sum);
}