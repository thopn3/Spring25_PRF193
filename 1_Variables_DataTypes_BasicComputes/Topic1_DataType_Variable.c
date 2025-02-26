#include <stdio.h>

int main(){
	// Khai báo và gán giá trị ban đầu cho các biến
	// Integral: Kiểu số nguyên
	char  ch = 'A';		// 1 byte
	short sh = 10;		// 2 bytes
	int i = 100;		// 2 -> 4 bytes (tùy vào hệ thống)
	long l = 2000L;
	long long ll = 4000000LL;
	
	// Floating-Point: Real (Số thực)
	float f = 10.5f;
	double d = 100.127;
	
	// In ra địa chỉ, kích thước và giá trị của biến
	printf("ch tai dia chi: %u, duoc cap phat:%d bytes, voi gia tri: %c\n", &ch, sizeof(ch), ch);
	printf("short tai dia chi: %u, duoc cap phat:%d bytes, voi gia tri: %hd\n", &sh, sizeof(sh), sh);
	printf("i tai dia chi: %u, duoc cap phat:%d bytes, voi gia tri: %d\n", &i, sizeof(i), i);
	printf("l tai dia chi: %u, duoc cap phat:%d bytes, voi gia tri: %ld\n", &l, sizeof(l), l);
	printf("ll tai dia chi: %u, duoc cap phat:%d bytes, voi gia tri: %lld\n", &ll, sizeof(ll), ll);
	
	printf("f tai dia chi: %u, duoc cap phat:%d bytes, voi gia tri: %f\n", &f, sizeof(f), f);
	printf("d tai dia chi: %u, duoc cap phat:%d bytes, voi gia tri: %.2lf\n", &d, sizeof(d), d);
}
