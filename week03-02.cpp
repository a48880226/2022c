#include <stdio.h>
int main(void){
	printf("請輸入一個數字:");
	int a;
	scanf("%d",&a);
	if(a>10)
		printf("大於10\n");
	if(a<10)
		printf("小於10\n");
	if(a==10)
		printf("等於10\n");
}
