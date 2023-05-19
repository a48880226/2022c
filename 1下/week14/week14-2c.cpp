#include <stdio.h>
int main(){
	int n,m,min=99999;
	for(int i=1;i<=10;i++){
		scanf("%d",&n);
		if(n<min){
			min=n;
			m=i;
		}
	}
	float x=1.2/(float(min)/3600);
	int y=x;
	printf("%d %d\n",m,y);
}
