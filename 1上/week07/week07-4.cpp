#include <stdio.h>
int main(void){
	int n=123456789;
	while(n>0){
		printf("�Ӧ�ƬO%d\n",n%10);
		n=n/10;
	}
	return 0;
}
