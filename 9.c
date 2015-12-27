#include <stdio.h>
#include <math.h>
//求a+b+c=1000 a、b、c满足勾股定理（毕达哥拉斯勾股数组）的a*b*c;
int main(void){
	int a = 1, b = 2,c = 997, sum = 1000, rs = 0;
	while(a<1000){//a<b<c,a、b中一奇一偶，这个点要注意
		while(b<1000){
			c = sum - a - b;
			if(c < 0) break;
			if(c < b) break;
			//printf("The a = %d, b = %d, c = %d\r\n", a, b, c);
			if(pow(c, 2) == pow(a, 2)+ pow(b, 2)){
				printf("The a = %d, b = %d, c = %d\r\n", a, b, c);
				rs = a*b*c;
				printf("The rs is %d", rs);
				return 1;
			}
			b += 1;
		}
		a += 1;
		b = a+1;
	}
	return 1;	
}
//好深奥
