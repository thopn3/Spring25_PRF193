// Viết 1 CT nhập 1 chuỗi tối đa 100 kí tự từ bàn phím
// In ra số lượng các kí tự là nguyên âm (ueoai | UEOAI) và phụ âm trên 2 dòng khác nhau
/* Example:
	Hello World
	Output:
	3
	7
*/
#include <stdio.h>
#include <ctype.h>

int main(){
	char s[100], c;
	// Nhập s
	gets(s);
	
	// Duyệt từng kí tự trong chuỗi s để kiểm tra
	int i, na=0, pa=0;
	for(i=0; s[i]!='\0'; i++){
		// Kiểm tra kí tự có phải chữ cái [a-zA-Z] hay không
		if(isalpha(s[i])){
			// Kiểm tra nếu kí tự là in hoa -> chuyển về thường
			if(isupper(s[i])) // Kiểm tra
				s[i] = tolower(s[i]); // Chuyển đổi
			if(s[i]=='u' || s[i]=='e' || s[i]=='o' || s[i]=='a' || s[i]=='i')
				na++;
			else
				pa++;
		}
	}
	
	// In ra màn hình
	printf("Output:\n%d\n%d", na, pa);
	return 0;
}

