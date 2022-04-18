#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	//int a = 20;

	/*
	if (조건식) {
	조건식의 결과값이 참이면 실행
	}
	*/


	/*
	if (a > 0) {	//참인 경우만 처리 : 단일조건문
		printf("a:%d 가 0보다 큽니다.\n", a);
	}//중괄호는 내용이 짧으면 생략가능


	if (a - 20) {	//C언어에서는 이런 스킬도 사용할 수 있음...논리를 정수로 처리하기 때문
		printf("a:%d 가 0보다 큽니다.\n", a);
	}

	//이중 조건문
	if (a > 0) {	//조건식이 참인 경우
		printf("a:%d 가 0보다 큽니다.\n", a);
	}
	else {	//조건식이 거짓인 경우
		printf("a:%d 가 0보다 작거나 같습니다.\n", a);
	}
	*/

	/*
	int money = 0;
	printf("용돈 액수를 입력하세요 : ");
	scanf("%d", &money);

	if (money >= 40000 && money < 60000) {
	printf("피씨방\n");
	}
	else if (money > 100000) {
		printf("코인노래방\n");
	}
	else if (money >= 80000 && money < 100000) {
		printf("술\n");
	}
	else if (money >= 60000 && money < 80000) {
		printf("카페\n");
	}
	else if (money >= 20000 && money < 40000) {
		printf("더달라고 대든다\n");
	}
	else {		//생략가능
		printf("운다\n");
	}
	*/



	/*
	int buttonNum = 0;

	printf("리모컨의 버튼을 입력하세요: ");
	scanf("%d", &buttonNum);

	

	if (buttonNum == 0) {
		printf("전원 ON\n");
	}
	else if (buttonNum == 1) {
		printf("전원 OFF\n");
	}
	else if (buttonNum == 2) {
		printf("Voluem UP\n");
	}
	else if (buttonNum == 3) {
		printf("Voluem Down\n");
	}
	else if (buttonNum == 6) {
		printf("Channel Up\n");
	}
	else if (buttonNum == 7) {
		printf("Channel Down\n");
	}
	else {
		printf("Wrong Number\n");
	}
	
	//정수값의 변화에 따라서 분기 시킬 때 사용합니다
	switch (buttonNum) {
	case 0:	//case 구문 안에서 변수를 사용하고 싶으면 중괄호 블럭을 사용해서 변수선언, 이 변수는 밖에 나가면 효력X
	{
		int a = 20;
		printf("전원 ON\n");
	}
		break;
	case 1:
		printf("전원 OFF\n");
		break;
	case 2:
		printf("Voluem Up\n");
		break;
	case 3:
		printf("Voluem Down\n");
		break;
	case 6:
		printf("Channel Up\n");
		break;
	case 7:
		printf("Channel Down\n");
		break;
	default:
		printf("Wrong Number\n");
	}
	//break 가 없으면 뒤에도 실행됨
	*/

	
	/*
	int inputValue = 0;

	printf("0 ~ 10 사이의 숫자를 입력하세요 : ");
	scanf("%d, &inputValue");

	switch (inputValue) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 8:
	case 10:
		printf("짝수입니다.\n");
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
		printf("홀수입니다.\n");
		break;

	default:
		printf("잘못 입력하셨습니다.");
		break;
	}

	*/

	/*
	int inputValue = 0;
	//정수+조건 혼용
	switch (inputValue) {
	case 0:
		break;

	case 1:
		break;

	case 2:
		break;

	default:
		if (inputValue >= 3 && inputValue < 5) {

		}
		else if (inputValue >= 5 && inputValue < 10) {

		}
		else {

		}
		break;
	}
	*/


	/*
	int inputValue = 0;

Start:	//Lable
	printf("값을 입력하세요: ");
	scanf("%d", &inputValue);

	if (inputValue < 0) {
		goto Exit;
	}

	printf("inputValue = %d\n", inputValue);
	printf("다시 시작\n");
	goto Start;
	

Exit:
	printf("종료\n");
	*/







	return 0;
}//main