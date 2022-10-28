#include <stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		int bad=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				bad=1;
			}
		}
		if(bad==0){
			printf("%d ",i);
		}
	}
	return 0;
}


