#include <iostream>
using namespace std;

class Students {

public:
	int rollNumber;
    void inputRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

class Test : public Students {

public:
	float subject1Marks;
    float subject2Marks;
    void inputTestMarks() {
        inputRollNumber();
        cout << "Enter marks for Subject 1: ";
        cin >> subject1Marks;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2Marks;
    }
};

class Result : public Test {

    
public:
	float totalMarks;
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }
    
    void displayResult() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result studentResult;
    cout << "Enter Test Marks and Roll Number:\n";
    studentResult.inputTestMarks();
    studentResult.calculateTotalMarks();
    cout << "\nResult:\n";
    studentResult.displayResult();
    
    return 0;
}

