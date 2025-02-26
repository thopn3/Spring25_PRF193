/*
	Viết 1 CT nhập vào 1 mảng số nguyên gồm n phần tử từ bàn phím
	In ra danh sách các phẩn tử đã nhập theo thứ tự tăng (hoặc giảm) dần
*/

#include <stdio.h>

int main(){
	int n, i, j, tmp;
	// Nhập n
	scanf("%d", &n);
	// Khai báo mảng số nguyên với kích thước là 'n' phần từ
	int numbers[n];
	
	// Nhập mảng
	for(i=0; i<n; i++){
		scanf("%d", &numbers[i]);
	}
	
	// Sử dụng phương pháp sắp xếp nổi bọt (Bubble Sort)
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(numbers[i] < numbers[j]){
				tmp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = tmp;
			}
		}
	}
	
	printf("Output:\n");
	for(i=0; i<n; i++){
		printf("%d ", numbers[i]);
	}
	
	return 0;
}



