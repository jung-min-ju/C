#include <stdio.h>

//정수형 배열과 배열의 크기를 매개변수로 배열에서 가장 큰 수를 반환하는 함수 int max(int[], int) 작성하기

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

//정수 배열과 배열의 길이를 인자로 받아, 배열에 저장된 값들의 평균을 반환하는 함수 double average(int[], int)를 작성하시오

double average(int array[5], int size) {
	int ave = 0;
	for (int i = 0; i < size; i++) {
		ave += array[i];
	}
	return ave/size;
}


//문자하나를 매개변수로 받아 대문자이면 1 아니면 0을 반환하는 함수 int isUpper(char c)를 작성하시오

int isUpper(char ch) {
	if ((65<=ch)&&(ch<= 90))
		return 1;
	else
		return 0;
}

//점수(100보다 작은 자연수)를 입력받아 학점(A~F)을 반환하는 함수 char getGrade(int score)를 작성하시오
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
	printf("정수 5개를 입력하세요 : ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &array[i]);
	}
	
	printf("가장 큰 수는 : %d\n",max(array, 5));
	printf("평균은 : %lf\n",average(array, 5));
	

	char ch;
	int num = 0;
	printf("문자 하나를 입력하세요 : ");
	scanf_s(" %c", &ch); //버퍼 비우기 
	num = isUpper(ch);
	printf("이 문자는 대문자 입니다(맞을시 1, 아니면 0) : %d\n",num);
	
	int score;
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score );
	printf("학점은 %c입니다. ",getGrade(score));

	
}