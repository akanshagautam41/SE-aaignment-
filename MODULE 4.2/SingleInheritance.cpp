#include <iostream>
using namespace std;

class Cricketer {
public:
	string name;
    int age;
    
    void inputData() {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer {
public:
	int totalRuns;
    double averageRuns;
    int bestPerformance;
    
    void inputBatsmanData() {
        inputData();
        cout << "Enter the total runs: ";
        cin >> totalRuns;
        cout << "Enter the best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }
    
    void calculateAverageRuns() {
        averageRuns = static_cast<double>(totalRuns) / 10; // Assuming 10 matches played
    }
    
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputBatsmanData();
    cout << "\nBatsman Data:\n";
    batsman.displayData();
    
    return 0;
}
