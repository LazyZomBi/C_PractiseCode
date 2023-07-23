#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////extern，关于声明的关键字
//extern int a;  //声明或创建变量名
//extern int b = 5;
//int main()
//{
//	printf("a = %d", a);
//	printf("b = %d", b);
//}


//enum Sex  //枚举变量，可一一列举的常量
//{
//	//枚举常量
//	MALE = 1,  //赋初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = SECRET;
//	printf("s = %d",SECRET);
//}


////const修饰的常变量
//int main()
//{
//	int s = 10;
//	const int l = 10;  //常变量，其值不可改变
//	s = s + 1;
//	//l = l + 1;  //err
//	printf("s = %d", s);
//	printf("l = %d", l);
//}


////标识符常量
//#define MIN 0.001
//int main()
//{
//	#define MAX 1000  //定义的标识符常量，其值不可变
//	float s = MAX - MIN;
//	printf("s = %f\n", s);
//}


////字符串，结束以\0为标志
//int main()
//{
//	char arr[] = "hello";
//	char arr1[] = { 'a', 'b', 'c', '\0'};
//	int b = strlen(arr);
//	int c = strlen(arr1);
//
//	printf("%d\n", b);
//	printf("%d\n", c);
//	printf("%s\n", arr1);
//	return 0;
//}


int main()
{

	return 0;
}