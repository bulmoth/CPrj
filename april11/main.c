#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	/*
	int a = 20;		//문장 : statement
	int b = 30;

	(a > b) ? printf("a:%d가 b%d보다 크다\n", a, b) : printf("a:%d가 b:%d보다 작거나 같다.\n", a, b);		//식 : expression

	int max = (a > b) ? a : b;

	printf("a:%d 와 b:%d 중에 큰 값은 %d 이다.\n", a, b, max);
	*/



	/*
	int a = 20;

	a++;		//후위식
	printf("a = %d\n", a);

	++a;		//전위식
	printf("a = %d\n", a);

	int c = a++;
	//int c = a;
	//a = a + 1;
	printf("c = %d, a = %d\n", c, a);

	c = ++a;
	//a = a + 1;
	//c = a;
	printf("c = %d, a = %d\n", c, a);


	a = 20;

	a--;		//후위식
	printf("a = %d\n", a);

	--a;		//전위식
	printf("a = %d\n", a);

	c = a--;
	printf("c = %d, a = %d\n", c, a);

	c = --a;
	printf("c = %d, a = %d\n", c, a);
	*/
	

	/*
	int a = 20;
	float c = 3.4f;


	//기본 데이터 타입 간의 대입연산은 컴파일러가 자동으로 형변환을 해줌.
	//int, short, long, float, double, ...
	a = c;

	printf("a = %d\n", a);
	


	//축약형
	a = a + 1;
	a += 1;

	a = a / 1;
	a /=1;
	
	
	*/


	


	//과제
	int leftX1 = 0, leftY1 = 0;
	int rightX1 = 10, rightY1 = 10;

	int leftX2 = 0, leftY2 = 0;
	int rightX2 = 0, rightY2 = 0;


	printf("두 번째 박스의 왼쪽 상단 좌표를 입력하시오(x y) : ");
	scanf("%d %d", &leftX2, &leftY2);

	printf("두 번째 박스의 오른쪽 하단 좌표를 입력하시오(x y) : ");
	scanf("%d %d", &rightX2, &rightY2);


	int leftXResult = 0, leftYResult = 0, rightXResult = 0, rightYResult = 0;
	int leftResult = 0;
	leftXResult = leftX1 < leftX2 && leftX2 < rightX1;
	leftYResult = leftY1 < leftY2 && leftY2 < rightY1;
	leftResult = leftXResult && leftYResult;
	/*
	rightXResult = (leftX1 < rightX2) && (rightX2 < rightX1);
	rightYResult = (leftY1 < rightY2) && (rightY2 < rightY1);
	*/


	printf("두 박스는 겹치는가? %d\n", leftResult);



	return 0;
}