#include<iostream>
using namespace std;
int max(int a,int b,int c,int d){
	int n[4]={a,b,c,d};
	int max=0;
	for(int i=0;i<4;i++){
		if(n[i]>max) max=n[i];
	}
	return max;
}
int min(int a,int b,int c,int d){
	int n[4]={a,b,c,d};
	int min=99999999;
	for(int i=0;i<4;i++){
		if(n[i]<min) min=n[i];
	}
	return min;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
