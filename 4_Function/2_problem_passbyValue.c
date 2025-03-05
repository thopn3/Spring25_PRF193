#include <stdio.h>

void swapNumbers(int *x, int *y){ // Thâm số là 2 con trỏ, đang trỏ tới đỉa chị của x và y trong hàm main
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(){
	int x=10, y=20;
	
	printf("After: x = %d, y = %d\n", x, y);
	swapNumbers(&x, &y);
	printf("Before: x = %d, y = %d\n", x, y);
	
	return 0;
}