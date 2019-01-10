/*
date：2019//
author:BetterMe1
program:
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//1. 输出一个整数的每一位。
//void print(int value){
//	if (value > 9){
//		print(value / 10);
//	}
//	printf("%d ", value);
//}
//int main(){
//	print(15);
//	system("pause");
//	return 0;
//}
/*
2.编程实现：
两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7
*/
int compare_bit(int a, int b){
	int count = 0;
	for (int i = 31; i >= 0; i--){
		if (((a >> i) & 1) != ((b >> i) & 1)){
			count++;
		}
	}
	return count;
}
int main(){
	printf("%d\n",compare_bit(1999, 2299));
	system("pause");
	return 0;
}
