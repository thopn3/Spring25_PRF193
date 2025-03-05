#include <stdio.h>

void outputData(int a, int b, int c){ // Tham số (parameters) của hàm (có phạm vi cục bộ trong hàm)
	printf("Values of variables is:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
}

double averageNumbers(int a, int b, int c){
	return (a+b+c)/3.0;
}

void powerNumbers(int a, int b, int c){
	printf("Power of variables:\n");
	printf("a^2 = %d\n", a*a);
	printf("b^2 = %d\n", b*b);
	printf("c^2 = %d\n", c*c);
}

int main(){
	int a, b, c;
	// Gọi hàm nhập dữ liệu cho: a, b, c
	printf("Input a = "); 
	scanf("%d", &a);
	printf("Input b = "); 
	scanf("%d", &b);
	printf("Input c = ");
	scanf("%d", &c);
	
	// Gọi hàm để in các giá trị của: a, b, c ra màn hình
	outputData(a, b, c); // Gọi hàm và truyền các đối số (arguments) để thực thi hàm
	double avg = averageNumbers(a, b, c); // Gọi hàm và gán giá trị cho avg
	printf("\nAverage of a, b, c: %.2lf\n", avg);
	powerNumbers(a, b, c);
	
	return 0;
}