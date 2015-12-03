#include <stdio.h>
int main(void){
	//*求不超过400w的斐波那契数列的和
	int sum =0,
		max = 4000000,
		a = 1,
		b = 2,
		c = 0;
	//*笨办法
	sum = 2;
	while(c<=max){
		c = a + b;
		if(a<b){
			a = c;
		}else{
			b = c;
		}
		if(c%2==0) sum += c;
	}
	printf("The Result is: %d \r\n", sum);
	return 0;
}
//算法讨论
//https://projecteuler.net/thread=2
