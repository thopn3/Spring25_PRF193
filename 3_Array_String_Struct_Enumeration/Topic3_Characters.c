#include <stdio.h>



int main(){
	// Khai báo 1 mảng kí tự (chuỗi kí tự)
	char name[100], ch, after;
	int age;
	
	// Nhập giá trị cho các phần tử trong mảng 'name'
	// Cách 1: Sử dụng hàm scanf với định dạng %s
	// scanf("%s", name);
	
	// Vấn đề Cách 1: Chỉ chứa các kí tự liên tiếp không chứa khoảng trắng
	// Cách 2: Sử dụng cú pháp %[^\n] và dựa vào đặc tính của mảng kí tự (kết thúc bởi kí tự \0 => Tương ứng ascii code là phím Enter)
	// scanf("%[^\n]", name);
	
	// Vấn đề gặp phải cách 2: Tràn bộ nhớ -> Sai input data. Hoặc sau khi nhập còn chứa input buffer
	scanf("%[^\n]", name);
	scanf("%d", &age);
	// Xóa input buffer (Xóa vùng nhớ đệm)
	// Cách 1: Lưu trữ \n trong input buffer vào biến after
	// scanf("%c%c", &after, &ch);
	// Cách 2: Đọc kí tự từ input buffer và hủy các kí tự
	/*
	while(getchar()!='\n'){
		return 0;
	}*/
	// Cách 3: Sử dụng hàm trong thư viện để giải phóng input buffer
	fflush(stdin);
	scanf("%c", &ch);
	
	// Duyệt các kí tự từ mảng name
	int i;
	for(i=0; name[i]!='\0'; i++){
		// Kiểm tra kí tự và chuyển: Thường <-> Hoa
		if(name[i]>= 65 && name[i]<=90)
			name[i] += 32;
		else if(name[i]>=97 && name[i]<=122)
			name[i] -= 32;
	}
	
	// In mảng 'name' ra màn hình
	printf("Name is: %s\n", name);
	printf("Ch = %c\n", ch);
	printf("%d", age);
	
	
	return 0;
}