#include <stdio.h>
int main(){
	int a[10]={9,8,7,1,2,3,6,5,4,0};
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
