#include <stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			if(j<=n-i){
				printf(" ");
			}
			else{
				printf("*");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
