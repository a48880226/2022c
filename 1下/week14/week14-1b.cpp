#include <stdio.h>
int main(){
	int n,m,sum=0;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
		int bad=0;
		for(int j=2;j<i;j++){
			if(i%j==0) bad=1;
		}
		if(bad==0) sum++;
	}
	printf("%d\n",sum);
}
