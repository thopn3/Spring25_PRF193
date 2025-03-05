/*
	Viết CT:
	1. Nhập vào 1 mảng số nguyên gồm n phần tử, nhập từ bàn phím
	2. Hiển thị danh sách các số nguyên ra màn hình
	3. Tính tổng các phần tử trong mảng
	4. Sắp xếp các phần tử theo thứ tự tăng hoặc giảm dần -> In danh sách sau khi đã sắp xếp
	5. Tìm và in ra số các phần tử là các số chia hết cho 3 và không chia hết cho 5
*/
#include <stdio.h>

// Hàm xử lý nhập dữ liệu cho mảng
void inputNumbers(int arr[], int n){
	int i;
	printf("Input the elements of array:\n");
	for(i=0; i<n; i++){
		printf("Element #%d: ", i);
		scanf("%d", &arr[i]);
	}
}

// Hàm xử lý in các phần tử của mảng trên cùng 1 dòng. Giữa các phần tử cách nhau bởi 1 khoảng trắng
void printNumbers(int arr[], int n){
	int i;
	printf("The elements of array: ");
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Hàm xử lý tính tổng các phần tử của mảng
int sumNumbers(int arr[], int n){
	int i, total = 0;
	for(i=0; i<n; i++){
		total += arr[i];
	}
	return total;
}

// Hàm xử lý sắp xếp theo thứ tự giảm dần
void sortNumbers(int arr[], int n){
	int i, j, tmp;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(arr[i]<arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

// Hàm tìm và in các phần tử chia hết cho 3 và không chia hết cho 5
void searchAndPrint(int arr[], int n){
	int i;
	printf("Search result: ");
	for(i=0; i<n; i++){
		if(arr[i]%3==0 && arr[i]%5!=0){
			printf("%d ", arr[i]);
		}
	}
}

int main(){
	int i, n;
	
	printf("Enter n: ");
	scanf("%d", &n);
	int arr[n];
	
	// Nhập mảng
	inputNumbers(arr, n);
	// In mảng
	printNumbers(arr, n);
	// In ra tổng các phần tử của mảng
	printf("Sum numbers: %d\n", sumNumbers(arr, n));
	sortNumbers(arr, n);
	// In mảng
	printNumbers(arr, n);
	searchAndPrint(arr, n);
	
	return 0;
}