#include <stdio.h>

int main(){
	int time;
	
	printf("Please enter time: ");
	scanf("%d", &time);
	
	// Cấu trúc if đơn
	if(time>=0 && time<=12)
		printf("Good morning!\n"); // Thực hiện khi điều kiện trả về True
	else if(time>12 && time<=18)
		printf("Good Afternoon!\n");	
	else if(time>18 && time<=24)
		printf("Good Everning!\n");
	printf("Have a nice day!\n");
	
	return 0;
}
