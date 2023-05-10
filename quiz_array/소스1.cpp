#include <stdio.h>

void swap(int a, int b) { //call by value
	int temp = a;
	a = b;
	a = temp;
}

void swap2(int *a, int *b) { //call by reference //��Ȯ�ϰ� 
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main() {
	int x = 10, y = 20;
	printf("x = %d, y= %d\n", x, y);
	swap(x, y);
	printf("swap1() ȣ�� �� x= %d, y = %d\n", x, y);
	swap2(&x, &y);
	printf("swap2() ȣ�� �� x= %d, y = %d\n", x, y);
}