#include <stdio.h>

//������ �迭�� �迭�� ũ�⸦ �Ű������� �迭���� ���� ū ���� ��ȯ�ϴ� �Լ� int max(int[], int) �ۼ��ϱ�

int max(int array[5], int size) {
	int max;
	max = array[0];
	for (int i = 1; i < size; i++) {
		if (max < array[i]) {
			max = array[i];
		}
	}
	return max;
}

//���� �迭�� �迭�� ���̸� ���ڷ� �޾�, �迭�� ����� ������ ����� ��ȯ�ϴ� �Լ� double average(int[], int)�� �ۼ��Ͻÿ�

double average(int array[5], int size) {
	int ave = 0;
	for (int i = 0; i < size; i++) {
		ave += array[i];
	}
	return ave/size;
}


//�����ϳ��� �Ű������� �޾� �빮���̸� 1 �ƴϸ� 0�� ��ȯ�ϴ� �Լ� int isUpper(char c)�� �ۼ��Ͻÿ�

int isUpper(char ch) {
	if ((65<=ch)&&(ch<= 90))
		return 1;
	else
		return 0;
}

//����(100���� ���� �ڿ���)�� �Է¹޾� ����(A~F)�� ��ȯ�ϴ� �Լ� char getGrade(int score)�� �ۼ��Ͻÿ�
char getGrade(int score) {
	if (score >= 90)
		return 'A';
	else if (score >= 80)
		return 'B';
	else if (score >= 70)
		return 'C';
	else if (score >= 60)
		return 'D';
	else
		return 'F';

}

int main() {
	
	int array[5];
	printf("���� 5���� �Է��ϼ��� : ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &array[i]);
	}
	
	printf("���� ū ���� : %d\n",max(array, 5));
	printf("����� : %lf\n",average(array, 5));
	

	char ch;
	int num = 0;
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf_s(" %c", &ch); //���� ���� 
	num = isUpper(ch);
	printf("�� ���ڴ� �빮�� �Դϴ�(������ 1, �ƴϸ� 0) : %d\n",num);
	
	int score;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score );
	printf("������ %c�Դϴ�. ",getGrade(score));

	
}