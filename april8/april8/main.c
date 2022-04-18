#define _CRT_SECURE_NO_WARNINGS		//scanf()

#include <stdio.h>
#include <stdlib.h>		// rand(), srand()
#include <time.h>		//time()


int main() {
	/*
	int a = 1;
	int b = 2;

	int result2 = a + b;

	printf("%d + %d = %d\n", a, b, result2);

	result2 = a - b;

	printf("%d = %d = %d\n", a, b, result2);

	result2 = a * b;

	printf("%d x %d = %d\n", a, b, result2);


	float result = a / (float)b;

	printf("%d / %d = %f\n", a, b, result);		// 계산 전 b는 float이 아닌 int이기 때문

	int c = 5;
	int d = 2;

	result = c / (float)d;
	printf("%d / %d = %f\n", c, d, result);

	*/


	/*
	int a = 11;
	int b = 2;

	int result = a % b;

	printf("%d %% %d = %d\n", a, b, result);

	// % 나머지 연산자: 임의의 값을 나한테 의미있는 일정한 범위의 숫자로 만들 때 사용

	*/



	/*
	srand(time(NULL));		// 난수의 seed값을 생성

	int randValue = rand();		// 랜덤값 생성
	int direction = randValue % 4;		// 0: North, 1: South, 2: West, 3: East


	printf("randValue = %d, direction = %d\n", randValue, direction);
	*/


	/*
	int a =  20;
	int b = 30;

	int result = a > b;		//정의와 동시에 선언
	printf("%d > %d = %d\n", a, b, result);

	result = a < b;			// 정의가 됐기 때문에 바로 선언 해줘도 됨
	printf("%d < %d = %d\n", a, b, result);

	result = a <= b;
	printf("%d <= %d = %d\n", a, b, result);

	result = a >= b;
	printf("%d >= %d = %d\n", a, b, result);

	result = a == b;
	printf("%d == %d = %d\n", a, b, result);

	result = a != b;
	printf("%d != %d = %d\n", a, b, result);
	*/



	/*
	int x = 0;
	int min = 0;
	int max = 10;

	printf("x의 값을 입력하세요: ");
	scanf("%d", &x);		// 키보드에서 값을 입력 받는 함수

	int ret = min < x && x > max;

	printf("%d < %d < %d = %d\n", min, x, max, ret);
	*/



	// box: 박스에 점이 들어있는지 안들어있는지 logic
	int LeftTopX = 0;
	int LeftTopY = 0;

	int RightBottomX = 10;
	int RightBottomY = 10;

	int PointX = 0;
	int PointY = 0;

	printf("X좌표를 입력하세요: ");
	scanf("%d", &PointX);

	printf("Y좌표를 입력하세요: ");
	scanf("%d", &PointY);

	//scanf("%d %d", &PointX, &PointY);			//스페이스바로 입력 따로 받을 수 있음

	int Correct = (PointX < RightBottomX && PointX > LeftTopX) && (PointY < RightBottomY && PointY > LeftTopY);
	printf("결과는 %d 입니다.", Correct);


	return 0;
}