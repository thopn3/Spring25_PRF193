#include <stdio.h>
#include <stdlib.h>

int main(){
	// Step 1: Khai báo các biến
	int numberOfStudent, flag = 1, i, passScore=0, falseScore=0;
	double score, totalScore = 0.0, avgScore = 0.0;
	
	// Step 2: Nhập dữ liệu và kiểm tra tính hợp lệ của numberOfStudent
	while(flag == 1){
		printf("Enter the number of students (>=1): ");
		scanf("%d", &numberOfStudent);
		
		if(numberOfStudent>=1)
			break;
		else
			printf("Invalid number of student! Please try again.\n");
	}
	
	// Step 3: Nhập điểm của numberOfStudent sinh viên
	for(i=1; i<=numberOfStudent; i++){
		while(flag == 1){
			printf("Enter the score for student %d: ", i);
			scanf("%lf", &score);
			// Kiểm tra giá trị của score
			if(score<0 || score>10)
				printf("Invalid score! Please try again.\n");
			else
				break;
		}
		// Step 4: Tính toán
		totalScore += score;
		avgScore = totalScore/numberOfStudent;
		
		if(score>=5)
			passScore++;
		else
			falseScore++;	
	}
	
	// Step 5: Hiển thị
	printf("\nStatistics:\n");
	printf("Total score: %.1lf\n", totalScore);
	printf("Average score: %.2lf\n", avgScore);
	printf("Passed: %d\n", passScore);
	printf("Failed: %d\n", falseScore);
	
	system("pause");
	return 0;
}