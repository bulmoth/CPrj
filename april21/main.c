#include <stdio.h>
#include <stdlib.h>		//atoi �Լ�


/*
//call by value
//call by address

int add(int a, int b) {
	return a + b;
}

//void printArray(int array[], int size) {			//�� �迭�� ����, ���� ���� ���簡 ��. ��ȿ����.
void printArray(const int *parray, int size){		//�ּҰ��� �����ϸ� �Ǳ� ������ �޸� ���� �پ��, but ���� �迭�� ���� �ٲ� �� �ִ� ������ ���� >> const�� ����
	for (int i = 0; i < size; i++) {
		printf("parray[%d] = %d\n", i, parray[i]);
		
	}

	//parray[0] = 100;	//const�� ���� �� ����

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

	printArray(array, size);	//�迭���� �ּҰ��̶� &array �Ƚ��൵ ��


	return 0;
}
*/




/*
struct Array {	// ����� ���� ������ Ÿ��
	int array[100];		// ����ü ���
	int size;			

};

void Add10(struct Array data){
//void Add10(struct Array* data) {
	for(int i=0; i<data.size; i++){
	//for (int i = 0; i < data->size; i++) {	//-> ȭ��ǥ ������....dqta �ּҰ��� �ִ� �ּҷ� ���� size�� ã�ƶ�~~~ �̸���...��...��.....
		data.array[i] += 10;
		//data->array[i] += 10;
		//data->size == (*data).size;
	}

}



int main() {
	struct Array a;		//struct Array��� ������ Ÿ���� a
	a.size = sizeof(a.array) / sizeof(a.array[0]);		//����ü ��� size ����,,,

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




//������Ʈ ��Ŭ�� -> �Ӽ� -> ����� -> ����μ� �� ���� cmd â�� ���� �����ѰŶ� �Ȱ��� ���� �� ����,,
//argc, argv : ���������		//���α׷��� �������� �� �������� ���ʿ� ���޵Ǵ� ����? �������Ͽ� ���� ������ �� ����,,,
//cmd â -> cd(== change directory) ��θ� -> dir(== directory) *.exe -> ���������� ���������� => ��¹����� ���ڰ� ����,,,
int main(int argc, char* argv[]) {		//argc : main�Լ��� ���޵� ������ ����(����� �ɼ��� ����), ����� ����, �⺻�� 1	//argv : �������� ������ ���ڿ�(����� �ɼ��� ���ڿ���), ���ڵ��� ����(�� �ּҰ�)
	//const int MAX = 100;

	//MAX = 200;	//const ������ �տ� �־ �ȵ�.
	int sum = 0;


	for (int i = 0; i < argc; i++) {
		puts(argv[i]);	//���ڿ� ��¸� �������ִ� �Լ�
	}

	for (int i = 1; i < argc; i++) {
		sum += atoi(argv[i]);		//char* to int
	}

	printf("\n\n");
	printf("sum = %d\n", sum);


	return 0;
}