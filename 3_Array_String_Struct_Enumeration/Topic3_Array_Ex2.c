// Viết 1 CT nhập 1 mảng các số nguyên gồm n phần tử từ bàn phím.
// In ra Trung bình cộng của các số lẻ, số chẵn trên 2 dòng khác nhau (lẻ trên, chẵn dưới)
/*
	5
	7 0 2 9 3
	Output:
	6.33
	1.00
*/

#include <stdio.h>

int main(){
	int n, i, totalEven=0, totalOdd=0, numberOfEven=0, numberOfOdd=0;
	
	scanf("%d", &n);
	int a[n];
	
	// Input array
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	// Check: even, odd
	for(i=0; i<n; i++){
		if(a[i]%2==0){
			totalEven += a[i];
			numberOfEven++;
		}else{
			totalOdd += a[i];
			numberOfOdd++;
		}
	}
	
	// Output:
	printf("Output:\n");
	printf("%.2lf\n", (double)totalOdd/numberOfOdd);
	printf("%.2lf", (double)totalEven/numberOfEven);
	return 0;
}











