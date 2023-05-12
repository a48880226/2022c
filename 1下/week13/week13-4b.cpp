#include <stdio.h>
int a[10];
int main(){
	for(int i=0;i<10;i++) scanf("%d",&a[i]);
	for(int i=9;i>=0;i--) printf("%d ",a[i]);
}
