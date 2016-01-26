/*
 zval.h
 自制建议zval的实现头文件
 Say
 2016-01-26
 */

typedef union __zvalue{
	int num;//支持数字
	char *str;//支持字符串
} zvalue;

typedef struct __zval{
	zvalue value;//zval的值
	unsigned int refcount__gc;//引用计数
	unsigned char type;//zval类型
	unsigned char is_ref__gc;//是否被重复引用，变量重复赋值时
} zval;
