#include <stdio.h>
int main(void){
	int a;
	scanf("%d",&a);
	if (a%2==0)
		printf("even");
	/*
	else
		printf("odd");
	*/
	if (a%2==1)
		printf("odd");
}
