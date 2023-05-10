#include <stdio.h>

int global_val = 30;
void call_by_value(int* val) {
	val = &global_val;
}

void call_by_refer(int** ref) {
	*ref = &global_val;
}

int main() {
	int local_val = 10;
	int *value = &local_val;
	int* refer = &local_val;
	printf("before : *value = %d, *refer=%d\n", *value, *refer);
	call_by_value(value);
	call_by_refer(&refer);
	printf("after : *value = %d, *refer=%d\n", *value, *refer);
}