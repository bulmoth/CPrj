#include <stdio.h>



/*
//��ɾ ���� ������ Ÿ�� �Լ� => �Լ���
// returntype �Լ���(�Ű�����){
// ��ɾ�;
//return	//return ���� �ִ� ��쿡�� return���� �ݵ�� �����.
// }
void PrintMonster() {
	for (int i = 0; i < 10; i++) {
		printf("Monster\n");
	}
}

int global = 0;		//�ܺκ���, ��������
int array[100];		//�ܺκ���, ��������

int add(int a, int b) {
	int result = a + b;

	global = 200;		//��������

	return result;
}

//���ٹ��� : ���ú���
//���ӱⰣ: ��������
int score(int value) {
	static int score = 0;	//���ú���, ��������

	score += value;

	return score;
}

int main() {		//�������Լ�, entry point

	//������ �ڵ尡 �ݺ��� �� �ѹ��� ����� �� �ִ�
	//return���� �Լ������� ��ɾ ó���� ��� ���� �Լ� �ܺη� �����ϴ� ������ �Ѵ�.

	int a = 20;		//���ú���, �ڵ�����
	int b = 30;

	{
		int a = 100;

		a = 10;
	}


	global = 300;		//��������


	int result = add(a, b);


	for (int i = 0; i < 10; i++) {
		score(i);
	}

	printf("score = %d\n", score(0));
	
	return 0;
}
*/





int add(int a, int b) {
	int result = a + b;

	return result;
}

int minus(int a, int b) {
	int result = a - b;

	return result;
}

int multiple(int a, int b) {
	int result = a * b;

	return result;
}

float divide(int a, int b) {
	float result = a / (float)b;

		return result;
}

int main() {

	int a = 20;
	int b = 30;
	int result = add(20, 30);

	int result1 = add(a, b);
	int result2 = minus(a, b);
	int result3 = multiple(a, b);
	float result4 = divide(a, b);

	printf("% d + % d = % d\n", a, b, result1);
	printf("% d - % d = % d\n", a, b, result2);
	printf("% d * % d = % d\n", a, b, result3);
	printf("% d / % d = % .2f\n", a, b, result4);


	return 0;
}

