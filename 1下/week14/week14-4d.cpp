#include <stdio.h>
int MYPOWER(int a){
	int n=1;
	while(a--) n*=10;
	return n;
}
int main(){
	int n,m,sum=0;
	scanf("%d",&n);
	while(n!=0){
		m=n%10;
		n/=10;
		printf("%d ",m*MYPOWER(sum));
		sum++;
	}
}
