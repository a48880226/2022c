#include <stdio.h> 
int main(void){
	printf("請輸入西元年:");
	int a;
	scanf("%d",&a);
	if (a%400==0){
		printf("%d年是閏年",a);
	}
	else if (a%100==0){
		printf("%d年是平年",a);
	}
	else if (a%4==0){
		printf("%d年是閏年",a);
	}
	else{
		printf("%d年是平年",a);
	}
	return 0;
}
