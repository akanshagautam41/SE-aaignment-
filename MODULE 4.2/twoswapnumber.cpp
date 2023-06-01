#include <iostream>

class NumberSwap {
private:
    int num1;
    int num2;

public:
    NumberSwap(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend void swapNumbers(NumberSwap& obj);
    void displayNumbers() {
        std::cout << "swapping: " << num1 << ", " << num2 << std::endl;
    }
};

void swapNumbers(NumberSwap& obj) {
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    NumberSwap obj(num1, num2);
    

    swapNumbers(obj);

    obj.displayNumbers();

    return 0;
}

