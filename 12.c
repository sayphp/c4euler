#include <stdio.h>
//第一个500个约数的三角分割数
int isDivisor(int x);
int num(int x);
int main(void){
	int x = 1000000;
	while(x){
		if(isDivisor(num(x))){
			break;
		}
		x++;
	}
	printf("The num is %d\r\n", x);
	return 1;
}

int isDivisor(int x){
	int i = 0, m = 1;
	while(m<x){
		if(x%m==0){
			i++;
		}
		m++;
	}
	printf("The sum is %d\r\n", i);
	if(i>=500){
		return 1;
	}
	return 0;
}

int num(int x){
	int r = 0;
	while(x){
		r += x;
		x--;
	}
	return r;
}
