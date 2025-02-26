/*
	Viết 1 CT đơn giản thực hiện hoạt động nhập/ xuất dữ liệu cho 1 biến có kiểu số nguyên (4 bytes)
*/
#include <stdio.h>

int main(){
	// Khai báo 1 biến kiểu số nguyên (4 bytes)
	int number;
	// Hiển thị thống báo nhập dữ liệu cho người dùng
	printf("Enter an integer number: ");
	// Thực hiện nhập từ bàn phím
	scanf("%d", &number);
	// In ra giá trị của biến number
	printf("The value of number: %d", number);
	return 0;
}
