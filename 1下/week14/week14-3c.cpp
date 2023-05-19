#include <stdio.h>
int main(){
	int n,m;
	scanf("%d",&n);
	if(n<0) n=-n;
	while(n!=0){
		m=n%10;
		n/=10;
	}
	printf("%d\n",m);
}
