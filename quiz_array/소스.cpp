#include <stdio.h>


int main() {
	int a[10];
	int b = 0;
	int c = 9;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &b);
	    if (b % 2 == 0) { //¦���϶�
			a[c--] = b;
			//printf("%d,%d\n",c, a[c]);
		}
		else { //Ȧ���϶�  
			a[(c % 2) + (i / 2)] = b;
			//printf("%d,%d\n", d, a[d]);
		}
		  
	} 

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);	
	}
	
}