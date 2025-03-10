#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Student{
	private:
		int id;
		string fName;
		string lName;
		bool gender;
		double score;
	public:
		// Ngoài hoạt động setters nhứ vd trước -> Contructor (hàm khởi tạo)
		Student(int id, string fName, string lName, bool gender, double score){
			this->id = id;
			this->fName = fName;
			this->lName = lName;
			this->gender = gender;
			this->score = score;
		}
		
		string toString(){
			string newGender = gender==true ? "Male" : "Female";
			ostringstream oss;
    		oss.precision(2);
    		oss << fixed;
			oss << id << "\t" << fName << " " << lName << "\t" << newGender << "\t" << score;
			
			return oss.str();
		}
};

int main(){
	// Khai báo 2 đối tượng cùng kiểu Student
	Student s1 = Student(1, "Hoang", "Pham", true, 10);
	cout << s1.toString() << "\n";
	
	return 0;
}


