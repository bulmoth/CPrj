#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	//int a = 20;

	/*
	if (���ǽ�) {
	���ǽ��� ������� ���̸� ����
	}
	*/


	/*
	if (a > 0) {	//���� ��츸 ó�� : �������ǹ�
		printf("a:%d �� 0���� Ů�ϴ�.\n", a);
	}//�߰�ȣ�� ������ ª���� ��������


	if (a - 20) {	//C������ �̷� ��ų�� ����� �� ����...���� ������ ó���ϱ� ����
		printf("a:%d �� 0���� Ů�ϴ�.\n", a);
	}

	//���� ���ǹ�
	if (a > 0) {	//���ǽ��� ���� ���
		printf("a:%d �� 0���� Ů�ϴ�.\n", a);
	}
	else {	//���ǽ��� ������ ���
		printf("a:%d �� 0���� �۰ų� �����ϴ�.\n", a);
	}
	*/

	/*
	int money = 0;
	printf("�뵷 �׼��� �Է��ϼ��� : ");
	scanf("%d", &money);

	if (money >= 40000 && money < 60000) {
	printf("�Ǿ���\n");
	}
	else if (money > 100000) {
		printf("���γ뷡��\n");
	}
	else if (money >= 80000 && money < 100000) {
		printf("��\n");
	}
	else if (money >= 60000 && money < 80000) {
		printf("ī��\n");
	}
	else if (money >= 20000 && money < 40000) {
		printf("���޶�� ����\n");
	}
	else {		//��������
		printf("���\n");
	}
	*/



	/*
	int buttonNum = 0;

	printf("�������� ��ư�� �Է��ϼ���: ");
	scanf("%d", &buttonNum);

	

	if (buttonNum == 0) {
		printf("���� ON\n");
	}
	else if (buttonNum == 1) {
		printf("���� OFF\n");
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
	
	//�������� ��ȭ�� ���� �б� ��ų �� ����մϴ�
	switch (buttonNum) {
	case 0:	//case ���� �ȿ��� ������ ����ϰ� ������ �߰�ȣ ���� ����ؼ� ��������, �� ������ �ۿ� ������ ȿ��X
	{
		int a = 20;
		printf("���� ON\n");
	}
		break;
	case 1:
		printf("���� OFF\n");
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
	//break �� ������ �ڿ��� �����
	*/

	
	/*
	int inputValue = 0;

	printf("0 ~ 10 ������ ���ڸ� �Է��ϼ��� : ");
	scanf("%d, &inputValue");

	switch (inputValue) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 8:
	case 10:
		printf("¦���Դϴ�.\n");
		break;

	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
		printf("Ȧ���Դϴ�.\n");
		break;

	default:
		printf("�߸� �Է��ϼ̽��ϴ�.");
		break;
	}

	*/

	/*
	int inputValue = 0;
	//����+���� ȥ��
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
	printf("���� �Է��ϼ���: ");
	scanf("%d", &inputValue);

	if (inputValue < 0) {
		goto Exit;
	}

	printf("inputValue = %d\n", inputValue);
	printf("�ٽ� ����\n");
	goto Start;
	

Exit:
	printf("����\n");
	*/







	return 0;
}//main