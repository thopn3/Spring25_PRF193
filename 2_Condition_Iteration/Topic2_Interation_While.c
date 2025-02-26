// Tính tổng các số nguyên dương chẵn trong phạm vi từ 1 -> n, n được nhập bởi người dùng
// 10
// Total = 2 + 4 +.... + 10 = ?
#include <stdio.h>

int main(){
	// Khai báo các biến
	int total=0, i=1, n;
	
	// Nhập giá trị cho n
	scanf("%d", &n);
	
	// Cộng dồn các phần tử từ 1 -> n
	while(i<=n){
		if(i%2==0){
			total += i;
			printf("Total until i = %d: %d\n", i, total);
		}
		i++;
	}
	
	printf("Final Total = %d", total);
	
	return 0;
}