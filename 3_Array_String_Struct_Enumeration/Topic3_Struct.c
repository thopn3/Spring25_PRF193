#include <stdio.h>

// Định nghĩa 1 struct chứa thông tin cho 1 đối tượng sinh viên
struct Student{
	int id;
	char name[50];
	double gpa;
};

int main(){
	// Sử dụng Struct -> Khai báo 1 biến có kiểu Struct
	struct Student student1;
	
	// Nhập thông tin cho student1
	printf("Input student information:\n");
	printf("Enter Id: "); 
	scanf("%d", &student1.id);
	printf("Enter Name: ");
	fflush(stdin);
	gets(student1.name);
	printf("Enter GPA: "); scanf("%lf", &student1.gpa);
	
	// In thông tin của student1 ra màn hình
	printf("Information:\n");
	printf("ID: %d - Name: %s - GPA: %.1lf", student1.id, student1.name, student1.gpa);
	return 0;
}