#include <iostream>
#include <string>
using namespace std;

template<typename T>
T getPlaceholder() {
    if constexpr (is_same<T, int>::value) return 0;
    else if constexpr (is_same<T, double>::value) return 0.0;
    else if constexpr (is_same<T, string>::value) return "text";
    else return T{};
}

int main() {
    int a = getPlaceholder<int>();
    double b = getPlaceholder<double>();
    string c = getPlaceholder<string>();

    cout << a << ", " << b << ", " << c << endl; // 0, 0, text
    return 0;
}