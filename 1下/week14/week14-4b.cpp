#include <stdio.h>
int main(){
	int n,m,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum+=i;
		if(sum>n){
			m=i;
			break;
		}
	}
	printf("%d",m);
}
