#include "stdio.h"
//求小于1000的3或5的倍数的和
int main(void){
	int max = 1000,
		a = 3,
		b = 5,
		sum = 0;
	int i;
	/*笨办法

	for(i=1; i<1000; i++){
		if(i%a==0 || i%b==0){
			sum += i;
		}
	}
	*/
	//*写法优化版
	for(i=1; i<1000; i++){
		if(!(i%a) || !(i%b)){
			sum += i;
		}
	}
	//*无循环算法

	sum = get_sum(a,max) + get_sum(b,max) - get_sum(a*b,max);
	printf("The sum below %d is %d.\r\n", max, sum);
	return 1;
}
int get_sum(int n, int max){
	int sum;
	sum = n*((max-1)/n)*(1+((max-1))/n)/2;
	return sum;
}
//算法讨论
//等差数列
//https://projecteuler.net/thread=1
