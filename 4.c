#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_pal(int num);

int main(void){
	//求最大的三位回文数
	int a = 999,
		b = 999,
		num,
		max = 0,
		max_a = 0,
		max_b = 0,
		count = 0;
	printf("The Largest Num is %d\r\n", a*b);
	//1.最笨的办法,遍历循环查询结果集,取出最大的数字
	//2.适当减少查询范围,从100到1000之间
	/*
	while(a > 99){
		while(b > 99){
			num = a*b;
			//printf("The num is %d,%d\r\n", a, b);
			if(is_pal(num)){
				if(num > max){
					max = num;
					max_a = a;
					max_b = b;
				}
//				printf("The result is %d\r\n", num);
			}
			count++;
			b--;
		}
		a--;
		b = 999;
	}
	*/
	//3.倒序递减
	/*
	int i,x,jump=0;
	for(i=999; i>100; i--){
		for(x=999; x >i; x--){
			count++;
			num = i * x;
			if(is_pal(num)){
				if(num > max){
					max = num;
					max_a = i;
					max_b = x;
					jump = 1;
					break;
				}

			}
		}
		if(num<800000 && num != 0) break;//通过限制范围来减少比对次数
		//if(jump) break;
	}
	*/
	//4.根据特性可以得到P=11(9091x+910y+100z)
	a = 1001;//11的倍数,距离999最近的
	while(a > 100){
		while(b > 100){
			num = a * b;
			if(is_pal(num) && num > max && a!=1001){
				max = num;
				max_a = a;
				max_b = b;
			}
			b--;
			count++;
		}
		a -= 11;
		b = 999;
	}	
	printf("The Max is %d;\r\nThe A is %d;\r\nThe B is %d\r\n", max, max_a, max_b);

	printf("The Count is %d\r\n", count);
}

bool is_pal(int num){
	int a[6];
	a[0] = num/100000;
	a[1] = (num%100000)/10000;
	a[2] = (num%10000)/1000;
	a[3] = (num%1000)/100;
	a[4] = (num%100)/10;
	a[5] = num%10;
	int i = 0, x = 0, y = 5;
	for(i=0; i<6; i++){
		if(a[i]){
			x = i;
			break;
		}
	}
	while((y-x)>0){
		if(a[y]!=a[x]) return false;
		y--;
		x++;
	}
	//if(a[y]!=a[x]) return false;
	return true;
}
