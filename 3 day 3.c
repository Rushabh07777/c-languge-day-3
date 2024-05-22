#include<stdio.h>
main(){
	int a,b;
	printf("Enter a Number : ");
	scanf("%d%d",&a,&b);
    int sum;
	sum=(a*a)+(2*a*b)+(b*b);
	printf("%d",sum);
}