/*
date��2019//
author:BetterMe1
program:
compiler:Visual Studio 2013
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//1. ���һ��������ÿһλ��
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
2.���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7
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
