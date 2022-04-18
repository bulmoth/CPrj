#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main() {

	/*
	//동일한 타입의 공간이 여러개 필요할 때 배열을 사용한다.

	float array[10];

	float* parray = array;

	array[0] = 20;
	//*(array + 0 = 20;

	array[1] = 50;	//배열식
	*(array + 1) = 50;	//포인터식		//+1의 의미: 4byte 만큼 이동해랴	

	for (int i = 0; i < 10; i++) {
		*(array + i) = i*1.2f;
	}


	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %f\n", i, *parray++);
	}
	*/




	/*
	//학생 관리용 프로그램

	int age;
	char name[50];
	int classNum;
	int sex;


	age = 20;
	name[0] = 'L';
	name[1] = 'e';
	name[2] = 'e';
	name[3] = '\0';

	classNum = 7;
	sex = 0;

	printf("이름: %s, 나이: %d, 반: %d, 성별: %s\n", name, age, classNum, sex == 0 ? "여자" : "남자");


	//10명
	//1.
	int age0, age1, age2, age3;
	char nameArray0[50], nameArray1[50];
	int calssNum0, classNum1;
	int sex10;




	//2.
	int ageArray[10];
	char nameArray[10][50];
	int classNumArray[10];
	int sexArray[10];

	for (int i = 0; i < 10; i++) {
		ageArray[i] = 10 + i;
		sprintf(nameArray[i], "Lee %d", i);
		classNumArray[i] = i;

		sexArray[i] = i % 2;
	}

	for (int i = 0; i < 10; i++) {
		printf("이름: %s, 나이: %d, 반: %d, 성별: %s\n", nameArray[i], ageArray[i], classNumArray[i], sexArray[i] == 0 ? "여자" : "남자");
	}

	//서로 연관성 있는 데이터를 하나로 묶어서 새로운 데이터 타입을 만들어주는 도구가 있음
	//구조체

	struct Student {	//사용자 정의 데이터 타입
		int age;	//구조체 멤버
		char name[50];
		int classNum;
		int sex;
	};

	struct Student st;	//구조체 변수

	st.age = 10;		//. : period 연산자
	st.classNum = 7;
	st.name[0] = 'C';
	st.name[1] = 'h';
	st.name[2] = 'o';
	st.name[3] = 'i';
	st.name[4] = '\0';	//null

	//strcpy(st.name,"Choi");
	st.sex = 0;

	printf("\n 구조체 변수 \n");
	printf("이름: %s, 나이: %d, 반: %d, 성별: %s\n", st.name, st.age, st.classNum, st.sex == 0 ? "여자" : "남자");
	*/


	/*
	typedef struct tagStudent {	//사용자 정의 데이터 타입
		int age;	//구조체 멤버
		char name[50];
		int classNum;
		int sex;
	} Student;


	Student array[3];

	//typedef struct tagStudent Student;		//Student를 tagStudent로도 할 수 있다

	//sizeof(array) 배열의 전체 바이트 수
	//sizeof(array[0]) 배열의 요소의 바이트 수

	int length = sizeof(array) / sizeof(array[0]);		//배열 요소의 갯수

	
	//for (int i = 0; i < length; i++) {
	//	array[i].age = i + 10;
	//	sprint(array[i].name, "Baik_%d", i);
	//	array[i].classNum = i;
	//	array[i].sex = i % 2;
	//}
	
	
	for (int i = 0; i < length; i++) {
		printf("학생의 이름을 입력하세요:");
		scanf("%s", array[i].name);

		printf("학생의 나이을 입력하세요:");
		scanf("%d", &array[i].age);

		printf("학생의 반을 입력하세요:");
		scanf("%d", &array[i].classNum);

		printf("학생의 성별을 입력하세요: (0: 여자, 1: 남자)");
		scanf("%d", &array[i].sex);
		system("cls");		//입력창 clear

	}

	for (int i = 0; i < length; i++) {
		printf("이름: %s\n", array[i].name);
		printf("나이: %d\n", array[i].age);
		printf("반: %d\n", array[i].classNum);
		printf("성별: %s\n", array[i].sex == 0 ? "여자" : "남자");
	}
	*/


	//구구단의 결과값을 배열에 저장...출력....






	return 0;
}