#include <stdio.h>



int main() {



	/*
	// for (�ʱ��; ���ǽ�; ������) {
	//
	// }

	//���� for��
	for (int i = 0; i < 10; i++) {

		printf("i = %d\n", i);

	}

	//���� for��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}

	//���� for��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				printf("i = %d, j = %d, k = %d\n", i, j, k);
			}
		}
	}

	//��ǥ�� ���� �μ��� ���� �� ����
	for (int i = 0, j = 0; i < 10 && j < 10; i += 2, j += 3) {
		printf("i = %d, j = %d\n", i, j);
	}

	//C���� ���ǽĿ� �������� ����, ���ǽ��� 0�� �Ǹ� false�� �Ǹ鼭 ����
	for (int i = 0, j = 10; i - j; i++, j--) {
		printf("i = %d, j = %d\n", i, j);
	}
	*/

	/*
	float a = 3234.34f;

	while (a > 0) {		//�����ϴµ��� �ݺ��ؾ��� ��

		a -= 3.4f;
		printf("a = %f\n", a);

	}
	*/



	/*
	for (;;) {	//while��ó�� for�� ����

	}
	*/


	/*
	int a = -1;
	do {		//���ǽ��� �ڿ� �ֱ� ������ �ݵ�� �� ���� �����
		printf("a = %d\n", a);
	} while (a > 0);

	int b = 1000;
	//���ѷ���
	while (1) {
		printf("b = %d\n", b);

		b -= 3;

		if (b < 0) break;	//break �ݺ����� Ż���� �� ���

	}

	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			continue;	//continue ���� ������ �پ�Ѱ� ���� ��(�׸��� �ٽ� ó������ ���ư��� ���� ��) ���
		}
		
		printf("i = %d\n", i);

	}
	*/



	/*
	int a = 0;

	int flag = 0;	//��ø�� �ݺ����� Ż���ϱ� ���� flag��

	while (1) {		//���ѷ���
		while (1) {		//���ѷ���


			a += 3;

			printf("a = %d\n", a);

			if (a > 100) {
				flag = 1;
				break;
			}
		}

		if (flag == 1) {
			break;
		}

	}


	a = 0;

	while (1) {
		while (1) {


			a += 3;

			printf("a = %d\n", a);

			if (a > 100) {
				goto LoopExit;		//�ѹ��� �� ���ѷ��� ����������
			}
		}

	}

LoopExit:
	*/


	/*
	//0~100
	//3�� ��� ����ϰ�
	//3�� ��� �̸鼭 2����� ���� ����غ���
	for (int i = 0; i <= 100; i++) {

		if (i % 3 == 0) {

			if (i % 2 == 0) {
				printf("3�� ����̸鼭 2�� ��� : %d\n", i);
				continue;
			}

			printf("3�� ��� : %d\n", i);
		}

	}
	*/


	//�����׸���,,,�Ӳ��� �簢��, �Ӻ� �簢��, �����簢��, �������簢��, ���ﰢ��, �� ���ﰢ��


	//�� ���� �簢��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}
	

	//�Ӻ� �簢��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 || i == 9|| j ==0 || j==9) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}


	//�����ﰢ��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	//�������ﰢ��
	for (int i = 10; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}


	//���ﰢ��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			if (i + j >= 10 && j - i <= 10) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	//�Ӻ� ���ﰢ��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			if (i + j == 10 || j - i == 10) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}


	//�����ﰢ��
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			if (j >= i && j < 20 - i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}





	return 0;
}//main