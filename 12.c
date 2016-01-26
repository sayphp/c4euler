#include <stdio.h>
//第一个500个约数的三角分割数
int isDivisor(long int x);
int main(void){
	long int x = 1;
	while(x){
		if(isDivisor(x)){
			break;
		}
		x = x + x + 1;
		printf("The x is %ld\r\n", x);
	}
	printf("The num is %ld\r\n", x);
	return 1;
}

int isDivisor(long int x){
	long int i = 0, m = 1;
	while(m<x){
		if(x%m==0){
			i++;
		}
		m++;
	}
	printf("The sum is %ld\r\n", i);
	if(i>=500){
		return 1;
	}
	return 0;
}
