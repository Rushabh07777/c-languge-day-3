#include<stdio.h>
main(){
	int F;
	printf("Enter a Number : ");
	scanf("%d",&F);
    int sum;
	sum=(F - 32) * 5/9;
	printf("%d",sum);
}