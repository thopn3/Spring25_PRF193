#include <iostream>
#include <string>

using namespace std;

class Employee{
	private:
		int id;
		string name;
		int salary;
	public:
		// Constructor: Hàm khởi tạo
		Employee(){ // Gán giá trị ban đầu cho các thuộc tính
			id = 0;
			name = "",
			salary=0;
		}
		// Khởi tạo đối tượng và gán giá trị cho các thuộc tính
		Employee(int _id, string _name, int _salary){
			id = _id;
			name = _name;
			salary = _salary;
		}
		
		// Phương thức in chi tiết thông tin của một Employee
		void display(){
			cout << id << " " << name << " - Salary: " << salary << "\n";
		}
};

int main(){
	int n, i;
	cin >> n;
	
	// Khai báo 1 mảng chứa các đối tượng có kiểu Employee
	Employee list[n];
	
	// Nhập thông tin cho từng Employee
	for(i=0; i<n; i++){
		int id, salary;
		string name;
		
		cin >> id >> name >> salary;
		list[i] = Employee(id, name, salary);
	}
	
	// In danh sach Employee
	cout << "Output:\n";
	for(i=0; i<n; i++){
		list[i].display();
	}
	
	return 0;
}


