#include <iostream>

class MaxNumber {
private:
    int num1;
    int num2;

public:
    MaxNumber(int a, int b) {
        num1 = a;
        num2 = b;
    }

    friend int findMax(MaxNumber& obj);
};

int findMax(MaxNumber& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    MaxNumber obj(num1, num2);

    int max = findMax(obj);

    std::cout << "The maximum number is: " << max << std::endl;

    return 0;
}

