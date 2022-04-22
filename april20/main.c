#include <stdio.h>



/*
//함수 function(기능_
//함수형
//명령어를 저장하는 데이터 타입
//명령어들을 묶을 때 사용

//return type이 void 인 경우에는 리턴값이 없다는 의미
//returntype 함수명(매개변수){
//명령어들을 나열
//}


int global = 0;	//외부변수, 전역변수


int add(int, int);	//함수 원형, 선언....원래 함수를 뒤쪽에다 쓰려면 이걸 써줬어야 했음


int* GetScore(int value) {
	static int score = 0;		//로컬변수, 정적변수
	
	score += value;

	printf("GetScore = %d\n", score);

	


	return &score;
}


int main() {
	int a = 20;		//로컬변수, 자동변수
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



int add(int a, int b) {	//함수를 구현했다...원래 함수는 메인 위에다 써야하는데 요즘에는 메인 밑에다가 써줘도 에러 안남,,,
	int result = a + b;		

	return result;
}
*/





//함수의 인자 전달방식
//Call by value(값에 의한 호출)
//Call by address(주소값에 의한 호출)
//Call by reference(참조값에 의한 호출)

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