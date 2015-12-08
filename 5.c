#include <stdio.h>
#include <math.h>

int get_ele(int x);
int is_prime(int x);
//计算能够被1-20整除的最小数
//求最小公倍数
int main(void){
	int max = 20;
	int i=1, rs=1;
	/*	
	while(i<=max){
		rs *= get_ele(i);
		i++;
	}
	*/
	//小于x的所有质数及质数的n次方小于20的乘积
	while(i<=max){
		if(is_prime(i)){
			int n = 1;
			while((int)pow((float)i, (float)n)<max && i!=1){
				n++;
			}
			if(n>1) n--;
			
			printf("The n is %d\r\n", n);
			rs *= (int)pow((float)i, (float)n);
			printf("The s is %d\r\n", rs);
		}
		i++;
	}
	printf("The rs is %d\r\n", rs);
	return 0;
}

//递归获取
int get_ele(int x){
	int num = x,
		mark = x;
	while(x>1){
		if(num%x == 0 && mark!=x){
			printf("The num is %d\r\n", num);
			num = num/get_ele(x);
		}
		x--;
	}
	
	printf("The num is %d\r\n===============\r\n", num);
	return num;
}

//是否时质数
int is_prime(int x){
	int i = 2;
	while(i<x){
		if(x%i==0){
			return 0;
		}
		//printf("The num is %d\r\n", i);
		i++;
	}
	return 1;
}
