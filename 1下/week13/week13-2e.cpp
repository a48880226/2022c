#include <stdio.h>
int main(){
	int a[10],n,m=0,sum=0;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		m++;
	}
	scanf("%d",&n);
	for(int i=0;i<m;i++){
		if(a[i]==n) sum++;
	}
	printf("%d\n",sum);
}
