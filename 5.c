#include <stdio.h>

int get_num(int x);
int get_ele(int x);
//计算能够被1-20整除的最小数
//求最小公倍数
int main(void){
	int max = 20;
	int i=1, rs=1;
	while(i<=max){
		rs *= get_ele(i);
		i++;
	}
	printf("The rs is %d\r\n", rs);
	return 0;
}

int get_num(int x){
	int num=x,
		mark=x;
	int is=0;
	while(x>0){
		if(num%x == 0 && mark!=x){
			num = num/x;
		}
		x--;
	}
	printf("The return is %d\r\n", num);
	printf("===========================\r\n");
	return num;
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
