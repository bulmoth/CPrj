#include <stdio.h>
/*
int main() {	//메인 함수
	int a = 20;
	int b = 30;


	float c = 1.2f;
	double d = 3.4;

	char f = 65;

	// 형식 지정문자열
	printf("a = %d\n", a);	//함수

	printf("a = %d, b = %d\n", a, b);

	printf("c = %f, d = %lf\n", c, d);

	printf("f = %c\n", f);

		return 0;
}
*/

int main() {
	short a = 1;
	long b = 12345;
	int c = -123;

	unsigned short d = 12354;
	unsigned long e = 1236;
	unsigned int f = 123455555;

	float g = 51.1235;
	double h = -123515.123;

	char i = 65;
	unsigned char j = 66;

	printf("%d\t%d\t%d\n %d\t%d\t%d\n %f\t%f\n %c\t%c", a, b, c, d, e, f, g, h, i, j);
	return 0;
}