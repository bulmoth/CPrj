#include <stdio.h>
#include <stdlib.h>		//atoi 함수


/*
//call by value
//call by address

int add(int a, int b) {
	return a + b;
}

//void printArray(int array[], int size) {			//새 배열을 생성, 값이 각각 복사가 됨. 비효율적.
void printArray(const int *parray, int size){		//주소값만 전달하면 되기 때문에 메모리 낭비가 줄어듦, but 원래 배열의 값이 바뀔 수 있는 위험이 있음 >> const로 방지
	for (int i = 0; i < size; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
		
	}

	//parray[0] = 100;	//const로 막을 수 있음

}


int main() {
	int a = 20;
	int b = 30;

	int result = add(a, b);

	int array[100];
	int size = sizeof(array) / sizeof(array[0]);

	for (int i = 0; i < 100; i++) {
		array[i] = i;
	}

	printArray(array, size);	//배열명이 주소값이라 &array 안써줘도 됨


	return 0;
}
*/




/*
struct Array {	// 사용자 정의 데이터 타입
	int array[100];		// 구조체 멤버
	int size;			

};

void Add10(struct Array data){
//void Add10(struct Array* data) {
	for(int i=0; i<data.size; i++){
	//for (int i = 0; i < data->size; i++) {	//-> 화살표 연산자....dqta 주소값에 있는 주소로 가서 size를 찾아라~~~ 이말같...음...응.....
		data.array[i] += 10;
		//data->array[i] += 10;
		//data->size == (*data).size;
	}

}



int main() {
	struct Array a;		//struct Array라는 데이터 타입의 a
	a.size = sizeof(a.array) / sizeof(a.array[0]);		//구조체 멤버 size 변수,,,

	for (int i = 0; i < a.size; i++) {
		a.array[i] = i;
	}

	Add10(a);
	//Add10(&a);

	for (int i = 0; i < a.size; i++) {
		printf("a.array[%d] = %d\n", i, a.array[i]);
	}
}
*/




//프로젝트 우클릭 -> 속성 -> 디버깅 -> 명령인수 를 통해 cmd 창에 인자 전달한거랑 똑같이 해줄 수 있음,,
//argc, argv : 명령행인자		//프로그램을 실행했을 때 실행파일 뒤쪽에 전달되는 인자? 실행파일에 값을 전달할 수 있음,,,
//cmd 창 -> cd(== change directory) 경로명 -> dir(== directory) *.exe -> 실행할파일 전달할인자 => 출력문으로 인자가 나옴,,,
int main(int argc, char* argv[]) {		//argc : main함수에 전달된 인자의 갯수(명령행 옵션의 갯수), 띄어쓰기로 구분, 기본값 1	//argv : 가변적인 갯수의 문자열(명령행 옵션의 문자열들), 인자들의 내용(의 주소값)
	//const int MAX = 100;

	//MAX = 200;	//const 붙은게 앞에 있어서 안됨.
	int sum = 0;


	for (int i = 0; i < argc; i++) {
		puts(argv[i]);	//문자열 출력만 지원해주는 함수
	}

	for (int i = 1; i < argc; i++) {
		sum += atoi(argv[i]);		//char* to int
	}

	printf("\n\n");
	printf("sum = %d\n", sum);


	return 0;
}