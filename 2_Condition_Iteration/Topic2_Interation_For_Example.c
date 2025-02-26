// Viết 1 CT in ra các số chẵn và các lẻ trong 1 tập các số nguyên từ m đến n (m,n được nhập bởi người dùng)
#include <stdio.h>

int main(){
	int m, n, i, even=0, odd=0;
	int tmp; // Biến tạm để phục vụ hoạt động hoán đối giá trị của m và n khi m>n
	
	scanf("%d%d", &m, &n);
	
	// Hoán vị giá trị của m cho n và ngược lại
	if(m>n){
		tmp = m;
		m = n;
		n = tmp;
	}
	
	for(i=m; i<=n; i++){
		if(i%2==0) // Kiểm tra số chẵn
			even++;
		else
			odd++;
	}
	
	printf("even: %d\n", even);
	printf("odd: %d\n", odd);
	
	return 0;
}