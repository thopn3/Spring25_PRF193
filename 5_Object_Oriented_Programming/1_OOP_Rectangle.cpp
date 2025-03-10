// Bước 1: Tạo 1 class đặt tên Rectangle gồm các thuộc tính (properties): width, height và các phương thức (methods)
// gồm: setWidth, setHeigth -> Gán giá trị cho các thuộc tính; getWidth, getHeight -> Lấy giá trị của các thuộc tính
// Bước 2: Khởi tạo 1 đối tượng (object) có kiểu Rectangle và sử dụng các thành phần của đối tượng này.
#include <iostream>

using namespace std;

class Rectangle{
	// Khai báo các trường chứa dữ liệu (data fields) của đối tượng
	private:
		double width;
		double height;
	// Định nghĩa 4 phương thức (methods) mô tả hành vi (behavior) -> Tác động tới dữ liệu của đối tượng: width, height
	public:
		// Gán giá trị cho width, height
		void setWidth(double w){
			width = w;
		}
		void setHeight(double h){
			height = h;
		}
		// Lấy giá trị của width, height
		double getWidth(){
			return width;
		}
		double getHeight(){
			return height;
		}
		// Tính chu vi HCN
		double perimeter(){
			return (width+height)*2;
		}
		// Tính diện tích HCN
		double area(){
			return width*height;
		}
};

int main(){
	// Khai báo 2 biến cho người dùng nhập từ bàn phím
	double width, height;
	cout << "Enter width: ";
	cin >> width;
	cout << "Enter height: ";
	cin >> height;
	// Khai báo 1 đối tượng kiểu class: Rectangle
	Rectangle rec1;
	// Cung cấp dữ liệu cho đối tượng rec1 thông quá các hàm setters
	rec1.setWidth(width);
	rec1.setHeight(height);
	// Gọi hàm và in ra Chu vi, Diện tích của HCN
	cout << "Perimeter with: width = " << rec1.getWidth() << ", height = " << rec1.getHeight() << " is: " << rec1.perimeter() << "\n";
	cout << "Area = " << rec1.area();
	
	return 0;
}





