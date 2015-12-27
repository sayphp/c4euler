#include <stdio.h>
#include <math.h>
int is_prime(int x);
int is_prime_best(int x);
//求第10001个素数
int main(void){
	int x = 3,
		i = 1;
	while(x){
		if(is_prime_best(x)){
			i++;
		}
		if(i==10001) break;
		x += 2;
	}
	printf("The 10001st num is %d\r\n", x);

}

int is_prime(int x){
	int i = 3;
	while(i<x){
		if(x%i==0){
			return 0;
		}
		i += 2;
	}
	printf("The num is %d\r\n", x);
	return 1;
}

//我的登录范围充其量也就是减少运算次数了
//看了最优实现,自己学习下
int is_prime_best(int x){
	if(x==1) return 0;
	if(x<4) return 1;
	if(x%2==0) return 0;//因为我的实现自动跳过了偶数，所以这条不存在，这么看貌似比最优有所优化-。-
	if(x<9) return 1;
	if(x%3==0) return 0;
	int r = floor(sqrt(x)), 
		y = 5;
	while(y<=r){
		if(x%y==0) return 0;
		if(x%(y+2)==0) return 0;
		y += 6;
	}
	return 1;
}
