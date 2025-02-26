#include <stdio.h>
#include <stdlib.h>

int main(){
	float d, r, dt, cv;
	
	printf("-- Chuong trinh cua HE999999 - Pham Ngoc Tho ---\n");
	printf("Nhap chieu dai HCN: ");
	
	scanf("%f", &d);
	printf("Nhap chieu rong HCN: ");
	scanf("%f", &r);
	
	dt = d*r;
	cv = (d+r)*2;
	
	printf("Binh phuong dien tich HCN: %.2f\n", dt*dt);
	printf("Binh phuong chu vi HCN: %.2f\n", cv*cv);
	
	system("pause");
	return 0;
}
