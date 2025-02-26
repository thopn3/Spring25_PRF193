/*
	Viết 1 CT đơn giản thực hiện hoạt động nhập/ xuất dữ liệu cho 1 biến có kiểu số nguyên (4 bytes)
*/
#include <iostream>

using namespace std;

int main(){
	// Khai báo 1 biến kiểu số nguyên (4 bytes)
	int number;
	// Hiển thị thống báo nhập dữ liệu cho người dùng
	cout << "Enter an integer number: ";
	// Thực hiện nhập từ bàn phím
	cin >> number;
	// In ra giá trị của biến number
	cout << "The value of number:" << number << endl;
	return 0;
}
