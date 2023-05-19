#include <stdio.h>
int main(){
	int a[3],x=1,sum=0;
	for(int i=0;i<3;i++) scanf("%d",&a[i]);
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<3;i++){
		a[i]*=x;
		sum+=a[i];
		x*=10;
	}
	printf("%d",sum+1);
}
