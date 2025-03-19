#include <iostream>

using namespace std;

// Tạo 1 class gọi là class cha (parent class)
class Shape{
	// Nguyên mẫu của 2 methods mà các class con phải thực hiện
	virtual double area();
	virtual void display();
	// Hàm hủy để tự động hủy đối tượng (giải phóng khỏi bộ nhớ) khi đối tượng không còn sử dụng
	virtual ~Shape(); // Destructor
};

// 2 class con kế thừa từ class cha
class Rectangle: public Shape{
	private:
		double width;
		double height;
	public:
		Rectangle(double w, double h){
			width = w;
			height = h;
		}
		// Hoạt động ghi đè phương thức của class cha
		double area() override {
			return width * height;
		}
		
		void display() override{
			cout << "Rectangle - Area: " << area() << "\n";
		}
};

int main(){
	
	return 0;
}