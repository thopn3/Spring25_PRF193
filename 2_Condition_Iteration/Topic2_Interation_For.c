#include <stdio.h>

int main(){
	// Khai báo các biến
	int count=0, i, n;
	
	// Nhập giá trị cho n
	scanf("%d", &n);
	
	// Kiểm tra các phần tử từ 1 -> n
	for(i=n; i>=1; i--){
		if(i%3==0 && i%5!=0){
			count++;
		}
	}
	
	// Hiển thị số các phần tử từ [1-n] chia hết cho 3 và không chia hết cho 5
	printf("Numbers: %d", count);
	
	return 0;
}