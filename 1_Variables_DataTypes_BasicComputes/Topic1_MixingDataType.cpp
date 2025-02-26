#include <iostream>
#include <iomanip>

int main(){
	int x = 7;			// 4 bytes
	long y = 100;		// 8 bytes
	double z = 10.3;	// 8 bytes
	
	double result = x*3 + y*10 - z*x; 
	// int*int + long*int - double*int -> Auto convert: int + long - double -> long - double -> double
	std::cout << "Result = " << result << std::endl;
	
	// Casting: Chủ động ép kiểu dữ liệu trước khi thực hiện tính toán
	int a = 10, b = 3;
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "a/b = " << float(a)/b << std::endl;
	
	return 0;
}