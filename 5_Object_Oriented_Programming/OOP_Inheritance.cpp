#include <iostream>
#include <string>

using namespace std;

class Person{ // Parent class
	// Attributes
	private:
		string id;
		string name;
		int age;
		bool gender;
	public:
		// Constructors
		Person(){}
		Person(string _id, string _name, int _age, bool _gender){
			id = _id;
			name = _name;
			age = _age;
			gender = _gender;
		}
		// Setter, getter methods
		void setId(string _id){
			id = _id;
		}
		void setName(string _name){
			name = _name;
		}
		void setAge(int _age){
			age = _age;
		}
		void setGender(bool _gender){
			gender = _gender;
		}
		
		string getId(){
			return id;
		}
		
		string getName(){
			return name;
		}
		
		int getAge(){
			return age;
		}
		
		bool getGender(){
			return gender;
		}
		
		// Methods:
		virtual string printInfo(){
			string newGen = gender==true ? "Male" : "Female";
			return id + " - " + name + " - " + to_string(age) + " - " + newGen;
		}
};

class Student : public Person{
	private:
		string major;
		double score;
	public:
		Student() : Person(){}
		
		Student(string _id,string _name,int _age,bool _gender,string _major,double _score) : Person(_id,_name,_age,_gender){
			major = _major;
			score = _score;
		}
		
		void setMajor(string _major){
			major = _major;
		}
		void setScore(double _score){
			score = _score;
		}
		string getMajor(){
			return major;
		}
		double getScore(){
			return score;
		}
		
		// Override method
		string printInfo() override {
			return Person::printInfo() + " - " + major + " - " + to_string(score);
		}
};


// Tuong t? v?i Teacher

// Th?c thi t?i main function
int main(){
	Student s1 = Student("HE123456", "Nguyen Van A", 20, true, "IC", 7.5);
	cout << s1.printInfo();
	
	return 0;
}











