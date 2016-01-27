/*
 zval操作程序
 Say
 2016-01-27
 */
int zval_change(char *str, unsigned char *type, unsigned int count, unsigned char ref){
	zval z;
	z.type = zval_type(type);

	z.refcount__gc = count;
	z.is_ref__gc = ref;
	if(z.type==IS_STR){
		z.value.str = str;
	}else{
		z.value.num = atoi(str);
	}
	return 1;
}

unsigned char zval_return_type(void){
	zval z;
	return z.type;
}

unsigned char zval_type(char *type){
	unsigned char r = IS_NULL;
	if(type=="int") r = IS_INT;
	if(type=="str") r = IS_STR;//字符串
	return r;
}

int zval_echo(char *content){
	zval z;
	switch(z.type){
		case IS_INT:
			printf("%s%d\r\n", content, z.value.num);
			break;
		case IS_STR:
			printf("%s%s\r\n", content, z.value.str);
			break;
		default:

			printf("%x\r\n", z.type);
			printf("%x\r\n", z.is_ref__gc);
			printf("%d\r\n", z.refcount__gc);
			printf("%s\r\n", z.value.str);

			printf("没有获得到值\r\n");
	}
	return 1;
}
