/*
 zval的测试demo
 Say
 2016-01-26
 */
#include <stdio.h>
#include "zval.h"
#include "zval.c"

int main(void){
	zval a;
	a.type = 'A';
	printf("The num is %c\r\n", a.type);
	return 0;
}
