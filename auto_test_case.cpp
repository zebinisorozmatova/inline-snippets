#include <iostream>
#include <cstdlib>
using namespace std;

// Example function: sum of two numbers
int add(int a, int b) {
    return a + b;
}

// Automatic test case generator
void generateTestCases(int n) {
    for(int i = 0; i < n; ++i) {
        int a = rand() % 100;
        int b = rand() % 100;
        cout << "Test " << i+1 << ": add(" << a << ", " << b << ") = " << add(a,b) << endl;
    }
}

int main() {
    generateTestCases(5); // Generate 5 test cases
    return 0;
}