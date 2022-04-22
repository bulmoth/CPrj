#include <stdio.h>



/*
//명령어를 묶는 데이터 타입 함수 => 함수형
// returntype 함수명(매개변수){
// 명령어;
//return	//return 값이 있는 경우에는 return문을 반드시 써야함.
// }
void PrintMonster() {
	for (int i = 0; i < 10; i++) {
		printf("Monster\n");
	}
}

int global = 0;		//외부변수, 전역변수
int array[100];		//외부변수, 전역변수

int add(int a, int b) {
	int result = a + b;

	global = 200;		//전역변수

	return result;
}

//접근범위 : 로컬변수
//존속기간: 정적변수
int score(int value) {
	static int score = 0;	//로컬변수, 정적변수

	score += value;

	return score;
}

int main() {		//진입점함수, entry point

	//동일한 코드가 반복될 때 한번에 출력할 수 있다
	//return문은 함수내부의 명령어를 처리한 결과 값을 함수 외부로 전달하는 역할을 한다.

	int a = 20;		//로컬변수, 자동변수
	int b = 30;

	{
		int a = 100;

		a = 10;
	}


	global = 300;		//전역변수


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

