#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_factor(long unsigned int m);

int main(void){
	/*
	//求最大的质数
	long unsigned int max = 600851475143,
		start = 2,
		num = 0;
	//*笨办法
	long int i;
	for(i=max; i>start; i -= 2){
		if(is_factor(i)){
			num = i;
			break;
		}else{
			printf("计算中：%ld\r\n", i);
		}
	}
	printf("The largest prime factor is : %lu\r\n", num);
	*/
	long unsigned int max = 600851475143,
		i = 2,
		now = max;
	//long unsigned int arr[1000];
	while(true){
		if(is_factor(i)){
			if(now%i==0){
				now /= i;
				printf("The num is:%lu The factor is: %lu\r\n",now,i);
				i = 2;
			}
		}
			
		if(now==1 || is_factor(now)) break;
		i++;
	}
	/*int x;
	for(x=0; x<1000; x++){
		printf("The num is : %lu\r\n", arr[x]);
	}
	*/
}
//日了狗了，英语太烂，看错题目了

bool is_factor(long unsigned int m){
	//printf(">>%lu\r\n",m);
	long int i;
	double max;
	if(m==2 || m==3 || m==5) return true;
	max = sqrt((double)m);
	for(i=2; i<=sqrt(m); i++){
		if(m%i == 0) return false;
	}
	return true;
}
