/*
 zval.h
 自制建议zval的实现头文件
 Say
 2016-01-26
 */
#define IS_NULL '0'
#define IS_INT '1'
#define IS_STR '2'

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

int zval_change(char *str, unsigned char *type, unsigned int count, unsigned char ref);//变更
unsigned char zval_type(char *type);//获取类型

unsigned char zval_return_type(void);//返回类型

int zval_echo(char *content);//输出
