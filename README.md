# 2022c
資傳一甲 程式設計 Steak的程式倉庫
## week01
中秋節放假
## week02
* 第一支程式
  * Hello World
```cpp
#include <stdio.h>
int main(void){
	printf("Hello World\n");
	return 0;
} 
```
* 第二支程式
  * Hello World 把3塞進中間
```cpp
#include <stdio.h>
int main(void){
	printf("Hello World\n");
	printf("Hello%dWorld\n",33);
	return 0;
}
```
* 第三支程式
  * 輸入兩個變數 印出總和
```cpp
#include <stdio.h>
int main(void){
	printf("請輸入兩個數字:");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a+b);
	return 0;
}
```
## week03
* 第一支程式
  * 輸入兩個變數 加減乘除餘數運算
```cpp
#include <stdio.h>
int main(void){
	printf("請輸入兩個數字:");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d 加 %d 得到 %d\n",a,b,a+b);
	printf("%d 減 %d 得到 %d\n",a,b,a-b);
	printf("%d 乘 %d 得到 %d\n",a,b,a*b);	
	printf("%d 除 %d 得到 %d\n",a,b,a/b);
	printf("%d 除 %d 的餘數 %d\n",a,b,a%b);
}
```
* 第二支程式
  * 輸入一個變數 跟10比大小
```cpp
#include <stdio.h>
int main(void){
	printf("請輸入一個數字:");
	int a;
	scanf("%d",&a);
	if(a>10)
		printf("大於10\n");
	if(a<10)
		printf("小於10\n");
	if(a==10)
		printf("等於10\n");
}
```
* 第三支程式
  * 判斷奇偶數 註解為另一種寫法
```cpp
#include <stdio.h>
int main(void){
	int a;
	scanf("%d",&a);
	if (a%2==0)
		printf("even");
	/*
	else
		printf("odd");
	*/
	if (a%2==1)
		printf("odd");
}
```
* 第四支程式
  * 輸入一個變數 判斷除以8,9,15餘數為多少
```cpp
#include <stdio.h>
int main(void){
	printf("請輸入一個數字:");
	int a;
	scanf("%d",&a);
	printf("用8除餘%d\n",a%8);
	printf("用9除餘%d\n",a%9);
	printf("用15除餘%d\n",a%15);
}
```
## week04
* 第一支程式
  * 平閏年判斷
```cpp
#include <stdio.h> 
int main(void){
	printf("請輸入西元年:");
	int a;
	scanf("%d",&a);
	if (a%400==0){
		printf("%d年是閏年",a);
	}
	else if (a%100==0){
		printf("%d年是平年",a);
	}
	else if (a%4==0){
		printf("%d年是閏年",a);
	}
	else{
		printf("%d年是平年",a);
	}
	return 0;
}
```
* 第二支程式
  * 平閏年判斷 只印出Yes或No
```cpp
#include <stdio.h> 
int main(void){
	int a;
	scanf("%d",&a);
	if (a%400==0){
		printf("Yes");
	}
	else if (a%100==0){
		printf("No");
	}
	else if (a%4==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	return 0;
}
```
* 第三支程式
  * 0印到10
```cpp
#include <stdio.h>
int main(void) {
	for(int i=0;i<11;i++){
		printf("印出%d\n",i);
	}
    return 0;
}
```
* 第四支程式
  * 迴圈 電腦跟人類的差別
```cpp
#include <stdio.h>
int main(void) {
	for(int i=0;i<11;i++){
		printf("印出%d\n",i);
	}
	for(int i=1;i<=11;i++){
		printf("人類的版本,印出%d\n",i);
	}
    return 0;
}
```
* 第五支程式
  * 排版差別
```cpp
#include <stdio.h>
int main(void)
{
    for(int i=0; i<11; i++)
    {
        printf("印出%d\n",i);
    }
    for(int i=1; i<=11; i++)
    {
        printf("人類的版本,印出%d\n",i);
    }
    return 0;
}
```
## week05
* 第一支程式
  * 無限迴圈
