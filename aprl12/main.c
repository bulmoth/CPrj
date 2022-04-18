#include <stdio.h>

int main() {
	
	/*
	unsigned char a = 1;
	unsigned char b = 2;

	printf("a:%d & b:%d = %d\n", a, b, a & b);
	printf("a:%d | b:%d = %d\n", a, b, a | b);
	printf("~a:%d = %u\n", a, ~a);
	printf("a:%d ^ b:%d = %d\n", a, b, a ^ b);
	*/
	
	/*
	int c = 1;
	int d = 2;

	int e = c ^ d;
	int f = e ^ c;
	*/
	

	/*
	unsigned char c = 129;
	// 1000 0001

	unsigned char ret = c << 1;
	// 0000 0010  2
	printf("ret = %d\n", ret);

	ret = c << 2;
	// 0000 0100  4
	printf("ret = %d\n", ret);

	ret = c >> 1;
	// 0100 0000  64
	printf("ret = %d\n", ret);

	ret = c >> 2;
	// 0010 0000  32
	printf("ret = %d\n", ret);

	//xor을 사용해서 변수 a와 변수 b에 있는 값을 서로 바꿔서  저장하세요
	int a = 20;
	int b = 30;
	

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a:%d, b:%d\n", a, b);
	*/


	int a = 20;

	printf("int size = %d\n", sizeof(int));
	printf("a size = %d\n", sizeof(a));





	return 0;
}