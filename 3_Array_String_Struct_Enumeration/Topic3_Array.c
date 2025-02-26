#include <stdio.h>

#define MAX 10

int main(){
	// Khai báo 1 mảng gồm 5 phần tử với kiểu dữ liệu là int
	int a1[5];
	// Khai báo 1 mảng gồm 5 phần tử kiểu int và khởi tạo giá trị ban đầu cho mảng
	int a2[5] = {9, 7, 10, 3, 2};
	// Khai báo 1 mảng không xác định trước số phần tử và gán giá trị ban đầu
	int a3[] = {100, 50, 200};
	// Khai báo 1 mảng double gồm n phần từ 
	// (n: có thể được gán giá trị ban đầu hoặc được nhập từ bàn phím)
	int n = 10;
	double a4[n];
	// Khai báo 1 mảng kiểu float gồm MAX (constant) phần tử
	float a5[MAX];
	
	// Thực hiện nhập dữ liệu cho các phần tử của a1
	int i;
	printf("Nhap gia tri cho cac phan tu cua mang a1\n");
	for(i=0; i<5; i++){
		// In ra địa chỉ của từng phần tử được cấp phát trên bộ nhớ
		// printf("%d\n", &a1[i]);
		printf("Phan tu tai index = %d: ", i);
		scanf("%d", &a1[i]); // Toán tử & dùng để xác định địa chỉ của phần tử tại index i
	}
	
	// Duyệt và in ra giá trị của từng phần tử trong mảng a1
	printf("\nDanh sach cac phan tu cua mang a1: ");
	for(i=0; i<5; i++){
		printf("%d ", a1[i]);
	}
	return 0;
}


