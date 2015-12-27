#include <stdio.h>
#include <math.h>
//求200w以内质数的和

int main(void){
	int x = 1, max = 2000000, rs=0;
    while(x < max){	
		if(x==1) goto jump;
		if(x<4)	goto sum;
		if(x%2==0) goto jump;//因为我的实现自动跳过了偶数，所以这条不存在，这么看貌似比最优有所优化-。-
		if(x<9) goto sum;
		if(x%3==0)	goto jump;
		int r = floor(sqrt(x)),
			y = 5;
		while(y<=r){
			if(x%y==0) goto jump;
			if(x%(y+2)==0) goto jump;
			y += 6;
		}

		sum:rs += x;
		jump:;
		x++;
	}
	printf("The sum is %d\r\n", rs);
}
