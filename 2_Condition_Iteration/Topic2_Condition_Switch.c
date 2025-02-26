#include <stdio.h>

int main(){
	int year, month;
	
	printf("Nhap nam va thang can kiem tra: ");
	scanf("%d%d", &year, & month);
	
	// Kiểm tra gia trị của month
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7: 
		case 8: 
		case 10:
		case 12:
			printf("Thang %d co 31 ngay\n", month);
			break;
		case 2:
			// Kiểm tra giá trị của year (nhuận hoặc không)
			if((year%4==0 && year%100!=0) || (year%400==0))
				printf("Thang %d co 29 ngay\n", month);
			else
				printf("Thang %d co 28 ngay\n", month);
			break;
		case 4:
		case 6: 
		case 9:
		case 11:
			printf("Thang %d co 30 ngay\n", month);
			break;
		default:
			printf("Nhap nam hoac (va) thang chua dung\n");
	}
	
	return 0;
}