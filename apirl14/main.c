#include <stdio.h>



int main() {



	/*
	// for (초기식; 조건식; 증감식) {
	//
	// }

	//단일 for문
	for (int i = 0; i < 10; i++) {

		printf("i = %d\n", i);

	}

	//이중 for문
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}

	//삼중 for문
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				printf("i = %d, j = %d, k = %d\n", i, j, k);
			}
		}
	}

	//쉼표로 여러 인수를 받을 수 있음
	for (int i = 0, j = 0; i < 10 && j < 10; i += 2, j += 3) {
		printf("i = %d, j = %d\n", i, j);
	}

	//C에선 조건식에 정수식이 가능, 조건식이 0이 되면 false가 되면서 끝남
	for (int i = 0, j = 10; i - j; i++, j--) {
		printf("i = %d, j = %d\n", i, j);
	}
	*/

	/*
	float a = 3234.34f;

	while (a > 0) {		//만족하는동안 반복해야할 때

		a -= 3.4f;
		printf("a = %f\n", a);

	}
	*/



	/*
	for (;;) {	//while문처럼 for문 쓰기

	}
	*/


	/*
	int a = -1;
	do {		//조건식이 뒤에 있기 때문에 반드시 한 번은 실행됨
		printf("a = %d\n", a);
	} while (a > 0);

	int b = 1000;
	//무한루프
	while (1) {
		printf("b = %d\n", b);

		b -= 3;

		if (b < 0) break;	//break 반복문을 탈출할 때 사용

	}

	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			continue;	//continue 뒤쪽 연산을 뛰어넘고 싶을 때(그리고 다시 처음으로 돌아가고 싶을 때) 사용
		}
		
		printf("i = %d\n", i);

	}
	*/



	/*
	int a = 0;

	int flag = 0;	//중첩된 반복문을 탈출하기 위한 flag값

	while (1) {		//무한루프
		while (1) {		//무한루프


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
				goto LoopExit;		//한번에 두 무한루프 빠져나오기
			}
		}

	}

LoopExit:
	*/


	/*
	//0~100
	//3의 배수 출력하고
	//3의 배수 이면서 2배수인 것을 출력해보자
	for (int i = 0; i <= 100; i++) {

		if (i % 3 == 0) {

			if (i % 2 == 0) {
				printf("3의 배수이면서 2의 배수 : %d\n", i);
				continue;
			}

			printf("3의 배수 : %d\n", i);
		}

	}
	*/


	//도형그리기,,,속꽉찬 사각형, 속빈 사각형, 직각사각형, 역직각사각형, 정삼각형, 역 정삼각형


	//속 꽉찬 사각형
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("*");
		}
		printf("\n");
	}
	

	//속빈 사각형
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


	//직각삼각형
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	//역직각삼각형
	for (int i = 10; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}


	//정삼각형
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

	//속빈 정삼각형
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


	//역정삼각형
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