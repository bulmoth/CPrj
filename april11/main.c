#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	/*
	int a = 20;		//���� : statement
	int b = 30;

	(a > b) ? printf("a:%d�� b%d���� ũ��\n", a, b) : printf("a:%d�� b:%d���� �۰ų� ����.\n", a, b);		//�� : expression

	int max = (a > b) ? a : b;

	printf("a:%d �� b:%d �߿� ū ���� %d �̴�.\n", a, b, max);
	*/



	/*
	int a = 20;

	a++;		//������
	printf("a = %d\n", a);

	++a;		//������
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

	a--;		//������
	printf("a = %d\n", a);

	--a;		//������
	printf("a = %d\n", a);

	c = a--;
	printf("c = %d, a = %d\n", c, a);

	c = --a;
	printf("c = %d, a = %d\n", c, a);
	*/
	

	/*
	int a = 20;
	float c = 3.4f;


	//�⺻ ������ Ÿ�� ���� ���Կ����� �����Ϸ��� �ڵ����� ����ȯ�� ����.
	//int, short, long, float, double, ...
	a = c;

	printf("a = %d\n", a);
	


	//�����
	a = a + 1;
	a += 1;

	a = a / 1;
	a /=1;
	
	
	*/


	


	//����
	int leftX1 = 0, leftY1 = 0;
	int rightX1 = 10, rightY1 = 10;

	int leftX2 = 0, leftY2 = 0;
	int rightX2 = 0, rightY2 = 0;


	printf("�� ��° �ڽ��� ���� ��� ��ǥ�� �Է��Ͻÿ�(x y) : ");
	scanf("%d %d", &leftX2, &leftY2);

	printf("�� ��° �ڽ��� ������ �ϴ� ��ǥ�� �Է��Ͻÿ�(x y) : ");
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


	printf("�� �ڽ��� ��ġ�°�? %d\n", leftResult);



	return 0;
}