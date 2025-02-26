/*
	Viết 1 CT tính và in ra: Diện tích, Chu vi của hình tròn với bán kính được nhập từ bàn phím
*/
#include <stdio.h>
// Định nghĩa 1 hằng (số) đặt tên là PI
#define PI 3.14
// Hoặc
// const double PI = 3.14;

int main(){
	// Khai báo các biến dùng trong CT
	float radius, area, perimeter;
	printf("-- Chuong trinh tinh Dien tich, Chu vi hinh tron --\n");
	// Nhập giá trị cho radius
	printf("Moi ban nhap ban kinh hinh tron: ");
	scanf("%f", &radius);
	
	// Tính Diện tích và Chu vi
	area = PI * radius * radius;
	perimeter = 2 * PI * radius;
	
	// In kết quả ra màn hình
	printf("Dien tich la: %.3f\nChu vi la: %.3f", area, perimeter);
	return 0;
}