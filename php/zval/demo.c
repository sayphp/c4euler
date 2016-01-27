/*
 zval的测试demo
 Say
 2016-01-26
 */
#include <stdio.h>
#include "zval.h"
#include "zval.c"

static zval z;

int main(void){
	
	zval_change("Wow", "string", 1, '0');
	zval_echo("");
	return 0;
}
