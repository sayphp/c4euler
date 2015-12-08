#include <stdio.h>
#include <math.h>

int main(void){
	int i=1, max=100, sum1=0, sum2=0, sum=0;
	/*while(i<=max){
		sum1 += pow(i, 2);
		sum2 += i;
		i++;
	}
	sum = pow(sum2, 2) - sum1;*/
	//这种不需要循环的方法,果断展现了我大数学的伟大性
	sum1 = max*(max+1)/2;
	sum2 = (2*max+1)*(max+1)*max/6;
	sum = pow(sum1, 2) - sum2;
	printf("The rs is %d\r\n", sum);
	return 0;
}
