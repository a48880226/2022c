#include <stdio.h> 
int main(void){
	printf("�п�J�褸�~:");
	int a;
	scanf("%d",&a);
	if (a%400==0){
		printf("%d�~�O�|�~",a);
	}
	else if (a%100==0){
		printf("%d�~�O���~",a);
	}
	else if (a%4==0){
		printf("%d�~�O�|�~",a);
	}
	else{
		printf("%d�~�O���~",a);
	}
	return 0;
}