```cpp
#include <stdio.h>
int main(void) {
	int a=10;
	while(a>0) printf("a:%d a>0\n",a);
    return 0;
}
```
* 第二支程式
  * 迴圈 i=5遞減至i大於0
```cpp
#include <stdio.h>
int main(void) {
	int a=5;
	while(a>0) {
		printf("a:%d a>0\n",a);
		a--;
	}
    return 0;
}
```
* 第三支程式
  * 迴圈 i=5遞減至i大於0 另種寫法
```cpp
#include <stdio.h>
int main(void) {
	for(int a=5;a>0;a--) {
		printf("a:%d a>0\n",a);
	}
    return 0;
}
```
* 第四支程式
  * 電腦從0開始數 人類從1開始數 倒過來的迴圈
```cpp
#include <stdio.h>
int main(void) {
	for(int i=0;i<5;i++) {
		printf("電腦從0開始數, i:%d\n",i);
	}
	for(int i=1;i<=5;i++) {
		printf("人類從1開始數多一點點, i:%d\n",i);
	}
	for(int i=5;i>0;i--) {
		printf("倒過來的迴圈, i:%d\n",i);
	}
    return 0;
}
```
* 第五支程式
  * 九九乘法表
```cpp
#include <stdio.h>
int main(void){
	for (int i=1;i<=9;i++){
		for (int j=1;j<=9;j++){
			printf("%d*%d=%2d ",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}
```
* 第六支程式
  * 倒金字塔
```cpp
#include <stdio.h>
int main(void){
	for (int i=5;i>0;i--){
		for (int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
```
## week06
* 第一支程式
  * 畫星星 建立鷹架
```cpp
#include <stdio.h>
int main(void){
	for(int i=1;i<=5;i++){
		int star=i*2-1;
		printf("鷹架:%d樓 %d星\n",i,star);
	}
	return 0;
}
```
* 第二支程式
  * 畫星星-金字塔
```cpp
#include <stdio.h>
int main(void){
	for(int i=1;i<=5;i++){
		int space=5-i;
		int star=i*2-1;
		for(int j=0;j<space;j++){
			printf(" ");
		}
		for(int k=0;k<star;k++){
			printf("*");
		}
		printf("鷹架:%d樓 %d空格 %d星\n",i,star);
	}
	return 0;
}
```
* 第三支程式
  * 暴力破解法-找出兩數值的最大公因數
```cpp
#include <stdio.h>
int main(void){
	printf("請輸入兩個數: ");
	int a,b,ans;
	scanf("%d%d",&a,&b);
	for(int i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			ans=i;
		}
	}
	printf("找到ans:%d",ans);
	return 0;
}
```
* 第四支程式
  * 輾轉相除法-找出兩數值的最大公因數 暴力破解法電腦跑太慢會lag
```cpp
#include <stdio.h>
int main(void){
	printf("請輸入兩個數: ");
	int a,b,c;
	scanf("%d%d",&a,&b);
	while(1){
		c=a%b;
		printf("a:%d b:%d c:%d\n",a,b,c);
		if(c==0){
			break;
		}
		a=b;
		b=c;
	}
	printf("中的是:%d",b);
	return 0;
}
```
* 第五支程式
  * 判斷if括號裡面的值成不成立
```cpp
#include <stdio.h>
int main(void){
	int a=10;
	if(-999){
		printf("-999成立\n");
	}
	if(-3){
		printf("-3成立\n");
	}
	if(-2){
		printf("-2成立\n");
	}
	if(-1){
		printf("-1成立\n");
	}
	if(0){
		printf("0不成立,所以什麼都沒印\n");
	}
	if(1){
		printf("1成立\n");
	}
	if(2){
		printf("2成立\n");
	}
	if(3){
		printf("3成立\n");
	}
	if(4){
		printf("4成立\n");
	}
	if(999){
		printf("999成立\n");
	}
	if("a==0"){
		printf("不管什麼東西,幾乎都成立\n");
	}
	return 0;
}
```
