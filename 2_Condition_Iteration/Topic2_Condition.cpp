#include <iostream>

int main(){
	int time;
	
	std::cout << "Please enter time: ";
	std::cin >> time;
	
	// Cấu trúc if đơn
	if(time>=0 && time<=12){
		std::cout << "Good morning!\n"; // Thực hiện khi điều kiện trả về True
	}else{
		std::cout << "Hello World!\n"; // Thực hiện khi điều kiện trả về False
	}
	std::cout << "Have a nice day!\n";
	
	return 0;
}