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

	printf("%d / %d = %f\n", a, b, result);		// ��� �� b�� float�� �ƴ� int�̱� ����

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

	// % ������ ������: ������ ���� ������ �ǹ��ִ� ������ ������ ���ڷ� ���� �� ���

	*/



	/*
	srand(time(NULL));		// ������ seed���� ����

	int randValue = rand();		// ������ ����
	int direction = randValue % 4;		// 0: North, 1: South, 2: West, 3: East


	printf("randValue = %d, direction = %d\n", randValue, direction);
	*/


	/*
	int a =  20;
	int b = 30;

	int result = a > b;		//���ǿ� ���ÿ� ����
	printf("%d > %d = %d\n", a, b, result);

	result = a < b;			// ���ǰ� �Ʊ� ������ �ٷ� ���� ���൵ ��
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

	printf("x�� ���� �Է��ϼ���: ");
	scanf("%d", &x);		// Ű���忡�� ���� �Է� �޴� �Լ�

	int ret = min < x && x > max;

	printf("%d < %d < %d = %d\n", min, x, max, ret);
	*/



	// box: �ڽ��� ���� ����ִ��� �ȵ���ִ��� logic
	int LeftTopX = 0;
	int LeftTopY = 0;

	int RightBottomX = 10;
	int RightBottomY = 10;

	int PointX = 0;
	int PointY = 0;

	printf("X��ǥ�� �Է��ϼ���: ");
	scanf("%d", &PointX);

	printf("Y��ǥ�� �Է��ϼ���: ");
	scanf("%d", &PointY);

	//scanf("%d %d", &PointX, &PointY);			//�����̽��ٷ� �Է� ���� ���� �� ����

	int Correct = (PointX < RightBottomX && PointX > LeftTopX) && (PointY < RightBottomY && PointY > LeftTopY);
	printf("����� %d �Դϴ�.", Correct);


	return 0;
}