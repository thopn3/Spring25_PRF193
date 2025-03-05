#include <stdio.h>
#include <string.h>

// Khai báo 1 cấu trúc dữ liệu để mô tả thông tin của 1 đối tượng Sinh viên
struct Student{
	char rollNumber[9];
	char name[30];
	char gender;
	int phone;
};

int main(){
	int n, i;
	
	// Nhập số sv cần quản lý
	scanf("%d", &n);
	// Khai báo mảng thực tế chứa danh sách các Sinh viên
	struct Student list[n];
	
	// Nhập dữ liệu cho từng Sinh viên trong mảng 'list'
	for(i=0; i<n; i++){
		// Xóa input buffer
		fflush(stdin);
		printf("# %d:\n", (i+1));
		// Nhập rollNumber, name, gender
		printf("Roll: "); gets(list[i].rollNumber);
		printf("Name: "); gets(list[i].name);
		printf("Gender: "); scanf("%c", &list[i].gender);
		printf("Phone: "); scanf("%d", &list[i].phone);
	}
	
	// In danh sách các sinh viên ra màn hình
	printf("List of Students\n");
	printf("Roll\tName\t\tGender\tPhone\n");
	for(i=0; i<n; i++){
		char genderVal[7];
		if(list[i].gender == 'M'){
			strcpy(genderVal, "Male");
		} else if(list[i].gender == 'F'){
			strcpy(genderVal, "Female");
		} else{
			strcpy(genderVal, "Other");
		}
		
		printf("%s\t%s\t%s\t%d\n", list[i].rollNumber, list[i].name, genderVal, list[i].phone);
	}
	
	// Tìm kiếm sinh viên theo Mã và theo tên
	printf("\nSearh single student by RollNumber\n");
	char search[9];
	printf("Enter search value: "); gets(search);
	printf("Search result:\n");
	int count = 0;
	for(i=0; i<n; i++){
		// Linear Search: Tìm kiếm tuần tự
		if(strcmp(list[i].rollNumber, search)==0){
			char genderVal[7];
			if(list[i].gender == 'M'){
				strcpy(genderVal, "Male");
			} else if(list[i].gender == 'F'){
				strcpy(genderVal, "Female");
			} else{
				strcpy(genderVal, "Other");
			}
			printf("Roll\tName\t\tGender\tPhone\n");
			printf("%s\t%s\t%s\t%d\n", list[i].rollNumber, list[i].name, genderVal, list[i].phone);
			count++;
			break;
		}
	}
	
	if(count==0){
		printf("Student not found!");
	}
	
	
	return 0;
}



