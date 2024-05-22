#include<stdio.h>
main(){
	int a,b;
	printf("Enter a Number : ");
	scanf("%d%d",&a,&b);
    int sum;
	sum=(a*a)-(b*b)+(2*a*b);
	printf("%d",sum);
}