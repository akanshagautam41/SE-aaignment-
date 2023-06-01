#include <iostream>
using namespace std;

class Person {
public:
	string name;
    int age;
    void initializeData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
	float percentage;
    void readData() {
        initializeData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    
    void writeData() {
        displayData();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person {
 public:
	float salary;
    void readData() {
        initializeData();
        cout << "Enter salary: ";
        cin >> salary;
    }
    
    void writeData() {
        displayData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    cout << "Enter Student Details:\n";
    student.readData();
    cout << "\nStudent Details:\n";
    student.writeData();
    
    cout << endl;
    
    Teacher teacher;
    cout << "Enter Teacher Details:\n";
    teacher.readData();
    cout << "\nTeacher Details:\n";
    teacher.writeData();
    
    return 0;
}
