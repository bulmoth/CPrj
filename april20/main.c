#include <stdio.h>



/*
//�Լ� function(���_
//�Լ���
//��ɾ �����ϴ� ������ Ÿ��
//��ɾ���� ���� �� ���

//return type�� void �� ��쿡�� ���ϰ��� ���ٴ� �ǹ�
//returntype �Լ���(�Ű�����){
//��ɾ���� ����
//}


int global = 0;	//�ܺκ���, ��������


int add(int, int);	//�Լ� ����, ����....���� �Լ��� ���ʿ��� ������ �̰� ������ ����


int* GetScore(int value) {
	static int score = 0;		//���ú���, ��������
	
	score += value;

	printf("GetScore = %d\n", score);

	


	return &score;
}


int main() {
	int a = 20;		//���ú���, �ڵ�����
	int b = 30;

	//add(20, 30);

	int result = add(a, b);

	int result2;

	int* pa = GetScore(10);

	//printf("monster");
	printf("monster");

	printf("*pa = %d, pa = %p\n", *pa, pa);

	return 0;
}



int add(int a, int b) {	//�Լ��� �����ߴ�...���� �Լ��� ���� ������ ����ϴµ� ���򿡴� ���� �ؿ��ٰ� ���൵ ���� �ȳ�,,,
	int result = a + b;		

	return result;
}
*/





//�Լ��� ���� ���޹��
//Call by value(���� ���� ȣ��)
//Call by address(�ּҰ��� ���� ȣ��)
//Call by reference(�������� ���� ȣ��)

int add(int a, int b) {
	return a + b;
}

void Swap(int a, int b) {
	int temp = 0;

	temp = a;
	a = b;
	b = temp;
}

void Swap2(int* pa, int* pb) {
	int temp = 0;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	int a = 20;
	int b = 30;

	int result;
	result = add(a, b);

	Swap(a, b);
	printf("Swap(a, b) = a: %d, b: %d\n", a, b);

	Swap2(&a, &b);
	printf("Swap2(a, b) = a: %d, b: %d\n", a, b);


	return 0;
}