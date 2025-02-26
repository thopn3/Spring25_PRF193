/**
	Viết 1 CT nhập một mảng số nguyên gồm n phần tử từ bàn phím.
	In ra các phần tử trên từng dòng
	Ví dụ:
	5
	7 9 10 2 15
	Output:
	7
	9
	10
	2
	15
*/
#include <stdio.h>

int main(){
	// Khai báo số phần tử của mảng và biến vòng lặp
	int n, i;
	// Nhập giá trị cho n
	scanf("%d", &n);
	// Khai bao mang số nguyên a gồm n phần tử
	int a[n];
	// Duyệt từng tử thông qua chỉ số và nhập giá trị cho các phần tử
	for(i=0; i<n; i++){
		scanf("%d", &a[i]); // &a[i]: Địa chỉ phần tử trong mảng a tại chỉ số i
	}
	// Duyệt từng phần tử trong mang a để in ra giá trị
	printf("Output:\n");
	for(i=0; i<n; i++){
		printf("%d\n", a[i]);
	}
	
	return 0;
}












