#include <stdio.h>
int is_prime(int x);
//求第10001个素数
int main(void){
	int x = 2,
		i = 0;
	while(x){
		if(is_prime(x)){
			i++;
		}
		if(i==10001) break;
		x++;
	}
	printf("The 10001st num is %d\r\n", x);

}

int is_prime(int x){
	int i = 2;
	while(i<x){
		if(x%i==0){
			return 0;
		}
		i++;
	}
	printf("The num is %d\r\n", x);
	return 1;
}
