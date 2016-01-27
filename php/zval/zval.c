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
	if(z.type=='2'){
		z.value.str = str;
	}else{
		z.value.num = (int)*str;
	}
	return 1;
}

unsigned char zval_return_type(void){
	zval z;
	return z.type;
}

unsigned char zval_type(char *type){
	unsigned char r = '1';
	if(type=="string") r = '2';//字符串
	return r;
}

int zval_echo(char *content){
	zval z;
	switch(z.type){
		case '1':
			printf("%s%d\r\n", content, z.value.num);
			break;
		case '2':
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
