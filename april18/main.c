#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main() {

	/*
	//������ Ÿ���� ������ ������ �ʿ��� �� �迭�� ����Ѵ�.

	float array[10];

	float* parray = array;

	array[0] = 20;
	//*(array + 0 = 20;

	array[1] = 50;	//�迭��
	*(array + 1) = 50;	//�����ͽ�		//+1�� �ǹ�: 4byte ��ŭ �̵��ط�	

	for (int i = 0; i < 10; i++) {
		*(array + i) = i*1.2f;
	}


	for (int i = 0; i < 10; i++) {
		printf("array[%d] = %f\n", i, *parray++);
	}
	*/




	/*
	//�л� ������ ���α׷�

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

	printf("�̸�: %s, ����: %d, ��: %d, ����: %s\n", name, age, classNum, sex == 0 ? "����" : "����");


	//10��
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
		printf("�̸�: %s, ����: %d, ��: %d, ����: %s\n", nameArray[i], ageArray[i], classNumArray[i], sexArray[i] == 0 ? "����" : "����");
	}

	//���� ������ �ִ� �����͸� �ϳ��� ��� ���ο� ������ Ÿ���� ������ִ� ������ ����
	//����ü

	struct Student {	//����� ���� ������ Ÿ��
		int age;	//����ü ���
		char name[50];
		int classNum;
		int sex;
	};

	struct Student st;	//����ü ����

	st.age = 10;		//. : period ������
	st.classNum = 7;
	st.name[0] = 'C';
	st.name[1] = 'h';
	st.name[2] = 'o';
	st.name[3] = 'i';
	st.name[4] = '\0';	//null

	//strcpy(st.name,"Choi");
	st.sex = 0;

	printf("\n ����ü ���� \n");
	printf("�̸�: %s, ����: %d, ��: %d, ����: %s\n", st.name, st.age, st.classNum, st.sex == 0 ? "����" : "����");
	*/


	/*
	typedef struct tagStudent {	//����� ���� ������ Ÿ��
		int age;	//����ü ���
		char name[50];
		int classNum;
		int sex;
	} Student;


	Student array[3];

	//typedef struct tagStudent Student;		//Student�� tagStudent�ε� �� �� �ִ�

	//sizeof(array) �迭�� ��ü ����Ʈ ��
	//sizeof(array[0]) �迭�� ����� ����Ʈ ��

	int length = sizeof(array) / sizeof(array[0]);		//�迭 ����� ����

	
	//for (int i = 0; i < length; i++) {
	//	array[i].age = i + 10;
	//	sprint(array[i].name, "Baik_%d", i);
	//	array[i].classNum = i;
	//	array[i].sex = i % 2;
	//}
	
	
	for (int i = 0; i < length; i++) {
		printf("�л��� �̸��� �Է��ϼ���:");
		scanf("%s", array[i].name);

		printf("�л��� ������ �Է��ϼ���:");
		scanf("%d", &array[i].age);

		printf("�л��� ���� �Է��ϼ���:");
		scanf("%d", &array[i].classNum);

		printf("�л��� ������ �Է��ϼ���: (0: ����, 1: ����)");
		scanf("%d", &array[i].sex);
		system("cls");		//�Է�â clear

	}

	for (int i = 0; i < length; i++) {
		printf("�̸�: %s\n", array[i].name);
		printf("����: %d\n", array[i].age);
		printf("��: %d\n", array[i].classNum);
		printf("����: %s\n", array[i].sex == 0 ? "����" : "����");
	}
	*/


	//�������� ������� �迭�� ����...���....






	return 0;
}